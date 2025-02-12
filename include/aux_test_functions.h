#ifndef AUX_TEST_FUNCTIONS_H
#define AUX_TEST_FUNCTIONS_H

#include <algorithm>
#include <cstddef>

#include "gtest/gtest.h"

template <typename T, size_t size>
::testing::AssertionResult ArraysMatch(const T (&expected)[size], const T (&actual)[size]) {
    for (size_t i(0); i < size; ++i) {
        if (expected[i] != actual[i]) {
            return ::testing::AssertionFailure()
                   << "array[" << i << "] (" << actual[i] << ") != esperado[" << i << "] (" << expected[i] << ")";
        }
    }

    return ::testing::AssertionSuccess();
}

#endif  // AUX_TEST_FUNCTIONS_H
