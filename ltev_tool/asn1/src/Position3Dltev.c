/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LTEV"
 * 	found in "LTEV.asn"
 * 	`asn1c -fskeletons-copy -fnative-types -gen-PER -pdu=auto`
 */

#include "Position3Dltev.h"

asn_TYPE_member_t asn_MBR_Position3Dltev_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Position3Dltev, lat),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitudeltev,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Position3Dltev, Long),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitudeltev,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"long"
		},
	{ ATF_POINTER, 1, offsetof(struct Position3Dltev, elevation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Elevationltev,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevation"
		},
};
static const int asn_MAP_Position3Dltev_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Position3Dltev_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Position3Dltev_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lat */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* long */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* elevation */
};
asn_SEQUENCE_specifics_t asn_SPC_Position3Dltev_specs_1 = {
	sizeof(struct Position3Dltev),
	offsetof(struct Position3Dltev, _asn_ctx),
	asn_MAP_Position3Dltev_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Position3Dltev_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Position3Dltev = {
	"Position3Dltev",
	"Position3Dltev",
	&asn_OP_SEQUENCE,
	asn_DEF_Position3Dltev_tags_1,
	sizeof(asn_DEF_Position3Dltev_tags_1)
		/sizeof(asn_DEF_Position3Dltev_tags_1[0]), /* 1 */
	asn_DEF_Position3Dltev_tags_1,	/* Same as above */
	sizeof(asn_DEF_Position3Dltev_tags_1)
		/sizeof(asn_DEF_Position3Dltev_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Position3Dltev_1,
	3,	/* Elements count */
	&asn_SPC_Position3Dltev_specs_1	/* Additional specs */
};

