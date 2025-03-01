#include<stdio.h>

//este programa muestra la diferencia entre pasar un valor y pasar una referencia con ayuda de dos funciones
void pasarValor(int);
void pasarReferencia(int *);


int main(){
  int nums[] = {55,44,33,22,11};
  int *ap, cont;
  ap = nums;
  
  printf("Pasar valor: %d\n", *ap);
  pasarValor(*ap);
  printf("Pasar referencia: %d\n", *ap);
  pasarReferencia(ap);
  printf("Valor final: %d\n", *ap);
  return 0;
}

// en esta función se recibe un valor y se modifica, pero no afecta el valor en main ()
void pasarValor(int equis){
  printf("%d\n", equis);
  equis = 128;
  printf("%d\n", equis);
}
// en esta función se recibe un valor y se modifica, aquí sí se afecta el valor en main ()
void pasarReferencia(int *equis){
  printf("%d\n", *equis);
  *equis = 128;
  printf("%d\n", *equis);
}
