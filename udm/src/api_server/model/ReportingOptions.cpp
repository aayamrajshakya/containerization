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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReportingOptions.h"
#include "Helpers.h"

#include <sstream>

namespace oai::udm::model {

ReportingOptions::ReportingOptions() {
  m_ReportModeIsSet      = false;
  m_MaxNumOfReports      = 0;
  m_MaxNumOfReportsIsSet = false;
  m_Expiry               = "";
  m_ExpiryIsSet          = false;
  m_SamplingRatio        = 0;
  m_SamplingRatioIsSet   = false;
  m_GuardTime            = 0;
  m_GuardTimeIsSet       = false;
  m_ReportPeriod         = 0;
  m_ReportPeriodIsSet    = false;
  m_NotifFlagIsSet       = false;
}

void ReportingOptions::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReportingOptions::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReportingOptions::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReportingOptions" : pathPrefix;

  if (samplingRatioIsSet()) {
    const int32_t& value               = m_SamplingRatio;
    const std::string currentValuePath = _pathPrefix + ".samplingRatio";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 100) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 100;";
    }
  }

  return success;
}

bool ReportingOptions::operator==(const ReportingOptions& rhs) const {
  return

      ((!reportModeIsSet() && !rhs.reportModeIsSet()) ||
       (reportModeIsSet() && rhs.reportModeIsSet() &&
        getReportMode() == rhs.getReportMode())) &&

      ((!maxNumOfReportsIsSet() && !rhs.maxNumOfReportsIsSet()) ||
       (maxNumOfReportsIsSet() && rhs.maxNumOfReportsIsSet() &&
        getMaxNumOfReports() == rhs.getMaxNumOfReports())) &&

      ((!expiryIsSet() && !rhs.expiryIsSet()) ||
       (expiryIsSet() && rhs.expiryIsSet() &&
        getExpiry() == rhs.getExpiry())) &&

      ((!samplingRatioIsSet() && !rhs.samplingRatioIsSet()) ||
       (samplingRatioIsSet() && rhs.samplingRatioIsSet() &&
        getSamplingRatio() == rhs.getSamplingRatio())) &&

      ((!guardTimeIsSet() && !rhs.guardTimeIsSet()) ||
       (guardTimeIsSet() && rhs.guardTimeIsSet() &&
        getGuardTime() == rhs.getGuardTime())) &&

      ((!reportPeriodIsSet() && !rhs.reportPeriodIsSet()) ||
       (reportPeriodIsSet() && rhs.reportPeriodIsSet() &&
        getReportPeriod() == rhs.getReportPeriod())) &&

      ((!notifFlagIsSet() && !rhs.notifFlagIsSet()) ||
       (notifFlagIsSet() && rhs.notifFlagIsSet() &&
        getNotifFlag() == rhs.getNotifFlag()))

          ;
}

bool ReportingOptions::operator!=(const ReportingOptions& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReportingOptions& o) {
  j = nlohmann::json();
  if (o.reportModeIsSet()) j["reportMode"] = o.m_ReportMode;
  if (o.maxNumOfReportsIsSet()) j["maxNumOfReports"] = o.m_MaxNumOfReports;
  if (o.expiryIsSet()) j["expiry"] = o.m_Expiry;
  if (o.samplingRatioIsSet()) j["samplingRatio"] = o.m_SamplingRatio;
  if (o.guardTimeIsSet()) j["guardTime"] = o.m_GuardTime;
  if (o.reportPeriodIsSet()) j["reportPeriod"] = o.m_ReportPeriod;
  if (o.notifFlagIsSet()) j["notifFlag"] = o.m_NotifFlag;
}

