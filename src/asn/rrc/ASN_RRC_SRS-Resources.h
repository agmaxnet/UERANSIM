/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SRS_Resources_H_
#define	_ASN_RRC_SRS_Resources_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP {
	ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP_n1	= 0,
	ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP_n2	= 1,
	ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP_n4	= 2,
	ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP_n8	= 3,
	ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP_n16	= 4
} e_ASN_RRC_SRS_Resources__maxNumberAperiodicSRS_PerBWP;
typedef enum ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP {
	ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP_n1	= 0,
	ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP_n2	= 1,
	ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP_n4	= 2,
	ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP_n8	= 3,
	ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP_n16	= 4
} e_ASN_RRC_SRS_Resources__maxNumberPeriodicSRS_PerBWP;
typedef enum ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP {
	ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP_n1	= 0,
	ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP_n2	= 1,
	ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP_n4	= 2,
	ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP_n8	= 3,
	ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP_n16	= 4
} e_ASN_RRC_SRS_Resources__maxNumberSemiPersistentSRS_PerBWP;
typedef enum ASN_RRC_SRS_Resources__maxNumberSRS_Ports_PerResource {
	ASN_RRC_SRS_Resources__maxNumberSRS_Ports_PerResource_n1	= 0,
	ASN_RRC_SRS_Resources__maxNumberSRS_Ports_PerResource_n2	= 1,
	ASN_RRC_SRS_Resources__maxNumberSRS_Ports_PerResource_n4	= 2
} e_ASN_RRC_SRS_Resources__maxNumberSRS_Ports_PerResource;

/* ASN_RRC_SRS-Resources */
typedef struct ASN_RRC_SRS_Resources {
	long	 maxNumberAperiodicSRS_PerBWP;
	long	 maxNumberAperiodicSRS_PerBWP_PerSlot;
	long	 maxNumberPeriodicSRS_PerBWP;
	long	 maxNumberPeriodicSRS_PerBWP_PerSlot;
	long	 maxNumberSemiPersistentSRS_PerBWP;
	long	 maxNumberSemiPersistentSRS_PerBWP_PerSlot;
	long	 maxNumberSRS_Ports_PerResource;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SRS_Resources_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxNumberAperiodicSRS_PerBWP_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxNumberPeriodicSRS_PerBWP_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxNumberSemiPersistentSRS_PerBWP_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_maxNumberSRS_Ports_PerResource_23;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SRS_Resources;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SRS_Resources_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SRS_Resources_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SRS_Resources_H_ */
#include <asn_internal.h>
