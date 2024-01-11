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

#include "PlmnSupportList.hpp"

namespace ngap {

//------------------------------------------------------------------------------
PlmnSupportList::PlmnSupportList() {}

//------------------------------------------------------------------------------
PlmnSupportList::~PlmnSupportList() {}

//------------------------------------------------------------------------------
bool PlmnSupportList::encode(Ngap_PLMNSupportList_t& plmn_support_list) {
  for (std::vector<PlmnSupportItem>::iterator it = std::begin(list_);
       it != std::end(list_); ++it) {
    Ngap_PLMNSupportItem_t* supportItem =
        (Ngap_PLMNSupportItem_t*) calloc(1, sizeof(Ngap_PLMNSupportItem_t));
    if (!supportItem) return false;
    if (!it->encode(*supportItem)) return false;
    if (ASN_SEQUENCE_ADD(&plmn_support_list.list, supportItem) != 0)
      return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool PlmnSupportList::decode(const Ngap_PLMNSupportList_t& plmn_support_list) {
  list_.clear();
  for (int i = 0; i < plmn_support_list.list.count; i++) {
    PlmnSupportItem item = {};
    if (!item.decode(*plmn_support_list.list.array[i])) return false;
    list_.push_back(item);
  }

  return true;
}

//------------------------------------------------------------------------------
void PlmnSupportList::set(const std::vector<PlmnSupportItem>& items) {
  list_ = items;
}

//------------------------------------------------------------------------------
void PlmnSupportList::get(std::vector<PlmnSupportItem>& items) {
  items = list_;
}

//------------------------------------------------------------------------------
void PlmnSupportList::addItem(const PlmnSupportItem& item) {
  list_.push_back(item);
}

}  // namespace ngap
