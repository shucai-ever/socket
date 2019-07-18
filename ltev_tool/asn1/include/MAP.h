/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LTEV"
 * 	found in "LTEV.asn"
 * 	`asn1c -fskeletons-copy -fnative-types -gen-PER -pdu=auto`
 */

#ifndef	_MAP_H_
#define	_MAP_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MsgCountltev.h"
#include "MinuteOfTheYearltev.h"
#include "NodeListltev.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAP */
typedef struct MAP {
	MsgCountltev_t	 msgCnt;
	MinuteOfTheYearltev_t	*timeStamp	/* OPTIONAL */;
	NodeListltev_t	 nodes;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAP;
extern asn_SEQUENCE_specifics_t asn_SPC_MAP_specs_1;
extern asn_TYPE_member_t asn_MBR_MAP_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MAP_H_ */
#include <asn_internal.h>