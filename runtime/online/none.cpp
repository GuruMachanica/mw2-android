// No service: the title's sockets stay on this machine.
#include "service.h"

std::unique_ptr<online::Service> online::Create() { return nullptr; }
