#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  
  int i = 0;
  //int aux = 0;
  if(pq->size == 0)
    return NULL;
  else
    return pq->heapArray[i].data;

  return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

  int i = 0;
  int talla = pq->size;
  pq->heapArray[talla].data = data;
  pq->heapArray[talla].priority = priority;
  pq->size = talla+1;
  for(i = pq->size ; i>= 0 ; i--)
  {
    int posActual = i - 1;
    int padre = (posActual - 1)/2;
    if(pq->heapArray[posActual].priority > pq->heapArray[padre].priority)
    {
      int auxPrio = pq->heapArray[padre].priority;
      void* auxData = pq->heapArray[padre].data;
      pq->heapArray[padre].priority = pq->heapArray[posActual].priority;
      pq->heapArray[padre].data = pq->heapArray[posActual].data;
      pq->heapArray[posActual].priority = auxPrio;
      pq->heapArray[posActual].data = auxData;
      pq->capac = pq->capac*2+1;
      //pq->heapArray = (heapElem *) realloc(pq->heapArray, pq->capac);
      pq->heapArray = (heapElem*)realloc(pq->heapArray, sizeof(pq->capac));
      
    }
  }

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  
  Heap * new = (Heap *)malloc(sizeof(Heap));
  new->capac = 3;
  new->size = 0;
  new->heapArray = (heapElem *)malloc(3*sizeof(heapElem));
  
  for(int i ; i < new->capac ; i++)
  {
    new->heapArray[i].data = NULL;
    new->heapArray[i].priority = 0;
  }
  
   return new;
}
