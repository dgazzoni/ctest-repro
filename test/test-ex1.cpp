#include <gtest/gtest.h>

#include "aux_test_functions.h"

extern "C" {
#include "ex1.h"
}

TEST(ex1, EspecificoArrayDoisElementosInsereSegundoAntesDoPrimeiro) {
    int v[2] = {1, 0};
    int v_depois[sizeof(v) / sizeof(int)] = {0, 1};

    ex1(v, sizeof(v) / sizeof(int));

    ASSERT_TRUE(ArraysMatch(v_depois, v));
}

TEST(ex1, EspecificoArrayUmElemento) {
    int v[1] = {0};
    int v_depois[sizeof(v) / sizeof(int)] = {0};

    ex1(v, sizeof(v) / sizeof(int));

    ASSERT_TRUE(ArraysMatch(v_depois, v));
}

TEST(ex1, EspecificoArrayDoisElementosEmOrdem) {
    int v[2] = {0, 1};
    int v_depois[sizeof(v) / sizeof(int)] = {0, 1};

    ex1(v, sizeof(v) / sizeof(int));

    ASSERT_TRUE(ArraysMatch(v_depois, v));
}

TEST(ex1, EspecificoArrayTresElementosInsereSegundoAposPrimeiro) {
    int v[3] = {0, 2, 1};
    int v_depois[sizeof(v) / sizeof(int)] = {0, 1, 2};

    ex1(v, sizeof(v) / sizeof(int));

    ASSERT_TRUE(ArraysMatch(v_depois, v));
}

TEST(ex1, EspecificoArrayDoisElementosInserePrimeiroNoInicio) {
    int v[2] = {0, -2147483647 - 1};
    int v_depois[sizeof(v) / sizeof(int)] = {-2147483647 - 1, 0};

    ex1(v, sizeof(v) / sizeof(int));

    ASSERT_TRUE(ArraysMatch(v_depois, v));
}

#define FUNCAO_ORDENACAO ex1

#include "testes_ordenacao.h"
