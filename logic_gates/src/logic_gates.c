/**
 * @file logic_gates.c
 * @brief Implementazione delle porte logiche
 */

 #include "logic_gates.h"
 #include <stdarg.h>
 
 // ====================== IMPLEMENTAZIONE PORTE BASE ======================
 
 int AND_GATE(int a, int b) {
     return a && b;
 }
 
 int OR_GATE(int a, int b) {
     return a || b;
 }
 
 int NOT_GATE(int a) {
     return !a;
 }
 
 int NAND_GATE(int a, int b) {
     return !(a && b);
 }
 
 int NOR_GATE(int a, int b) {
     return !(a || b);
 }
 
 int XOR_GATE(int a, int b) {
     return a ^ b;
 }
 
 int XNOR_GATE(int a, int b) {
     return !(a ^ b);
 }
 
 // ====================== IMPLEMENTAZIONE PORTE MULTI-INGRESSO ======================
 
 int MULTI_INPUT_AND_GATE(int count, ...) {
     va_list args;
     va_start(args, count);
     
     int result = 1;
     for (int i = 0; i < count; i++) {
         int bit = va_arg(args, int);
         result = result && bit;
         if (result == 0) break; // Ottimizzazione
     }
     
     va_end(args);
     return result;
 }
 
 int MULTI_INPUT_OR_GATE(int count, ...) {
     va_list args;
     va_start(args, count);
     
     int result = 0;
     for (int i = 0; i < count; i++) {
         int bit = va_arg(args, int);
         result = result || bit;
         if (result == 1) break; // Ottimizzazione
     }
     
     va_end(args);
     return result;
 }