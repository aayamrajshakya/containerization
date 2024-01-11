/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Amf3GppAccessRegistration.h"

namespace oai::udm::model {

using namespace oai::model::common;

Amf3GppAccessRegistration::Amf3GppAccessRegistration() {
  m_AmfInstanceId                    = "";
  m_SupportedFeatures                = "";
  m_SupportedFeaturesIsSet           = false;
  m_PurgeFlag                        = false;
  m_PurgeFlagIsSet                   = false;
  m_Pei                              = "";
  m_PeiIsSet                         = false;
  m_ImsVoPsIsSet                     = false;
  m_DeregCallbackUri                 = "";
  m_AmfServiceNameDeregIsSet         = false;
  m_PcscfRestorationCallbackUri      = "";
  m_PcscfRestorationCallbackUriIsSet = false;
  m_AmfServiceNamePcscfRestIsSet     = false;
  m_InitialRegistrationInd           = false;
  m_InitialRegistrationIndIsSet      = false;
  m_BackupAmfInfoIsSet               = false;
  m_DrFlag                           = false;
  m_DrFlagIsSet                      = false;
  m_UrrpIndicator                    = false;
  m_UrrpIndicatorIsSet               = false;
  m_AmfEeSubscriptionId              = "";
  m_AmfEeSubscriptionIdIsSet         = false;
  m_EpsInterworkingInfoIsSet         = false;
  m_UeSrvccCapability                = false;
  m_UeSrvccCapabilityIsSet           = false;
  m_RegistrationTime                 = "";
  m_RegistrationTimeIsSet            = false;
  m_VgmlcAddressIsSet                = false;
  m_ContextInfoIsSet                 = false;
  m_NoEeSubscriptionInd              = false;
  m_NoEeSubscriptionIndIsSet         = false;
}

Amf3GppAccessRegistration::~Amf3GppAccessRegistration() {}

void Amf3GppAccessRegistration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Amf3GppAccessRegistration& o) {
  j                  = nlohmann::json();
  j["amfInstanceId"] = o.m_AmfInstanceId;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.purgeFlagIsSet()) j["purgeFlag"] = o.m_PurgeFlag;
  if (o.peiIsSet()) j["pei"] = o.m_Pei;
  if (o.imsVoPsIsSet()) j["imsVoPs"] = o.m_ImsVoPs;
  j["deregCallbackUri"] = o.m_DeregCallbackUri;
  if (o.amfServiceNameDeregIsSet())
    j["amfServiceNameDereg"] = o.m_AmfServiceNameDereg;
  if (o.pcscfRestorationCallbackUriIsSet())
    j["pcscfRestorationCallbackUri"] = o.m_PcscfRestorationCallbackUri;
  if (o.amfServiceNamePcscfRestIsSet())
    j["amfServiceNamePcscfRest"] = o.m_AmfServiceNamePcscfRest;
  if (o.initialRegistrationIndIsSet())
    j["initialRegistrationInd"] = o.m_InitialRegistrationInd;
  j["guami"] = o.m_Guami;
  if (o.backupAmfInfoIsSet() || !o.m_BackupAmfInfo.empty())
    j["backupAmfInfo"] = o.m_BackupAmfInfo;
  if (o.drFlagIsSet()) j["drFlag"] = o.m_DrFlag;
  j["ratType"] = o.m_RatType;
  if (o.urrpIndicatorIsSet()) j["urrpIndicator"] = o.m_UrrpIndicator;
  if (o.amfEeSubscriptionIdIsSet())
    j["amfEeSubscriptionId"] = o.m_AmfEeSubscriptionId;
  if (o.epsInterworkingInfoIsSet())
    j["epsInterworkingInfo"] = o.m_EpsInterworkingInfo;
  if (o.ueSrvccCapabilityIsSet())
    j["ueSrvccCapability"] = o.m_UeSrvccCapability;
  if (o.registrationTimeIsSet()) j["registrationTime"] = o.m_RegistrationTime;
  if (o.vgmlcAddressIsSet()) j["vgmlcAddress"] = o.m_VgmlcAddress;
  if (o.contextInfoIsSet()) j["contextInfo"] = o.m_ContextInfo;
  if (o.noEeSubscriptionIndIsSet())
    j["noEeSubscriptionInd"] = o.m_NoEeSubscriptionInd;
}

