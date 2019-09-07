#include <iostream>
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
using namespace std; 
int shellSort(int arr[], int n) 
{ 

	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 

		for (int i = gap; i < n; i += 1) 
		{ 
		
			int temp = arr[i]; 

			
			int j;			 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap]; 

			arr[j] = temp; 
		} 
	} 
	return 0; 
} 

int getMilisegundos(clock_t c)
{
    int tiempo=0;
    tiempo = (int)((c/(double)CLOCKS_PER_SEC)*1000) ;
return tiempo;
}

int main() 
{ 
	 int t1,t2,tiempo;

	int tamano = 10000, MAXIMO = 10000;

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
    
	shellSort(arr, n); 
	t2=clock();

		tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
	return 0; 
} 
