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

#include "Dynamic5Qi.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

Dynamic5Qi::Dynamic5Qi() {
  m_PriorityLevel              = 0;
  m_PacketDelayBudget          = 0;
  m_PacketErrRate              = "";
  m_AverWindow                 = 2000;
  m_AverWindowIsSet            = false;
  m_MaxDataBurstVol            = 0;
  m_MaxDataBurstVolIsSet       = false;
  m_ExtMaxDataBurstVol         = 0;
  m_ExtMaxDataBurstVolIsSet    = false;
  m_ExtPacketDelBudget         = 0;
  m_ExtPacketDelBudgetIsSet    = false;
  m_CnPacketDelayBudgetDl      = 0;
  m_CnPacketDelayBudgetDlIsSet = false;
  m_CnPacketDelayBudgetUl      = 0;
  m_CnPacketDelayBudgetUlIsSet = false;
}

void Dynamic5Qi::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool Dynamic5Qi::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Dynamic5Qi::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "Dynamic5Qi" : pathPrefix;

  /* PriorityLevel */ {
    const int32_t& value               = m_PriorityLevel;
    const std::string currentValuePath = _pathPrefix + ".priorityLevel";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 127) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 127;";
    }
  }

  /* PacketDelayBudget */ {
    const int32_t& value               = m_PacketDelayBudget;
    const std::string currentValuePath = _pathPrefix + ".packetDelayBudget";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  /* PacketErrRate */ {
    const std::string& value           = m_PacketErrRate;
    const std::string currentValuePath = _pathPrefix + ".packetErrRate";
  }

  if (averWindowIsSet()) {
    const int32_t& value               = m_AverWindow;
    const std::string currentValuePath = _pathPrefix + ".averWindow";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 4095) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 4095;";
    }
  }

  if (maxDataBurstVolIsSet()) {
    const int32_t& value               = m_MaxDataBurstVol;
    const std::string currentValuePath = _pathPrefix + ".maxDataBurstVol";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 4095) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 4095;";
    }
  }

  if (extMaxDataBurstVolIsSet()) {
    const int32_t& value               = m_ExtMaxDataBurstVol;
    const std::string currentValuePath = _pathPrefix + ".extMaxDataBurstVol";

    if (value < 4096) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 4096;";
    }
    if (value > 2000000) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 2000000;";
    }
  }

  if (extPacketDelBudgetIsSet()) {
    const int32_t& value               = m_ExtPacketDelBudget;
    const std::string currentValuePath = _pathPrefix + ".extPacketDelBudget";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  if (cnPacketDelayBudgetDlIsSet()) {
    const int32_t& value               = m_CnPacketDelayBudgetDl;
    const std::string currentValuePath = _pathPrefix + ".cnPacketDelayBudgetDl";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  if (cnPacketDelayBudgetUlIsSet()) {
    const int32_t& value               = m_CnPacketDelayBudgetUl;
    const std::string currentValuePath = _pathPrefix + ".cnPacketDelayBudgetUl";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
  }

  return success;
}

bool Dynamic5Qi::operator==(const Dynamic5Qi& rhs) const {
  return

      (getResourceType() == rhs.getResourceType()) &&

      (getPriorityLevel() == rhs.getPriorityLevel()) &&

      (getPacketDelayBudget() == rhs.getPacketDelayBudget()) &&

      (getPacketErrRate() == rhs.getPacketErrRate()) &&

      ((!averWindowIsSet() && !rhs.averWindowIsSet()) ||
       (averWindowIsSet() && rhs.averWindowIsSet() &&
        getAverWindow() == rhs.getAverWindow())) &&

      ((!maxDataBurstVolIsSet() && !rhs.maxDataBurstVolIsSet()) ||
       (maxDataBurstVolIsSet() && rhs.maxDataBurstVolIsSet() &&
        getMaxDataBurstVol() == rhs.getMaxDataBurstVol())) &&

      ((!extMaxDataBurstVolIsSet() && !rhs.extMaxDataBurstVolIsSet()) ||
       (extMaxDataBurstVolIsSet() && rhs.extMaxDataBurstVolIsSet() &&
        getExtMaxDataBurstVol() == rhs.getExtMaxDataBurstVol())) &&

      ((!extPacketDelBudgetIsSet() && !rhs.extPacketDelBudgetIsSet()) ||
       (extPacketDelBudgetIsSet() && rhs.extPacketDelBudgetIsSet() &&
        getExtPacketDelBudget() == rhs.getExtPacketDelBudget())) &&

      ((!cnPacketDelayBudgetDlIsSet() && !rhs.cnPacketDelayBudgetDlIsSet()) ||
       (cnPacketDelayBudgetDlIsSet() && rhs.cnPacketDelayBudgetDlIsSet() &&
        getCnPacketDelayBudgetDl() == rhs.getCnPacketDelayBudgetDl())) &&

      ((!cnPacketDelayBudgetUlIsSet() && !rhs.cnPacketDelayBudgetUlIsSet()) ||
       (cnPacketDelayBudgetUlIsSet() && rhs.cnPacketDelayBudgetUlIsSet() &&
        getCnPacketDelayBudgetUl() == rhs.getCnPacketDelayBudgetUl()))

          ;
}

bool Dynamic5Qi::operator!=(const Dynamic5Qi& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Dynamic5Qi& o) {
  j                      = nlohmann::json();
  j["resourceType"]      = o.m_ResourceType;
  j["priorityLevel"]     = o.m_PriorityLevel;
  j["packetDelayBudget"] = o.m_PacketDelayBudget;
  j["packetErrRate"]     = o.m_PacketErrRate;
  if (o.averWindowIsSet()) j["averWindow"] = o.m_AverWindow;
  if (o.maxDataBurstVolIsSet()) j["maxDataBurstVol"] = o.m_MaxDataBurstVol;
  if (o.extMaxDataBurstVolIsSet())
    j["extMaxDataBurstVol"] = o.m_ExtMaxDataBurstVol;
  if (o.extPacketDelBudgetIsSet())
    j["extPacketDelBudget"] = o.m_ExtPacketDelBudget;
  if (o.cnPacketDelayBudgetDlIsSet())
    j["cnPacketDelayBudgetDl"] = o.m_CnPacketDelayBudgetDl;
  if (o.cnPacketDelayBudgetUlIsSet())
    j["cnPacketDelayBudgetUl"] = o.m_CnPacketDelayBudgetUl;
}

void from_json(const nlohmann::json& j, Dynamic5Qi& o) {
  j.at("resourceType").get_to(o.m_ResourceType);
  j.at("priorityLevel").get_to(o.m_PriorityLevel);
  j.at("packetDelayBudget").get_to(o.m_PacketDelayBudget);
  j.at("packetErrRate").get_to(o.m_PacketErrRate);
  if (j.find("averWindow") != j.end()) {
    j.at("averWindow").get_to(o.m_AverWindow);
    o.m_AverWindowIsSet = true;
  }
  if (j.find("maxDataBurstVol") != j.end()) {
    j.at("maxDataBurstVol").get_to(o.m_MaxDataBurstVol);
    o.m_MaxDataBurstVolIsSet = true;
  }
  if (j.find("extMaxDataBurstVol") != j.end()) {
    j.at("extMaxDataBurstVol").get_to(o.m_ExtMaxDataBurstVol);
    o.m_ExtMaxDataBurstVolIsSet = true;
  }
  if (j.find("extPacketDelBudget") != j.end()) {
    j.at("extPacketDelBudget").get_to(o.m_ExtPacketDelBudget);
    o.m_ExtPacketDelBudgetIsSet = true;
  }
  if (j.find("cnPacketDelayBudgetDl") != j.end()) {
    j.at("cnPacketDelayBudgetDl").get_to(o.m_CnPacketDelayBudgetDl);
    o.m_CnPacketDelayBudgetDlIsSet = true;
  }
  if (j.find("cnPacketDelayBudgetUl") != j.end()) {
    j.at("cnPacketDelayBudgetUl").get_to(o.m_CnPacketDelayBudgetUl);
    o.m_CnPacketDelayBudgetUlIsSet = true;
  }
}

oai::model::common::QosResourceType Dynamic5Qi::getResourceType() const {
  return m_ResourceType;
}
void Dynamic5Qi::setResourceType(
    oai::model::common::QosResourceType const& value) {
  m_ResourceType = value;
}
int32_t Dynamic5Qi::getPriorityLevel() const {
  return m_PriorityLevel;
}
void Dynamic5Qi::setPriorityLevel(int32_t const value) {
  m_PriorityLevel = value;
}
int32_t Dynamic5Qi::getPacketDelayBudget() const {
  return m_PacketDelayBudget;
}
void Dynamic5Qi::setPacketDelayBudget(int32_t const value) {
  m_PacketDelayBudget = value;
}
std::string Dynamic5Qi::getPacketErrRate() const {
  return m_PacketErrRate;
}
void Dynamic5Qi::setPacketErrRate(std::string const& value) {
  m_PacketErrRate = value;
}
int32_t Dynamic5Qi::getAverWindow() const {
  return m_AverWindow;
}
void Dynamic5Qi::setAverWindow(int32_t const value) {
  m_AverWindow      = value;
  m_AverWindowIsSet = true;
}
bool Dynamic5Qi::averWindowIsSet() const {
  return m_AverWindowIsSet;
}
void Dynamic5Qi::unsetAverWindow() {
  m_AverWindowIsSet = false;
}
int32_t Dynamic5Qi::getMaxDataBurstVol() const {
  return m_MaxDataBurstVol;
}
void Dynamic5Qi::setMaxDataBurstVol(int32_t const value) {
  m_MaxDataBurstVol      = value;
  m_MaxDataBurstVolIsSet = true;
}
bool Dynamic5Qi::maxDataBurstVolIsSet() const {
  return m_MaxDataBurstVolIsSet;
}
void Dynamic5Qi::unsetMaxDataBurstVol() {
  m_MaxDataBurstVolIsSet = false;
}
int32_t Dynamic5Qi::getExtMaxDataBurstVol() const {
  return m_ExtMaxDataBurstVol;
}
void Dynamic5Qi::setExtMaxDataBurstVol(int32_t const value) {
  m_ExtMaxDataBurstVol      = value;
  m_ExtMaxDataBurstVolIsSet = true;
}
bool Dynamic5Qi::extMaxDataBurstVolIsSet() const {
  return m_ExtMaxDataBurstVolIsSet;
}
void Dynamic5Qi::unsetExtMaxDataBurstVol() {
  m_ExtMaxDataBurstVolIsSet = false;
}
int32_t Dynamic5Qi::getExtPacketDelBudget() const {
  return m_ExtPacketDelBudget;
}
void Dynamic5Qi::setExtPacketDelBudget(int32_t const value) {
  m_ExtPacketDelBudget      = value;
  m_ExtPacketDelBudgetIsSet = true;
}
bool Dynamic5Qi::extPacketDelBudgetIsSet() const {
  return m_ExtPacketDelBudgetIsSet;
}
void Dynamic5Qi::unsetExtPacketDelBudget() {
  m_ExtPacketDelBudgetIsSet = false;
}
int32_t Dynamic5Qi::getCnPacketDelayBudgetDl() const {
  return m_CnPacketDelayBudgetDl;
}
void Dynamic5Qi::setCnPacketDelayBudgetDl(int32_t const value) {
  m_CnPacketDelayBudgetDl      = value;
  m_CnPacketDelayBudgetDlIsSet = true;
}
bool Dynamic5Qi::cnPacketDelayBudgetDlIsSet() const {
  return m_CnPacketDelayBudgetDlIsSet;
}
void Dynamic5Qi::unsetCnPacketDelayBudgetDl() {
  m_CnPacketDelayBudgetDlIsSet = false;
}
int32_t Dynamic5Qi::getCnPacketDelayBudgetUl() const {
  return m_CnPacketDelayBudgetUl;
}
void Dynamic5Qi::setCnPacketDelayBudgetUl(int32_t const value) {
  m_CnPacketDelayBudgetUl      = value;
  m_CnPacketDelayBudgetUlIsSet = true;
}
bool Dynamic5Qi::cnPacketDelayBudgetUlIsSet() const {
  return m_CnPacketDelayBudgetUlIsSet;
}
void Dynamic5Qi::unsetCnPacketDelayBudgetUl() {
  m_CnPacketDelayBudgetUlIsSet = false;
}

}  // namespace oai::model::common
