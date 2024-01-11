/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ExpectedUeBehavior.h
 *
 *
 */

#ifndef ExpectedUeBehavior_H_
#define ExpectedUeBehavior_H_

#include <string>
#include "UserLocation.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class ExpectedUeBehavior {
 public:
  ExpectedUeBehavior();
  virtual ~ExpectedUeBehavior();

  void validate();

  /////////////////////////////////////////////
  /// ExpectedUeBehavior members

  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::UserLocation>& getExpMoveTrajectory();
  /// <summary>
  ///
  /// </summary>
  std::string getValidityTime() const;
  void setValidityTime(std::string const& value);

  friend void to_json(nlohmann::json& j, const ExpectedUeBehavior& o);
  friend void from_json(const nlohmann::json& j, ExpectedUeBehavior& o);

 protected:
  std::vector<oai::model::common::UserLocation> m_ExpMoveTrajectory;

  std::string m_ValidityTime;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* ExpectedUeBehavior_H_ */
