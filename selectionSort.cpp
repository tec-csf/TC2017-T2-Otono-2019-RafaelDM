//Rafael Díaz Medina A01024592
#include <iostream>
#include "time.h"
#include <bits/stdc++.h> 
#include <stdio.h>
#include <ctime>
using namespace std;

class Ordenador{
public:
void Intercambia(int *arrj, int *arrjU);
virtual void Selection(int arr[], int size);
};
void Ordenador::Intercambia(int *arrj, int *arrjU){
int temporal = *arrj; 
    *arrj = *arrjU; 
    *arrjU = temporal; 
}
void Ordenador::Selection(int arr[], int size){
    int i,j,min;
    for(i=0;i<size; i++){
        min=i;
        for(j=i+1; j <size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        Intercambia(&arr[i], &arr[min]); 
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
	const int tamano = 1000, MAXIMO = 1000;
	 int arr[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = rand() % MAXIMO;
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }
   
    int size = *(&arr + 1) - arr; 

    
    Ordenador met;
    t1=clock();
    met.Selection((int *)&arr, size);
	t2=clock();
	
	tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
    return 0;
} 