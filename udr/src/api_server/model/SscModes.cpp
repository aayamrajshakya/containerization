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
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SscModes.h"

namespace oai::udr::model {

SscModes::SscModes() {
  m_AllowedSscModesIsSet = false;
}

SscModes::~SscModes() {}

void SscModes::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SscModes& o) {
  j                   = nlohmann::json();
  j["defaultSscMode"] = o.m_DefaultSscMode;
  if (o.allowedSscModesIsSet() || !o.m_AllowedSscModes.empty())
    j["allowedSscModes"] = o.m_AllowedSscModes;
}

void from_json(const nlohmann::json& j, SscModes& o) {
  j.at("defaultSscMode").get_to(o.m_DefaultSscMode);
  if (j.find("allowedSscModes") != j.end()) {
    j.at("allowedSscModes").get_to(o.m_AllowedSscModes);
    o.m_AllowedSscModesIsSet = true;
  }
}

oai::model::common::SscMode SscModes::getDefaultSscMode() const {
  return m_DefaultSscMode;
}
void SscModes::setDefaultSscMode(oai::model::common::SscMode const& value) {
  m_DefaultSscMode = value;
}
std::vector<oai::model::common::SscMode>& SscModes::getAllowedSscModes() {
  return m_AllowedSscModes;
}
void SscModes::setAllowedSscModes(
    std::vector<oai::model::common::SscMode> const& value) {
  m_AllowedSscModes      = value;
  m_AllowedSscModesIsSet = true;
}
bool SscModes::allowedSscModesIsSet() const {
  return m_AllowedSscModesIsSet;
}
void SscModes::unsetAllowedSscModes() {
  m_AllowedSscModesIsSet = false;
}

}  // namespace oai::udr::model
