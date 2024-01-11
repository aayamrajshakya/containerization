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

#include "CollectionPeriodRmmNrMdt.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

CollectionPeriodRmmNrMdt::CollectionPeriodRmmNrMdt() {}

void CollectionPeriodRmmNrMdt::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CollectionPeriodRmmNrMdt::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CollectionPeriodRmmNrMdt::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CollectionPeriodRmmNrMdt" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool CollectionPeriodRmmNrMdt::operator==(
    const CollectionPeriodRmmNrMdt& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool CollectionPeriodRmmNrMdt::operator!=(
    const CollectionPeriodRmmNrMdt& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CollectionPeriodRmmNrMdt& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, CollectionPeriodRmmNrMdt& o) {
  from_json(j, o.m_value);
}

CollectionPeriodRmmNrMdt_anyOf CollectionPeriodRmmNrMdt::getValue() const {
  return m_value;
}

void CollectionPeriodRmmNrMdt::setValue(CollectionPeriodRmmNrMdt_anyOf value) {
  m_value = value;
}

CollectionPeriodRmmNrMdt_anyOf::eCollectionPeriodRmmNrMdt_anyOf
CollectionPeriodRmmNrMdt::getEnumValue() const {
  return m_value.getValue();
}

void CollectionPeriodRmmNrMdt::setEnumValue(
    CollectionPeriodRmmNrMdt_anyOf::eCollectionPeriodRmmNrMdt_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common
