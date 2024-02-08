/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CoreNetworkTypeRm.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

CoreNetworkTypeRm::CoreNetworkTypeRm() {}

bool CoreNetworkTypeRm::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CoreNetworkTypeRm" : pathPrefix;

  return success;
}

void to_json(nlohmann::json& j, const CoreNetworkTypeRm& o) {
  j = nlohmann::json();
  if (o.m_value.getValue() == CoreNetworkType_anyOf::eCoreNetworkType_anyOf::
                                  INVALID_VALUE_OPENAPI_GENERATED) {
    j = nullptr;
  } else {
    to_json(j, o.m_value);
  }
}

void from_json(const nlohmann::json& j, CoreNetworkTypeRm& o) {
  if (j.is_null()) {
    o.m_value.setValue(CoreNetworkType_anyOf::eCoreNetworkType_anyOf::
                           INVALID_VALUE_OPENAPI_GENERATED);
  } else {
    from_json(j, o.m_value);
  }
}

}  // namespace oai::model::common
