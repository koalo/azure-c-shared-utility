// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef TEST_DEPENDENCY_H
#define TEST_DEPENDENCY_H

#include "umock_c.h"

#ifdef __cplusplus
#include <cstddef>
extern "C" {
#else
#include <stddef.h>
#endif

    typedef struct TEST_STRUCT_TAG
    {
        int x;
    } TEST_STRUCT;

    typedef struct TEST_STRUCT_COPY_FAILS_TAG
    {
        int x;
    } TEST_STRUCT_COPY_FAILS;

    /* Tests_SRS_UMOCK_C_01_001: [MOCKABLE_FUNCTION shall be used to wrap function definition allowing the user to declare a function that can be mocked.]*/
    /* Tests_SRS_UMOCK_C_01_003: [If ENABLE_MOCKS is defined, MOCKABLE_FUNCTION shall generate all the boilerplate code needed by the macros in umock API to function to record the calls. Note: a lot of code (including function definitions and bodies, global variables (both static and extern).] */
    /* Tests_SRS_UMOCK_C_01_004: [If ENABLE_MOCKS is defined, MOCKABLE_FUNCTION shall generate the declaration of the function and code for the mocked function, thus allowing setting up of expectations in test functions.] */
    MOCKABLE_FUNCTION(int, test_dependency_no_args);
    MOCKABLE_FUNCTION(int, test_dependency_1_arg, int, a);
    MOCKABLE_FUNCTION(int, test_dependency_2_args, int, a, int, b);
    MOCKABLE_FUNCTION(int, test_dependency_struct_arg, TEST_STRUCT, s);
    MOCKABLE_FUNCTION(int, test_dependency_char_star_arg, char*, s);
    MOCKABLE_FUNCTION(int, test_dependency_1_out_arg, int*, a);
    MOCKABLE_FUNCTION(int, test_dependency_2_out_args, int*, a, int*, b);
    MOCKABLE_FUNCTION(void, test_dependency_void_return);
    MOCKABLE_FUNCTION(int*, test_dependency_int_ptr_return);
    MOCKABLE_FUNCTION(void, test_dependency_buffer_arg, unsigned char*, a);
    MOCKABLE_FUNCTION(int, test_dependency_global_mock_return_test);
    MOCKABLE_FUNCTION(TEST_STRUCT_COPY_FAILS, test_dependency_global_mock_return_copy_fails);
    MOCKABLE_FUNCTION(void, test_dependency_type_with_space, char *,s);
    MOCKABLE_FUNCTION(void, test_dependency_all_types, char, char_arg, unsigned char, unsignedchar_arg, short, short_arg, unsigned short, unsignedshort_arg, int, int_arg, unsigned int, unsignedint_arg, long, long_arg, unsigned long, unsignedlong_arg, long long, longlong_arg, unsigned long long, unsignedlonglong_arg, float, float_arg, double, double_arg, long double, longdouble_arg, size_t, size_t_arg);

#ifdef __cplusplus
}
#endif

#endif /* TEST_DEPENDENCY_H */
