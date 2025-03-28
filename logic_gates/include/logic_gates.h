/**
 * @file logic_gates.h
 * @brief Libreria per porte logiche digitali in C
 * @author Leonardo Galli
 * @version 1.0
 * @date 2023-10-30
 * 
 * @license MIT License
 * 
 * Questa libreria implementa le principali porte logiche digitali:
 * - AND, OR, NOT, NAND, NOR, XOR, XNOR
 * - Versioni multi-ingresso per AND e OR
 * 
 * Tutte le funzioni accettano input in formato `int` (0 = FALSE, 1 = TRUE)
 * e restituiscono un risultato `int` (0/1).
 */

 #ifndef LOGIC_GATES_H
 #define LOGIC_GATES_H
 
 #include <stdarg.h> // Per funzioni variadiche
 
 // ====================== PORTE LOGICHE BASE ======================
 
 /**
  * @brief Porta logica AND a 2 ingressi
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione AND (0 o 1)
  */
 int AND_GATE(int a, int b);
 
 /**
  * @brief Porta logica OR a 2 ingressi
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione OR (0 o 1)
  */
 int OR_GATE(int a, int b);
 
 /**
  * @brief Porta logica NOT (invertitore)
  * @param a Input (0 o 1)
  * @return Risultato dell'operazione NOT (0 o 1)
  */
 int NOT_GATE(int a);
 
 /**
  * @brief Porta logica NAND (AND negato)
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione NAND (0 o 1)
  */
 int NAND_GATE(int a, int b);
 
 /**
  * @brief Porta logica NOR (OR negato)
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione NOR (0 o 1)
  */
 int NOR_GATE(int a, int b);
 
 /**
  * @brief Porta logica XOR (OR esclusivo)
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione XOR (0 o 1)
  */
 int XOR_GATE(int a, int b);
 
 /**
  * @brief Porta logica XNOR (XOR negato)
  * @param a Primo input (0 o 1)
  * @param b Secondo input (0 o 1)
  * @return Risultato dell'operazione XNOR (0 o 1)
  */
 int XNOR_GATE(int a, int b);
 
 // ====================== PORTE MULTI-INGRESSO ======================
 
 /**
  * @brief Porta AND con numero variabile di ingressi
  * @param count Numero di ingressi
  * @param ... Lista di valori (0 o 1)
  * @return Risultato dell'operazione AND (0 o 1)
  */
 int MULTI_INPUT_AND_GATE(int count, ...);
 
 /**
  * @brief Porta OR con numero variabile di ingressi
  * @param count Numero di ingressi
  * @param ... Lista di valori (0 o 1)
  * @return Risultato dell'operazione OR (0 o 1)
  */
 int MULTI_INPUT_OR_GATE(int count, ...);
 
 #endif // LOGIC_GATES_H