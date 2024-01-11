/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SubscribedSnssai.h
 *
 *
 */

#ifndef SubscribedSnssai_H_
#define SubscribedSnssai_H_

#include "Snssai.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class SubscribedSnssai {
 public:
  SubscribedSnssai();
  virtual ~SubscribedSnssai() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const SubscribedSnssai& rhs) const;
  bool operator!=(const SubscribedSnssai& rhs) const;

  /////////////////////////////////////////////
  /// SubscribedSnssai members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSubscribedSnssai() const;
  void setSubscribedSnssai(oai::model::common::Snssai const& value);
  /// <summary>
  ///
  /// </summary>
  bool isDefaultIndication() const;
  void setDefaultIndication(bool const value);
  bool defaultIndicationIsSet() const;
  void unsetDefaultIndication();

  friend void to_json(nlohmann::json& j, const SubscribedSnssai& o);
  friend void from_json(const nlohmann::json& j, SubscribedSnssai& o);

 protected:
  oai::model::common::Snssai m_SubscribedSnssai;

  bool m_DefaultIndication;
  bool m_DefaultIndicationIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* SubscribedSnssai_H_ */
