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
  /*
  int i = 1;
  int posPrioridad = 0;
  while(pq->size < i)
  {
    if(pq->heapArray[i].priority > pq->heapArray[i-1].priority)
        posPrioridad = i;
    i++;
    
  }
  */
  return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  
  Heap * new = (Heap *)malloc(sizeof(Heap));
  new->capac = 3;
  new->size = 0;
  new->heapArray = (heapElem *)malloc(sizeof(heapElem));
  
  new->heapArray[0].data
  
   return new;
}
