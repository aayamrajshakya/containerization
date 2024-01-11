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
 * MmContext.h
 *
 *
 */

#ifndef MmContext_H_
#define MmContext_H_

#include "ExpectedUeBehavior.h"
#include "NssaiMapping.h"
#include <string>
#include "NasSecurityMode.h"
#include "Snssai.h"
#include <vector>
#include "AccessType.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class MmContext {
 public:
  MmContext();
  virtual ~MmContext();

  void validate();

  /////////////////////////////////////////////
  /// MmContext members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getAccessType() const;
  void setAccessType(oai::model::common::AccessType const& value);
  /// <summary>
  ///
  /// </summary>
  NasSecurityMode getNasSecurityMode() const;
  void setNasSecurityMode(NasSecurityMode const& value);
  bool nasSecurityModeIsSet() const;
  void unsetNasSecurityMode();
  /// <summary>
  ///
  /// </summary>
  int32_t getNasDownlinkCount() const;
  void setNasDownlinkCount(int32_t const value);
  bool nasDownlinkCountIsSet() const;
  void unsetNasDownlinkCount();
  /// <summary>
  ///
  /// </summary>
  int32_t getNasUplinkCount() const;
  void setNasUplinkCount(int32_t const value);
  bool nasUplinkCountIsSet() const;
  void unsetNasUplinkCount();
  /// <summary>
  ///
  /// </summary>
  std::string getUeSecurityCapability() const;
  void setUeSecurityCapability(std::string const& value);
  bool ueSecurityCapabilityIsSet() const;
  void unsetUeSecurityCapability();
  /// <summary>
  ///
  /// </summary>
  std::string getS1UeNetworkCapability() const;
  void setS1UeNetworkCapability(std::string const& value);
  bool s1UeNetworkCapabilityIsSet() const;
  void unsetS1UeNetworkCapability();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::Snssai>& getAllowedNssai();
  bool allowedNssaiIsSet() const;
  void unsetAllowedNssai();
  /// <summary>
  ///
  /// </summary>
  std::vector<NssaiMapping>& getNssaiMappingList();
  bool nssaiMappingListIsSet() const;
  void unsetNssaiMappingList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getNsInstanceList();
  bool nsInstanceListIsSet() const;
  void unsetNsInstanceList();
  /// <summary>
  ///
  /// </summary>
  ExpectedUeBehavior getExpectedUEbehavior() const;
  void setExpectedUEbehavior(ExpectedUeBehavior const& value);
  bool expectedUEbehaviorIsSet() const;
  void unsetExpectedUEbehavior();

  friend void to_json(nlohmann::json& j, const MmContext& o);
  friend void from_json(const nlohmann::json& j, MmContext& o);

 protected:
  oai::model::common::AccessType m_AccessType;

  NasSecurityMode m_NasSecurityMode;
  bool m_NasSecurityModeIsSet;
  int32_t m_NasDownlinkCount;
  bool m_NasDownlinkCountIsSet;
  int32_t m_NasUplinkCount;
  bool m_NasUplinkCountIsSet;
  std::string m_UeSecurityCapability;
  bool m_UeSecurityCapabilityIsSet;
  std::string m_S1UeNetworkCapability;
  bool m_S1UeNetworkCapabilityIsSet;
  std::vector<oai::model::common::Snssai> m_AllowedNssai;
  bool m_AllowedNssaiIsSet;
  std::vector<NssaiMapping> m_NssaiMappingList;
  bool m_NssaiMappingListIsSet;
  std::vector<std::string> m_NsInstanceList;
  bool m_NsInstanceListIsSet;
  ExpectedUeBehavior m_ExpectedUEbehavior;
  bool m_ExpectedUEbehaviorIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* MmContext_H_ */
