import sys
import os
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer

class CustomHandler(SimpleHTTPRequestHandler):
    def end_headers(self):
        self.send_header('Access-Control-Allow-Origin', '*')
        super().end_headers()

CustomHandler.extensions_map.update({
    '.apk': 'application/vnd.android.package-archive',
    '.iso': 'application/octet-stream',
})

def run(port=8080, directory=None):
    if directory:
        os.chdir(directory)
    
    server_address = ('0.0.0.0', port)
    httpd = ThreadingHTTPServer(server_address, CustomHandler)
    print(f"[*] Multi-threaded IPv4 HTTP server listening on http://0.0.0.0:{port}/ serving {os.getcwd()}", flush=True)
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        pass

if __name__ == '__main__':
    dir_to_serve = sys.argv[1] if len(sys.argv) > 1 else 'android/app/build/outputs/apk/campaign/release'
    run(port=8080, directory=dir_to_serve)
