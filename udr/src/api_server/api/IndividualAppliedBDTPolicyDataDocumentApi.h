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
/*
 * IndividualAppliedBDTPolicyDataDocumentApi.h
 *
 *
 */

#ifndef IndividualAppliedBDTPolicyDataDocumentApi_H_
#define IndividualAppliedBDTPolicyDataDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "BdtPolicyData.h"
#include "BdtPolicyDataPatch.h"
#include "ProblemDetails.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class IndividualAppliedBDTPolicyDataDocumentApi {
 public:
  IndividualAppliedBDTPolicyDataDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualAppliedBDTPolicyDataDocumentApi() {}
  void init();

  const std::string base = "/nudr-dr/";

 private:
  void setupRoutes();

  void delete_individual_applied_bdt_policy_data_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void update_individual_applied_bdt_policy_data_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void individual_applied_bdt_policy_data_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Delete an individual Applied BDT Policy Data resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="bdtPolicyId">The Identifier of an Individual Applied BDT
  /// Policy Data to be updated. It shall apply the format of Data type
  /// string.</param>
  virtual void delete_individual_applied_bdt_policy_data(
      const std::string& bdtPolicyId,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Modify part of the properties of an individual Applied BDT Policy Data
  /// resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="bdtPolicyId">The Identifier of an Individual Applied BDT
  /// Policy Data to be updated. It shall apply the format of Data type
  /// string.</param> <param name="bdtPolicyDataPatch"></param>
  virtual void update_individual_applied_bdt_policy_data(
      const std::string& bdtPolicyId,
      const BdtPolicyDataPatch& bdtPolicyDataPatch,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* IndividualAppliedBDTPolicyDataDocumentApi_H_ */
