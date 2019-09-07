
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 
 
int main() 
{ 
	time_t now;
	time_t fin;
	double tiemp;

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

    time(&now);
	selectionSort(arr, n); 
	time(&fin);
	

	
	printf(" Tiemp = [ %d ] ", tiemp);

	
	return 0; 
} 