void from_json(const nlohmann::json& j, Amf3GppAccessRegistration& o) {
  j.at("amfInstanceId").get_to(o.m_AmfInstanceId);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("purgeFlag") != j.end()) {
    j.at("purgeFlag").get_to(o.m_PurgeFlag);
    o.m_PurgeFlagIsSet = true;
  }
  if (j.find("pei") != j.end()) {
    j.at("pei").get_to(o.m_Pei);
    o.m_PeiIsSet = true;
  }
  if (j.find("imsVoPs") != j.end()) {
    j.at("imsVoPs").get_to(o.m_ImsVoPs);
    o.m_ImsVoPsIsSet = true;
  }
  j.at("deregCallbackUri").get_to(o.m_DeregCallbackUri);
  if (j.find("amfServiceNameDereg") != j.end()) {
    j.at("amfServiceNameDereg").get_to(o.m_AmfServiceNameDereg);
    o.m_AmfServiceNameDeregIsSet = true;
  }
  if (j.find("pcscfRestorationCallbackUri") != j.end()) {
    j.at("pcscfRestorationCallbackUri").get_to(o.m_PcscfRestorationCallbackUri);
    o.m_PcscfRestorationCallbackUriIsSet = true;
  }
  if (j.find("amfServiceNamePcscfRest") != j.end()) {
    j.at("amfServiceNamePcscfRest").get_to(o.m_AmfServiceNamePcscfRest);
    o.m_AmfServiceNamePcscfRestIsSet = true;
  }
  if (j.find("initialRegistrationInd") != j.end()) {
    j.at("initialRegistrationInd").get_to(o.m_InitialRegistrationInd);
    o.m_InitialRegistrationIndIsSet = true;
  }
  j.at("guami").get_to(o.m_Guami);
  if (j.find("backupAmfInfo") != j.end()) {
    j.at("backupAmfInfo").get_to(o.m_BackupAmfInfo);
    o.m_BackupAmfInfoIsSet = true;
  }
  if (j.find("drFlag") != j.end()) {
    j.at("drFlag").get_to(o.m_DrFlag);
    o.m_DrFlagIsSet = true;
  }
  j.at("ratType").get_to(o.m_RatType);
  if (j.find("urrpIndicator") != j.end()) {
    j.at("urrpIndicator").get_to(o.m_UrrpIndicator);
    o.m_UrrpIndicatorIsSet = true;
  }
  if (j.find("amfEeSubscriptionId") != j.end()) {
    j.at("amfEeSubscriptionId").get_to(o.m_AmfEeSubscriptionId);
    o.m_AmfEeSubscriptionIdIsSet = true;
  }
  if (j.find("epsInterworkingInfo") != j.end()) {
    j.at("epsInterworkingInfo").get_to(o.m_EpsInterworkingInfo);
    o.m_EpsInterworkingInfoIsSet = true;
  }
  if (j.find("ueSrvccCapability") != j.end()) {
    j.at("ueSrvccCapability").get_to(o.m_UeSrvccCapability);
    o.m_UeSrvccCapabilityIsSet = true;
  }
  if (j.find("registrationTime") != j.end()) {
    j.at("registrationTime").get_to(o.m_RegistrationTime);
    o.m_RegistrationTimeIsSet = true;
  }
  if (j.find("vgmlcAddress") != j.end()) {
    j.at("vgmlcAddress").get_to(o.m_VgmlcAddress);
    o.m_VgmlcAddressIsSet = true;
  }
  if (j.find("contextInfo") != j.end()) {
    j.at("contextInfo").get_to(o.m_ContextInfo);
    o.m_ContextInfoIsSet = true;
  }
  if (j.find("noEeSubscriptionInd") != j.end()) {
    j.at("noEeSubscriptionInd").get_to(o.m_NoEeSubscriptionInd);
    o.m_NoEeSubscriptionIndIsSet = true;
  }
}

