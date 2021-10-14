#include "UFunciones.h"

int main()
{
   TEntero   *pA= nullptr;
   TEntero n;
   TEntero mul5, mul7;
   TEntero *pM5= nullptr;
   TEntero *pM7= nullptr;

   srand(time(nullptr));
   cout << "Numero de elementos del arreglo: ";
   cin >> n;

   pA = dimensionarArreglo(n);
   llenarArreglo(pA,n,&mul5,&mul7);
   imprimir(pA,n);
   pM5 = dimensionarArreglo(mul5);
   pM7 = dimensionarArreglo(mul7);
   llenarMultiplos(pA,n,pM5,5);
   llenarMultiplos(pA,n,pM7,7);
   cout << "\n\nMultiplos de 5 \n";
   imprimir(pM5,mul5);
   cout << "\n\nMultiplos de 7 \n";
   imprimir(pM7,mul7);
   //--- liberamos memoria
   liberarMemoria(pA);
   liberarMemoria(pM5);
   liberarMemoria(pM7);
  return 0;
}

