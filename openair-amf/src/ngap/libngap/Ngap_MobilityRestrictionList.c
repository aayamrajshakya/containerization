/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#include "Ngap_MobilityRestrictionList.h"

#include "Ngap_EquivalentPLMNs.h"
#include "Ngap_RATRestrictions.h"
#include "Ngap_ForbiddenAreaInformation.h"
#include "Ngap_ServiceAreaInformation.h"
#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_MobilityRestrictionList_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_MobilityRestrictionList, servingPLMN),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_PLMNIdentity,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "servingPLMN"},
    {ATF_POINTER,
     5,
     offsetof(struct Ngap_MobilityRestrictionList, equivalentPLMNs),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_EquivalentPLMNs,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "equivalentPLMNs"},
    {ATF_POINTER,
     4,
     offsetof(struct Ngap_MobilityRestrictionList, rATRestrictions),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_RATRestrictions,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "rATRestrictions"},
    {ATF_POINTER,
     3,
     offsetof(struct Ngap_MobilityRestrictionList, forbiddenAreaInformation),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ForbiddenAreaInformation,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "forbiddenAreaInformation"},
    {ATF_POINTER,
     2,
     offsetof(struct Ngap_MobilityRestrictionList, serviceAreaInformation),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ServiceAreaInformation,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "serviceAreaInformation"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_MobilityRestrictionList, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_9666P116,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_Ngap_MobilityRestrictionList_oms_1[] = {1, 2, 3, 4, 5};
static const ber_tlv_tag_t asn_DEF_Ngap_MobilityRestrictionList_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Ngap_MobilityRestrictionList_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* servingPLMN */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* equivalentPLMNs */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* rATRestrictions */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* forbiddenAreaInformation */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* serviceAreaInformation */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0} /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_MobilityRestrictionList_specs_1 = {
    sizeof(struct Ngap_MobilityRestrictionList),
    offsetof(struct Ngap_MobilityRestrictionList, _asn_ctx),
    asn_MAP_Ngap_MobilityRestrictionList_tag2el_1,
    6,                                          /* Count of tags in the map */
    asn_MAP_Ngap_MobilityRestrictionList_oms_1, /* Optional members */
    5,
    0, /* Root/Additions */
    6, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_MobilityRestrictionList = {
    "MobilityRestrictionList",
    "MobilityRestrictionList",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_MobilityRestrictionList_tags_1,
    sizeof(asn_DEF_Ngap_MobilityRestrictionList_tags_1) /
        sizeof(asn_DEF_Ngap_MobilityRestrictionList_tags_1[0]), /* 1 */
    asn_DEF_Ngap_MobilityRestrictionList_tags_1, /* Same as above */
    sizeof(asn_DEF_Ngap_MobilityRestrictionList_tags_1) /
        sizeof(asn_DEF_Ngap_MobilityRestrictionList_tags_1[0]), /* 1 */
    {
#if !defined(ASN_DISABLE_OER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
        SEQUENCE_constraint},
    asn_MBR_Ngap_MobilityRestrictionList_1,
    6,                                            /* Elements count */
    &asn_SPC_Ngap_MobilityRestrictionList_specs_1 /* Additional specs */
};
