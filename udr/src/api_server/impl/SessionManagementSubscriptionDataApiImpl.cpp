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

#include "SessionManagementSubscriptionDataApiImpl.h"

#include "logger.hpp"
#include "udr_app.hpp"
#include "udr_config.hpp"

extern oai::udr::config::udr_config udr_cfg;

namespace oai::udr::api {

using namespace oai::udr::model;
using namespace oai::model::common;

SessionManagementSubscriptionDataApiImpl::
    SessionManagementSubscriptionDataApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr,
        oai::udr::app::udr_app* udr_app_inst, std::string address)
    : SessionManagementSubscriptionDataApi(rtr),
      m_udr_app(udr_app_inst),
      m_address(address) {}

void SessionManagementSubscriptionDataApiImpl::query_sm_data(
    const std::string& ueId, const std::string& servingPlmnId,
    const Pistache::Optional<oai::model::common::Snssai>& singleNssai,
    const Pistache::Optional<std::string>& dnn,
    const Pistache::Optional<std::vector<std::string>>& fields,
    const Pistache::Optional<std::string>& supportedFeatures,
    const Pistache::Optional<Pistache::Http::Header::Raw>& ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw>& ifModifiedSince,
    Pistache::Http::ResponseWriter& response) {
  // servingPlmnId  pattern: "^[0-9]{5,6}$"

  std::optional<Snssai> snssai = std::nullopt;
  if (!singleNssai.isEmpty()) {
    snssai = std::optional<Snssai>(singleNssai.get());
  }
  std::optional<std::string> dnn_str = std::nullopt;
  if (!dnn.isEmpty()) {
    dnn_str = std::optional<std::string>(dnn.get());
  }

  nlohmann::json response_data = nlohmann::json::array();
  Pistache::Http::Code code    = {};
  long http_code               = 0;

  m_udr_app->handle_query_sm_data(
      ueId, servingPlmnId, response_data, http_code, snssai, dnn_str);

  code = static_cast<Pistache::Http::Code>(http_code);
  Logger::udr_server().debug("HTTP response code %ld", http_code);

  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType("application/json"));
  response.send(code, response_data.dump().c_str());
}

void SessionManagementSubscriptionDataApiImpl::query_sm_data(
    Pistache::Http::ResponseWriter& response) {
  nlohmann::json response_data = {};
  Pistache::Http::Code code    = {};
  long http_code               = 0;

  m_udr_app->handle_query_sm_data(response_data, http_code);

  code = static_cast<Pistache::Http::Code>(http_code);
  Logger::udr_server().debug("HTTP response code %ld", http_code);

  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType("application/json"));
  response.send(code, response_data.dump().c_str());
}

void SessionManagementSubscriptionDataApiImpl::create_sm_data(
    const std::string& ueId, const std::string& servingPlmnId,
    SessionManagementSubscriptionData& subscriptionData,
    Pistache::Http::ResponseWriter& response) {
  nlohmann::json response_data = {};
  Pistache::Http::Code code    = {};
  long http_code               = 0;
  uint32_t resource_id         = 0;
  m_udr_app->handle_create_sm_data(
      ueId, servingPlmnId, subscriptionData, response_data, http_code,
      resource_id);

  code = static_cast<Pistache::Http::Code>(http_code);
  Logger::udr_server().debug("HTTP Response code %d.\n", (int) code);
  if ((code == Pistache::Http::Code::Created) or
      (code == Pistache::Http::Code::Ok)) {
    // Location?
    std::string location =
        "http://" + m_address + base + udr_cfg.nudr.api_version +
        fmt::format(
            "/subscription-data/{}/{}/provisioned-data/sm-data", ueId,
            servingPlmnId) +
        "/" + std::to_string(resource_id);

    response.headers().add<Pistache::Http::Header::Location>(
        location);  // Location header
    Logger::udr_server().debug("Location header: %s", location.c_str());
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType("application/json"));

    response.send(code, response_data.dump().c_str());
  } else if (code == Pistache::Http::Code::No_Content) {
    response.send(code);
  } else {
    // TODO:
    response.send(code);
  }
}

void SessionManagementSubscriptionDataApiImpl::put_sm_data(
    const std::string& ueId, const std::string& servingPlmnId,
    SessionManagementSubscriptionData& subscriptionData,
    Pistache::Http::ResponseWriter& response) {
  nlohmann::json response_data = {};
  Pistache::Http::Code code    = {};
  long http_code               = 0;
  uint32_t resource_id         = 0;

  m_udr_app->handle_update_sm_data(
      ueId, servingPlmnId, subscriptionData, response_data, http_code,
      resource_id);

  code = static_cast<Pistache::Http::Code>(http_code);
  Logger::udr_server().debug("HTTP Response code %d.\n", (int) code);
  if (code == Pistache::Http::Code::Created) {
    std::string location =
        "http://" + m_address + base + udr_cfg.nudr.api_version +
        fmt::format(
            "/subscription-data/{}/{}/provisioned-data/sm-data", ueId,
            servingPlmnId) +
        "/" + std::to_string(resource_id);

    response.headers().add<Pistache::Http::Header::Location>(
        location);  // Location header
    Logger::udr_server().debug("Location header: %s", location.c_str());
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType("application/json"));

    response.send(code, response_data.dump().c_str());
  } else if (code == Pistache::Http::Code::No_Content) {
    response.send(code);
  } else {
    // TODO:
    response.send(code);
  }
}

void SessionManagementSubscriptionDataApiImpl::delete_sm_data(
    const std::string& ueId, const std::string& servingPlmnId,
    const Pistache::Optional<Snssai>& singleNssai,
    Pistache::Http::ResponseWriter& response) {
  nlohmann::json response_data = {};
  Pistache::Http::Code code    = {};
  long http_code               = 0;

  std::optional<Snssai> snssai = std::nullopt;
  if (!singleNssai.isEmpty()) {
    snssai = std::optional<Snssai>(singleNssai.get());
  }

  m_udr_app->handle_delete_sm_data(
      ueId, servingPlmnId, snssai, response_data, http_code);

  code = static_cast<Pistache::Http::Code>(http_code);
  Logger::udr_server().debug("HTTP response code %ld", http_code);

  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType("application/json"));
  response.send(code, response_data.dump().c_str());
}

}  // namespace oai::udr::api
