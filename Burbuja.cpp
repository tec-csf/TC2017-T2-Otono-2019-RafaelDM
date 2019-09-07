//Rafael Díaz Medina A01024592
//+
#include <iostream>
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
using namespace std;


class Ordenador{
public:
void Intercambia(int *arrj, int *arrjU);
virtual void Burbuja(int arr[], int size);
};
void Ordenador::Intercambia(int *arrj, int *arrjU){
int temporal = *arrj; 
    *arrj = *arrjU; 
    *arrjU = temporal; 
}

void Ordenador::Burbuja(int arr[], int size){ 
    int i, j; 
    size=size-1;
    for(i=0; i<size; i++){
        for(j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
              Intercambia(&arr[j], &arr[j+1]); 
            }
        }
        for(int i=0; i<size; i++){
            arr[i] ;
    }
    }
}
int getMilisegundos(clock_t c)
{
    int tiempo=0;
    tiempo = (int)((c/(double)CLOCKS_PER_SEC)*1000) ;
return tiempo;
}

int main(){ 

    int t1,t2,tiempo;

	int tamano = 1000, MAXIMO = 1000;

	 int arr[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = rand() % MAXIMO;
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }
    int size = sizeof(arr)/sizeof(arr[0]); 

    t1=clock();
    Ordenador met;
    met.Burbuja((int *)&arr, size);
    t2=clock();
  tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);

    return 0;
   
} 