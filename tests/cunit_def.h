/*
 * examples.h
 *
 *  Created on: 14/02/2012
 *      Author: fviale
 */

#ifndef CUNIT_DEF_H_
#define CUNIT_DEF_H_

	#include <CUnit/Basic.h>

	#ifndef DEFAULT_MAX_SUITES
		#define DEFAULT_MAX_SUITES 100
	#endif

	extern int suite_index = 0;

	extern CU_SuiteInfo suites[] = { [ 0 ... (DEFAULT_MAX_SUITES - 1)] = CU_SUITE_INFO_NULL};

#endif /* CUNIT_DEF_H_ */