std::string Amf3GppAccessRegistration::getAmfInstanceId() const {
  return m_AmfInstanceId;
}
void Amf3GppAccessRegistration::setAmfInstanceId(std::string const& value) {
  m_AmfInstanceId = value;
}
std::string Amf3GppAccessRegistration::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void Amf3GppAccessRegistration::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool Amf3GppAccessRegistration::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void Amf3GppAccessRegistration::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
bool Amf3GppAccessRegistration::isPurgeFlag() const {
  return m_PurgeFlag;
}
void Amf3GppAccessRegistration::setPurgeFlag(bool const value) {
  m_PurgeFlag      = value;
  m_PurgeFlagIsSet = true;
}
bool Amf3GppAccessRegistration::purgeFlagIsSet() const {
  return m_PurgeFlagIsSet;
}
void Amf3GppAccessRegistration::unsetPurgeFlag() {
  m_PurgeFlagIsSet = false;
}
std::string Amf3GppAccessRegistration::getPei() const {
  return m_Pei;
}
void Amf3GppAccessRegistration::setPei(std::string const& value) {
  m_Pei      = value;
  m_PeiIsSet = true;
}
bool Amf3GppAccessRegistration::peiIsSet() const {
  return m_PeiIsSet;
}
void Amf3GppAccessRegistration::unsetPei() {
  m_PeiIsSet = false;
}
ImsVoPs Amf3GppAccessRegistration::getImsVoPs() const {
  return m_ImsVoPs;
}
void Amf3GppAccessRegistration::setImsVoPs(ImsVoPs const& value) {
  m_ImsVoPs      = value;
  m_ImsVoPsIsSet = true;
}
bool Amf3GppAccessRegistration::imsVoPsIsSet() const {
  return m_ImsVoPsIsSet;
}
void Amf3GppAccessRegistration::unsetImsVoPs() {
  m_ImsVoPsIsSet = false;
}
std::string Amf3GppAccessRegistration::getDeregCallbackUri() const {
  return m_DeregCallbackUri;
}
void Amf3GppAccessRegistration::setDeregCallbackUri(std::string const& value) {
  m_DeregCallbackUri = value;
}
oai::model::nrf::ServiceName Amf3GppAccessRegistration::getAmfServiceNameDereg()
    const {
  return m_AmfServiceNameDereg;
}
void Amf3GppAccessRegistration::setAmfServiceNameDereg(
    oai::model::nrf::ServiceName const& value) {
  m_AmfServiceNameDereg      = value;
  m_AmfServiceNameDeregIsSet = true;
}
bool Amf3GppAccessRegistration::amfServiceNameDeregIsSet() const {
  return m_AmfServiceNameDeregIsSet;
}
void Amf3GppAccessRegistration::unsetAmfServiceNameDereg() {
  m_AmfServiceNameDeregIsSet = false;
}
std::string Amf3GppAccessRegistration::getPcscfRestorationCallbackUri() const {
  return m_PcscfRestorationCallbackUri;
}
void Amf3GppAccessRegistration::setPcscfRestorationCallbackUri(
    std::string const& value) {
  m_PcscfRestorationCallbackUri      = value;
  m_PcscfRestorationCallbackUriIsSet = true;
}
bool Amf3GppAccessRegistration::pcscfRestorationCallbackUriIsSet() const {
  return m_PcscfRestorationCallbackUriIsSet;
}
void Amf3GppAccessRegistration::unsetPcscfRestorationCallbackUri() {
  m_PcscfRestorationCallbackUriIsSet = false;
}
oai::model::nrf::ServiceName
Amf3GppAccessRegistration::getAmfServiceNamePcscfRest() const {
  return m_AmfServiceNamePcscfRest;
}
void Amf3GppAccessRegistration::setAmfServiceNamePcscfRest(
    oai::model::nrf::ServiceName const& value) {
  m_AmfServiceNamePcscfRest      = value;
  m_AmfServiceNamePcscfRestIsSet = true;
}
bool Amf3GppAccessRegistration::amfServiceNamePcscfRestIsSet() const {
  return m_AmfServiceNamePcscfRestIsSet;
}
void Amf3GppAccessRegistration::unsetAmfServiceNamePcscfRest() {
  m_AmfServiceNamePcscfRestIsSet = false;
}
bool Amf3GppAccessRegistration::isInitialRegistrationInd() const {
  return m_InitialRegistrationInd;
}
void Amf3GppAccessRegistration::setInitialRegistrationInd(bool const value) {
  m_InitialRegistrationInd      = value;
  m_InitialRegistrationIndIsSet = true;
}
bool Amf3GppAccessRegistration::initialRegistrationIndIsSet() const {
  return m_InitialRegistrationIndIsSet;
}
void Amf3GppAccessRegistration::unsetInitialRegistrationInd() {
  m_InitialRegistrationIndIsSet = false;
}
Guami Amf3GppAccessRegistration::getGuami() const {
  return m_Guami;
}
void Amf3GppAccessRegistration::setGuami(Guami const& value) {
  m_Guami = value;
}
std::vector<BackupAmfInfo>& Amf3GppAccessRegistration::getBackupAmfInfo() {
  return m_BackupAmfInfo;
}
void Amf3GppAccessRegistration::setBackupAmfInfo(
    std::vector<BackupAmfInfo> const& value) {
  m_BackupAmfInfo      = value;
  m_BackupAmfInfoIsSet = true;
}
bool Amf3GppAccessRegistration::backupAmfInfoIsSet() const {
  return m_BackupAmfInfoIsSet;
}
void Amf3GppAccessRegistration::unsetBackupAmfInfo() {
  m_BackupAmfInfoIsSet = false;
}
bool Amf3GppAccessRegistration::isDrFlag() const {
  return m_DrFlag;
}
void Amf3GppAccessRegistration::setDrFlag(bool const value) {
  m_DrFlag      = value;
  m_DrFlagIsSet = true;
}
bool Amf3GppAccessRegistration::drFlagIsSet() const {
  return m_DrFlagIsSet;
}
void Amf3GppAccessRegistration::unsetDrFlag() {
  m_DrFlagIsSet = false;
}
RatType Amf3GppAccessRegistration::getRatType() const {
  return m_RatType;
}
void Amf3GppAccessRegistration::setRatType(RatType const& value) {
  m_RatType = value;
}
bool Amf3GppAccessRegistration::isUrrpIndicator() const {
  return m_UrrpIndicator;
}
void Amf3GppAccessRegistration::setUrrpIndicator(bool const value) {
  m_UrrpIndicator      = value;
  m_UrrpIndicatorIsSet = true;
}
bool Amf3GppAccessRegistration::urrpIndicatorIsSet() const {
  return m_UrrpIndicatorIsSet;
}
void Amf3GppAccessRegistration::unsetUrrpIndicator() {
  m_UrrpIndicatorIsSet = false;
}
std::string Amf3GppAccessRegistration::getAmfEeSubscriptionId() const {
  return m_AmfEeSubscriptionId;
}
void Amf3GppAccessRegistration::setAmfEeSubscriptionId(
    std::string const& value) {
  m_AmfEeSubscriptionId      = value;
  m_AmfEeSubscriptionIdIsSet = true;
}
bool Amf3GppAccessRegistration::amfEeSubscriptionIdIsSet() const {
  return m_AmfEeSubscriptionIdIsSet;
}
void Amf3GppAccessRegistration::unsetAmfEeSubscriptionId() {
  m_AmfEeSubscriptionIdIsSet = false;
}
EpsInterworkingInfo Amf3GppAccessRegistration::getEpsInterworkingInfo() const {
  return m_EpsInterworkingInfo;
}
void Amf3GppAccessRegistration::setEpsInterworkingInfo(
    EpsInterworkingInfo const& value) {
  m_EpsInterworkingInfo      = value;
  m_EpsInterworkingInfoIsSet = true;
}
bool Amf3GppAccessRegistration::epsInterworkingInfoIsSet() const {
  return m_EpsInterworkingInfoIsSet;
}
void Amf3GppAccessRegistration::unsetEpsInterworkingInfo() {
  m_EpsInterworkingInfoIsSet = false;
}
bool Amf3GppAccessRegistration::isUeSrvccCapability() const {
  return m_UeSrvccCapability;
}
void Amf3GppAccessRegistration::setUeSrvccCapability(bool const value) {
  m_UeSrvccCapability      = value;
  m_UeSrvccCapabilityIsSet = true;
}
bool Amf3GppAccessRegistration::ueSrvccCapabilityIsSet() const {
  return m_UeSrvccCapabilityIsSet;
}
void Amf3GppAccessRegistration::unsetUeSrvccCapability() {
  m_UeSrvccCapabilityIsSet = false;
}
std::string Amf3GppAccessRegistration::getRegistrationTime() const {
  return m_RegistrationTime;
}
void Amf3GppAccessRegistration::setRegistrationTime(std::string const& value) {
  m_RegistrationTime      = value;
  m_RegistrationTimeIsSet = true;
}
bool Amf3GppAccessRegistration::registrationTimeIsSet() const {
  return m_RegistrationTimeIsSet;
}
void Amf3GppAccessRegistration::unsetRegistrationTime() {
  m_RegistrationTimeIsSet = false;
}
VgmlcAddress Amf3GppAccessRegistration::getVgmlcAddress() const {
  return m_VgmlcAddress;
}
void Amf3GppAccessRegistration::setVgmlcAddress(VgmlcAddress const& value) {
  m_VgmlcAddress      = value;
  m_VgmlcAddressIsSet = true;
}
bool Amf3GppAccessRegistration::vgmlcAddressIsSet() const {
  return m_VgmlcAddressIsSet;
}
void Amf3GppAccessRegistration::unsetVgmlcAddress() {
  m_VgmlcAddressIsSet = false;
}
ContextInfo Amf3GppAccessRegistration::getContextInfo() const {
  return m_ContextInfo;
}
void Amf3GppAccessRegistration::setContextInfo(ContextInfo const& value) {
  m_ContextInfo      = value;
  m_ContextInfoIsSet = true;
}
bool Amf3GppAccessRegistration::contextInfoIsSet() const {
  return m_ContextInfoIsSet;
}
void Amf3GppAccessRegistration::unsetContextInfo() {
  m_ContextInfoIsSet = false;
}
bool Amf3GppAccessRegistration::isNoEeSubscriptionInd() const {
  return m_NoEeSubscriptionInd;
}
void Amf3GppAccessRegistration::setNoEeSubscriptionInd(bool const value) {
  m_NoEeSubscriptionInd      = value;
  m_NoEeSubscriptionIndIsSet = true;
}
bool Amf3GppAccessRegistration::noEeSubscriptionIndIsSet() const {
  return m_NoEeSubscriptionIndIsSet;
}
void Amf3GppAccessRegistration::unsetNoEeSubscriptionInd() {
  m_NoEeSubscriptionIndIsSet = false;
}

}  // namespace oai::udm::model
