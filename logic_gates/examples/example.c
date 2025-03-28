#include <stdio.h>
#include "../include/logic_gates.h"

int main() {
    printf("AND(1, 1) = %d\n", AND_GATE(1, 1));
    printf("OR(0, 1) = %d\n", OR_GATE(0, 1));
    printf("NOT(1) = %d\n", NOT_GATE(1));
    printf("XOR(1, 0) = %d\n", XOR_GATE(1, 0));
    
    printf("MULTI_AND(1, 1, 0) = %d\n", MULTI_INPUT_AND_GATE(3, 1, 1, 0));
    printf("MULTI_OR(0, 0, 1) = %d\n", MULTI_INPUT_OR_GATE(3, 0, 0, 1));
    
    return 0;
}