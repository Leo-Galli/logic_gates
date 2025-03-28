#include <assert.h>
#include "../include/logic_gates.h"

void test_porte_logiche() {
    assert(AND_GATE(1, 1) == 1);
    assert(OR_GATE(0, 1) == 1);
    assert(NOT_GATE(1) == 0);
    assert(XOR_GATE(1, 0) == 1);
    assert(MULTI_INPUT_AND_GATE(3, 1, 1, 0) == 0);
    assert(MULTI_INPUT_OR_GATE(3, 0, 0, 1) == 1);
}

int main() {
    test_porte_logiche();
    printf("✅ Tutti i test passati!\n");
    return 0;
}