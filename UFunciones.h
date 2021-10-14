//
// Created by MARIA HILDA BERMEJO RIOS on 10/11/21.
//

#ifndef EJEMPLO2_UFUNCIONES_H
#define EJEMPLO2_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

using TEntero =  unsigned long int;

TEntero * dimensionarArreglo(TEntero ne);
void llenarArreglo(TEntero *pA, TEntero n, TEntero * pmul5, TEntero *pmul7);
void imprimir(TEntero  *pA, TEntero n);
void llenarMultiplos(TEntero *pA,  TEntero n, TEntero * pM,  TEntero multiplo);
void   liberarMemoria( TEntero * &pA);
#endif //EJEMPLO2_UFUNCIONES_H
