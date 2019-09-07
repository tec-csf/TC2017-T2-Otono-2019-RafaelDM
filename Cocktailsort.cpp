#include "time.h"
#include <bits/stdc++.h> 
#include <stdio.h>
#include <ctime>
using namespace std; 

void CocktailSort(int a[], int n) 
{ 
	bool swapped = true; 
	int start = 0; 
	int end = n - 1; 

	while (swapped) { 
		
		swapped = false; 

		for (int i = start; i < end; ++i) { 
			if (a[i] > a[i + 1]) { 
				swap(a[i], a[i + 1]); 
				swapped = true; 
			} 
		} 

		if (!swapped) 
			break; 

		swapped = false; 

		--end; 

		for (int i = end - 1; i >= start; --i) { 
			if (a[i] > a[i + 1]) { 
				swap(a[i], a[i + 1]); 
				swapped = true; 
			} 
		} 

		++start; 
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
	
	int tamano = 1000, MAXIMO = 100000;

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
	CocktailSort(arr, n);
    t2=clock();
	
	tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
	
	return 0; 
} 
