#ifndef TESTES_ORDENACAO_H
#define TESTES_ORDENACAO_H

#include <algorithm>

#include "aux_test_functions.h"
#include "gtest/gtest.h"

#ifndef FUNCAO_ORDENACAO
#error Necessario definir FUNCAO_ORDENACAO para a funcao de ordenacao a ser testada
#endif

#ifndef COMPARACAO
#define COMPARACAO std::less<int>()
#endif

TEST(FUNCAO_ORDENACAO, GeralArrayVazio) {
    FUNCAO_ORDENACAO(NULL, 0);
}

TEST(FUNCAO_ORDENACAO, GeralArrayUmElemento) {
    int v[] = {0};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayDoisElementosInicio) {
    int v[] = {2, 1};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayDoisElementosFim) {
    int v[] = {2, 3};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayDoisElementosFimNaoMexeAposFimDoArray) {
    int v[] = {2, 5, 3};
    int v_esperado[sizeof(v) / sizeof(v[0])];
    v_esperado[sizeof(v) / sizeof(v[0]) - 1] = v[sizeof(v) / sizeof(v[0]) - 1];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]) - 1, COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]) - 1);

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayDoisElementosIguais) {
    int v[] = {0, 0};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosInicio) {
    int v[] = {-3, -2, -4};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosMeio) {
    int v[] = {1, 7, 3};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosFim) {
    int v[] = {0, 16, 18};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosInicioNaoMexeAposFimDoArray) {
    int v[] = {3, 5, 2, 4};
    int v_esperado[sizeof(v) / sizeof(v[0])];
    v_esperado[sizeof(v) / sizeof(v[0]) - 1] = v[sizeof(v) / sizeof(v[0]) - 1];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]) - 1, COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]) - 1);

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosDoisIguaisInicio) {
    int v[] = {7, 7, 3};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosDoisIguaisFim) {
    int v[] = {7, 3, 3};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosDoisIguaisDiferenteNoMeio) {
    int v[] = {7, 3, 7};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayTresElementosTresIguais) {
    int v[] = {7, 7, 7};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArraySeteElementosInicio) {
    int v[] = {3, 7, 8, 10, 12, 15, 1};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArraySeteElementosMeio) {
    int v[] = {5, 6, 8, 9, 10, 11, 7};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArraySeteElementosFim) {
    int v[] = {1, 2, 3, 5, 8, 13, 21};
    int v_esperado[sizeof(v) / sizeof(v[0])];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArraySeteElementosMeioNaoMexeAposFimDoArray) {
    int v[] = {4, 6, 10, 12, 14, 16, 8, 5};
    int v_esperado[sizeof(v) / sizeof(v[0])];
    v_esperado[sizeof(v) / sizeof(v[0]) - 1] = v[sizeof(v) / sizeof(v[0]) - 1];

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]) - 1, COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]) - 1);

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayCemElementos) {
    int v[100];
    int v_esperado[sizeof(v) / sizeof(v[0])];
    int i;

    srand(0);
    for (i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
        v[i] = rand();
    }

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

TEST(FUNCAO_ORDENACAO, GeralArrayMilElementos) {
    int v[1000];
    int v_esperado[sizeof(v) / sizeof(v[0])];
    int i;

    srand(0);
    for (i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
        v[i] = rand();
    }

    memcpy(v_esperado, v, sizeof(v));
    std::sort(v_esperado, v_esperado + sizeof(v) / sizeof(v[0]), COMPARACAO);
    FUNCAO_ORDENACAO(v, sizeof(v) / sizeof(v[0]));

    ASSERT_TRUE(ArraysMatch(v_esperado, v));
}

#endif  // TESTES_ORDENACAO_H
