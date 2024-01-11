/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * StatusInfo.h
 *
 *
 */

#ifndef StatusInfo_H_
#define StatusInfo_H_

#include "Cause.h"
#include "ResourceStatus.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class StatusInfo {
 public:
  StatusInfo();
  virtual ~StatusInfo();

  void validate();

  /////////////////////////////////////////////
  /// StatusInfo members

  /// <summary>
  ///
  /// </summary>
  ResourceStatus getResourceStatus() const;
  void setResourceStatus(ResourceStatus const& value);
  /// <summary>
  ///
  /// </summary>
  Cause getCause() const;
  void setCause(Cause const& value);
  bool causeIsSet() const;
  void unsetCause();

  friend void to_json(nlohmann::json& j, const StatusInfo& o);
  friend void from_json(const nlohmann::json& j, StatusInfo& o);

 protected:
  ResourceStatus m_ResourceStatus;

  Cause m_Cause;
  bool m_CauseIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* StatusInfo_H_ */
