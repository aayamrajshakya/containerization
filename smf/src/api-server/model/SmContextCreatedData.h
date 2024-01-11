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
 * SmContextCreatedData.h
 *
 *
 */

#ifndef SmContextCreatedData_H_
#define SmContextCreatedData_H_

#include "EbiArpMapping.h"
#include "RefToBinaryData.h"
#include <string>
#include "UpCnxState.h"
#include "HoState.h"
#include "N2SmInfoType.h"
#include "Snssai.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai {
namespace smf_server {
namespace model {

/// <summary>
///
/// </summary>
class SmContextCreatedData {
 public:
  SmContextCreatedData();
  virtual ~SmContextCreatedData();

  void validate();

  /////////////////////////////////////////////
  /// SmContextCreatedData members

  /// <summary>
  ///
  /// </summary>
  std::string getHSmfUri() const;
  void setHSmfUri(std::string const& value);
  bool hSmfUriIsSet() const;
  void unsetHSmfUri();
  /// <summary>
  ///
  /// </summary>
  int32_t getPduSessionId() const;
  void setPduSessionId(int32_t const value);
  bool pduSessionIdIsSet() const;
  void unsetPduSessionId();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSNssai() const;
  void setSNssai(oai::model::common::Snssai const& value);
  bool sNssaiIsSet() const;
  void unsetSNssai();
  /// <summary>
  ///
  /// </summary>
  UpCnxState getUpCnxState() const;
  void setUpCnxState(UpCnxState const& value);
  bool upCnxStateIsSet() const;
  void unsetUpCnxState();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getN2SmInfo() const;
  void setN2SmInfo(oai::model::common::RefToBinaryData const& value);
  bool n2SmInfoIsSet() const;
  void unsetN2SmInfo();
  /// <summary>
  ///
  /// </summary>
  N2SmInfoType getN2SmInfoType() const;
  void setN2SmInfoType(N2SmInfoType const& value);
  bool n2SmInfoTypeIsSet() const;
  void unsetN2SmInfoType();
  /// <summary>
  ///
  /// </summary>
  std::vector<EbiArpMapping>& getAllocatedEbiList();
  bool allocatedEbiListIsSet() const;
  void unsetAllocatedEbiList();
  /// <summary>
  ///
  /// </summary>
  HoState getHoState() const;
  void setHoState(HoState const& value);
  bool hoStateIsSet() const;
  void unsetHoState();
  /// <summary>
  ///
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const& value);
  bool gpsiIsSet() const;
  void unsetGpsi();
  /// <summary>
  ///
  /// </summary>
  std::string getSmfServiceInstanceId() const;
  void setSmfServiceInstanceId(std::string const& value);
  bool smfServiceInstanceIdIsSet() const;
  void unsetSmfServiceInstanceId();
  /// <summary>
  ///
  /// </summary>
  std::string getRecoveryTime() const;
  void setRecoveryTime(std::string const& value);
  bool recoveryTimeIsSet() const;
  void unsetRecoveryTime();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const SmContextCreatedData& o);
  friend void from_json(const nlohmann::json& j, SmContextCreatedData& o);

 protected:
  std::string m_HSmfUri;
  bool m_HSmfUriIsSet;
  int32_t m_PduSessionId;
  bool m_PduSessionIdIsSet;
  oai::model::common::Snssai m_SNssai;
  bool m_SNssaiIsSet;
  UpCnxState m_UpCnxState;
  bool m_UpCnxStateIsSet;
  oai::model::common::RefToBinaryData m_N2SmInfo;
  bool m_N2SmInfoIsSet;
  N2SmInfoType m_N2SmInfoType;
  bool m_N2SmInfoTypeIsSet;
  std::vector<EbiArpMapping> m_AllocatedEbiList;
  bool m_AllocatedEbiListIsSet;
  HoState m_HoState;
  bool m_HoStateIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  std::string m_SmfServiceInstanceId;
  bool m_SmfServiceInstanceIdIsSet;
  std::string m_RecoveryTime;
  bool m_RecoveryTimeIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace model
}  // namespace smf_server
}  // namespace oai

#endif /* SmContextCreatedData_H_ */
