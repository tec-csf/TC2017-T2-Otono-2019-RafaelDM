#include <iostream>
#include <bits/stdc++.h> 
#include "time.h"
#include <stdio.h>
#include <ctime>

using namespace std; 

struct Node 
{ 
	int key; 
	struct Node *left, *right; 
}; 

struct Node *newNode(int item) 
{ 
	struct Node *temp = new Node; 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 


void storeSorted(Node *root, int arr[], int &i) 
{ 
	if (root != NULL) 
	{ 
		storeSorted(root->left, arr, i); 
		arr[i++] = root->key; 
		storeSorted(root->right, arr, i); 
	} 
} 


Node* insert(Node* node, int key) 
{ 

	if (node == NULL) return newNode(key); 

	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	
	return node; 
} 


void treeSort(int arr[], int n) 
{ 
	struct Node *root = NULL; 

	root = insert(root, arr[0]); 
	for (int i=1; i<n; i++) 
		insert(root, arr[i]); 

	
	int i = 0; 
	storeSorted(root, arr, i); 
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

	int tamano = 1000, MAXIMO = 1000;

	 int arr[ tamano ] = { 0 };
   int i;
   srand( time( 0 ) );
   for ( i = 0; i < tamano; ++i )
      arr[ i ] = rand() % MAXIMO;
	for ( i = 0; i < tamano; ++i ){
     arr[ i ];

   }
    int n= sizeof(arr)/sizeof(arr[0]); 

    t1=clock();
  	treeSort(arr, n);
    t2=clock();


    tiempo=getMilisegundos(t2-t1);
 	printf(" Tiempo = [ %d ] ", tiempo); 
	return 0; 
} 
