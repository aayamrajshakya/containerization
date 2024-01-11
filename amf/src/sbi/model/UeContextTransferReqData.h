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
 * UeContextTransferReqData.h
 *
 *
 */

#ifndef UeContextTransferReqData_H_
#define UeContextTransferReqData_H_

#include "TransferReason.h"
#include "N1MessageContainer.h"
#include <string>
#include "PlmnId.h"
#include "AccessType.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class UeContextTransferReqData {
 public:
  UeContextTransferReqData();
  virtual ~UeContextTransferReqData();

  void validate();

  /////////////////////////////////////////////
  /// UeContextTransferReqData members

  /// <summary>
  ///
  /// </summary>
  TransferReason getReason() const;
  void setReason(TransferReason const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getAccessType() const;
  void setAccessType(oai::model::common::AccessType const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PlmnId getPlmnId() const;
  void setPlmnId(oai::model::common::PlmnId const& value);
  bool plmnIdIsSet() const;
  void unsetPlmnId();
  /// <summary>
  ///
  /// </summary>
  N1MessageContainer getRegRequest() const;
  void setRegRequest(N1MessageContainer const& value);
  bool regRequestIsSet() const;
  void unsetRegRequest();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const UeContextTransferReqData& o);
  friend void from_json(const nlohmann::json& j, UeContextTransferReqData& o);

 protected:
  TransferReason m_Reason;

  oai::model::common::AccessType m_AccessType;

  oai::model::common::PlmnId m_PlmnId;
  bool m_PlmnIdIsSet;
  N1MessageContainer m_RegRequest;
  bool m_RegRequestIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* UeContextTransferReqData_H_ */
