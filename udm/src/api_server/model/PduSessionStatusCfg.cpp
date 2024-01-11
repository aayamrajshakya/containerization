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

#include "PduSessionStatusCfg.h"
#include "Helpers.h"

#include <sstream>

namespace oai::udm::model {

PduSessionStatusCfg::PduSessionStatusCfg() {
  m_DnnIsSet = false;
}

void PduSessionStatusCfg::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PduSessionStatusCfg::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PduSessionStatusCfg::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PduSessionStatusCfg" : pathPrefix;

  return success;
}

bool PduSessionStatusCfg::operator==(const PduSessionStatusCfg& rhs) const {
  return

      ((!dnnIsSet() && !rhs.dnnIsSet()) ||
       (dnnIsSet() && rhs.dnnIsSet() && getDnn() == rhs.getDnn()))

          ;
}

bool PduSessionStatusCfg::operator!=(const PduSessionStatusCfg& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PduSessionStatusCfg& o) {
  j = nlohmann::json();
  if (o.dnnIsSet()) j["dnn"] = o.m_Dnn;
}

void from_json(const nlohmann::json& j, PduSessionStatusCfg& o) {
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
}

std::string PduSessionStatusCfg::getDnn() const {
  return m_Dnn;
}
void PduSessionStatusCfg::setDnn(std::string const& value) {
  m_Dnn      = value;
  m_DnnIsSet = true;
}
bool PduSessionStatusCfg::dnnIsSet() const {
  return m_DnnIsSet;
}
void PduSessionStatusCfg::unsetDnn() {
  m_DnnIsSet = false;
}

}  // namespace oai::udm::model
