#include <stdio.h>

typedef struct tnodo{

  clave CLAVE;
  int dato;//es el dato que se guarda en el nodo ej : pàis, cantidad mercancia 
  struct nodo *siguiente,*abajo;

  }nodo;


typedef struct nodosgte{
    clave CLAVE;
    int dato;
  struct nodosig *sgte;
}nodosig;
