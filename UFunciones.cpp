//
// Created by MARIA HILDA BERMEJO RIOS on 10/11/21.
//

#include "UFunciones.h"


TEntero * dimensionarArreglo(TEntero ne)
{
  return new TEntero[ne];
}


void llenarArreglo(TEntero *pA, TEntero n, TEntero * pmul5, TEntero *pmul7)
{
  *pmul5=0;
  *pmul7=0;
  for(int i=0; i<n; i++)
  {
    pA[i] = rand()%1000;
    if (pA[i]%5==0)
      *pmul5 = *pmul5 + 1;
    if (pA[i]%7==0)
      *pmul7 = *pmul7 + 1;
  }
}


void imprimir(TEntero  *pA, TEntero n)
{
  cout <<"\n";
  for(int i=0; i<n; i++)
    cout << setw(5) << pA[i];

}


void llenarMultiplos(TEntero *pA,  TEntero n, TEntero * pM,  TEntero multiplo)
{
  int i=0;
  for(int c=0; c<n; c++)
  {
    if(pA[c]%multiplo ==0)
    {
      pM[i] = pA[c];  //-- pM[i++] = pA[c];
      i++;
    }
  }
}

void   liberarMemoria( TEntero * &pA)
{
  delete []pA;
  pA = nullptr;
}