void from_json(const nlohmann::json& j, ReportingOptions& o) {
  if (j.find("reportMode") != j.end()) {
    j.at("reportMode").get_to(o.m_ReportMode);
    o.m_ReportModeIsSet = true;
  }
  if (j.find("maxNumOfReports") != j.end()) {
    j.at("maxNumOfReports").get_to(o.m_MaxNumOfReports);
    o.m_MaxNumOfReportsIsSet = true;
  }
  if (j.find("expiry") != j.end()) {
    j.at("expiry").get_to(o.m_Expiry);
    o.m_ExpiryIsSet = true;
  }
  if (j.find("samplingRatio") != j.end()) {
    j.at("samplingRatio").get_to(o.m_SamplingRatio);
    o.m_SamplingRatioIsSet = true;
  }
  if (j.find("guardTime") != j.end()) {
    j.at("guardTime").get_to(o.m_GuardTime);
    o.m_GuardTimeIsSet = true;
  }
  if (j.find("reportPeriod") != j.end()) {
    j.at("reportPeriod").get_to(o.m_ReportPeriod);
    o.m_ReportPeriodIsSet = true;
  }
  if (j.find("notifFlag") != j.end()) {
    j.at("notifFlag").get_to(o.m_NotifFlag);
    o.m_NotifFlagIsSet = true;
  }
}

EventReportMode ReportingOptions::getReportMode() const {
  return m_ReportMode;
}
void ReportingOptions::setReportMode(EventReportMode const& value) {
  m_ReportMode      = value;
  m_ReportModeIsSet = true;
}
bool ReportingOptions::reportModeIsSet() const {
  return m_ReportModeIsSet;
}
void ReportingOptions::unsetReportMode() {
  m_ReportModeIsSet = false;
}
int32_t ReportingOptions::getMaxNumOfReports() const {
  return m_MaxNumOfReports;
}
void ReportingOptions::setMaxNumOfReports(int32_t const value) {
  m_MaxNumOfReports      = value;
  m_MaxNumOfReportsIsSet = true;
}
bool ReportingOptions::maxNumOfReportsIsSet() const {
  return m_MaxNumOfReportsIsSet;
}
void ReportingOptions::unsetMaxNumOfReports() {
  m_MaxNumOfReportsIsSet = false;
}
std::string ReportingOptions::getExpiry() const {
  return m_Expiry;
}
void ReportingOptions::setExpiry(std::string const& value) {
  m_Expiry      = value;
  m_ExpiryIsSet = true;
}
bool ReportingOptions::expiryIsSet() const {
  return m_ExpiryIsSet;
}
void ReportingOptions::unsetExpiry() {
  m_ExpiryIsSet = false;
}
int32_t ReportingOptions::getSamplingRatio() const {
  return m_SamplingRatio;
}
void ReportingOptions::setSamplingRatio(int32_t const value) {
  m_SamplingRatio      = value;
  m_SamplingRatioIsSet = true;
}
bool ReportingOptions::samplingRatioIsSet() const {
  return m_SamplingRatioIsSet;
}
void ReportingOptions::unsetSamplingRatio() {
  m_SamplingRatioIsSet = false;
}
int32_t ReportingOptions::getGuardTime() const {
  return m_GuardTime;
}
void ReportingOptions::setGuardTime(int32_t const value) {
  m_GuardTime      = value;
  m_GuardTimeIsSet = true;
}
bool ReportingOptions::guardTimeIsSet() const {
  return m_GuardTimeIsSet;
}
void ReportingOptions::unsetGuardTime() {
  m_GuardTimeIsSet = false;
}
int32_t ReportingOptions::getReportPeriod() const {
  return m_ReportPeriod;
}
void ReportingOptions::setReportPeriod(int32_t const value) {
  m_ReportPeriod      = value;
  m_ReportPeriodIsSet = true;
}
bool ReportingOptions::reportPeriodIsSet() const {
  return m_ReportPeriodIsSet;
}
void ReportingOptions::unsetReportPeriod() {
  m_ReportPeriodIsSet = false;
}
NotificationFlag ReportingOptions::getNotifFlag() const {
  return m_NotifFlag;
}
void ReportingOptions::setNotifFlag(NotificationFlag const& value) {
  m_NotifFlag      = value;
  m_NotifFlagIsSet = true;
}
bool ReportingOptions::notifFlagIsSet() const {
  return m_NotifFlagIsSet;
}
void ReportingOptions::unsetNotifFlag() {
  m_NotifFlagIsSet = false;
}

}  // namespace oai::udm::model
