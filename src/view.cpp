#include <iostream>

int main(){

int *arr = new int[5];
for( int i = 0; i < 5; i++) arr[i] = i;

int *aux = arr;

aux[0] = 100;
arr[1] = 200;

printf("arr = ");
for (int i = 0; i < 5; i++) printf(" %i ", arr[i]);
printf("\naux = ");
for (int i = 0; i < 5; i++) printf(" %i ", aux[i]);
printf("\n");

delete[] arr;
return 0;

}
