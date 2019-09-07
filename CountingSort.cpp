#include <iostream>
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
#include<algorithm>
using namespace std;
int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<=size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max;
}
void countSort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1];     
   for(int i = 0; i<=max; i++)
      count[i] = 0;   
   for(int i = 1; i <=size; i++)
      count[array[i]]++;  
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1]; 
   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1;
   }
   for(int i = 1; i<=size; i++) {
      array[i] = output[i];
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

	int tamano = 100000, MAXIMO = 100000;

	 int arr[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = rand() % MAXIMO;
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }
    int n = sizeof(arr)/sizeof(arr[0]); 

    t1=clock();
    countSort(arr, n);
    t2=clock();


    tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
    return 0;


}

   