#include <iostream>
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
 
// Function to sort arr[] of size n using bucket sort
void bucketSort(float arr[], int n)
{
    // 1) Create n empty buckets
    vector<float> b[n];
    
    // 2) Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i]; // Index in bucket
       b[bi].push_back(arr[i]);
    }
 
    // 3) Sort individual buckets
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());
 
    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          arr[index++] = b[i][j];
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

	int tamano = 10;
	float MAXIMO = 100;

	 float arr[ tamano ] = { 0 };
   int i;
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/MAXIMO));
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }
    int n = sizeof(arr)/sizeof(arr[0]);
	t1=clock();
    bucketSort(arr, n);
	t2=clock();
	tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo);
    return 0;
}
