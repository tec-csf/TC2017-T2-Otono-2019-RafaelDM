
#include<iostream> 
#include "time.h"
#include <bits/stdc++.h> 
#include <stdio.h>
#include <ctime>
using namespace std; 

int getMax(int arr[], int n) 
{ 
	int mx = arr[0]; 
	for (int i = 1; i < n; i++) 
		if (arr[i] > mx) 
			mx = arr[i]; 
	return mx; 
} 

void countSort(int arr[], int n, int exp) 
{ 
	int output[n]; 
	int i, count[10] = {0}; 

	for (i = 0; i < n; i++) 
		count[ (arr[i]/exp)%10 ]++; 

	for (i = 1; i < 10; i++) 
		count[i] += count[i - 1]; 

	for (i = n - 1; i >= 0; i--) 
	{ 
		output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
		count[ (arr[i]/exp)%10 ]--; 
	} 

	for (i = 0; i < n; i++) 
		arr[i] = output[i]; 
} 

 
void radixsort(int arr[], int n) 
{ 
	
	int m = getMax(arr, n); 

	
	for (int exp = 1; m/exp > 0; exp *= 10) 
		countSort(arr, n, exp); 
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
		radixsort(arr, n);  
    t2=clock();
	tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);

	return 0; 
} 
