#ifndef SSF_SERVICES_SOCKS_CONFIG_H_
#define SSF_SERVICES_SOCKS_CONFIG_H_

#include <string>

#include "services/base_service_config.h"

namespace ssf {
namespace services {
namespace socks {

class Config : public BaseServiceConfig {
 public:
  Config();
  Config(const Config& process_service);
};

}  // socks
}  // services
}  // ssf

#endif  // SSF_SERVICES_SOCKS_CONFIG_H_