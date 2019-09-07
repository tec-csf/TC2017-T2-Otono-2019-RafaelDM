#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
#include <iostream> 
using namespace std; 


void heapify(int arr[], int n, int i) 
{ 
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	if (largest != i) { 
		swap(arr[i], arr[largest]); 

		heapify(arr, n, largest); 
	} 
} 

void heapSort(int arr[], int n) 
{ 

	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	for (int i = n - 1; i >= 0; i--) { 

		swap(arr[0], arr[i]); 

		heapify(arr, i, 0); 
	} 
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
	const int tamano = 100000, MAXIMO = 100000;

	
	 int arr[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = rand() % MAXIMO;
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }

	int n = sizeof(arr) / sizeof(arr[0]); 

	t1=clock();
	heapSort(arr, n); 
	t2=clock();
	tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
	
} 
