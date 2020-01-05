/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Crypto-Conditions"
 * 	found in "CryptoConditions.asn"
 */

#ifndef	_ThresholdFulfillment_H_
#define	_ThresholdFulfillment_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SET_OF.h"
#include "constr_SET_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Fulfillment;
struct Condition;

/* ThresholdFulfillment */
typedef struct ThresholdFulfillment {
	struct subfulfillments {
		A_SET_OF(struct Fulfillment) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subfulfillments;
	struct subconditions {
		A_SET_OF(struct Condition) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subconditions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdFulfillment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdFulfillment;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Fulfillment.h"
#include "Condition.h"

#endif	/* _ThresholdFulfillment_H_ */
#include "asn_internal.h"
