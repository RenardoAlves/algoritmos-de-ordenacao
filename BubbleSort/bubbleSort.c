#include <stdio.h>

#define SIZE 8

int main()
{
    int data[SIZE] = {6,5,3,1,8,7,2,4};
    int temp;
   
    printf("Original: ");
    for (int z = 0; z < SIZE; z++){
        printf("[%d]  ", data[z]);
    }
    printf("\n");
   
    for (int k = 0; k < SIZE; k++){
        for (int i = 0; i < SIZE - 1; i++) {
            if (data[i] > data [i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
        printf("Iteracao %d: ", k);
        for (int x = 0; x < SIZE; x++) {
                printf("[%d]  ", data[x]);
            }
        printf("\n");
    }
    printf("Totalmente ordenado: ");
    for (int j = 0; j < SIZE; j++) {
        printf("[%d]  ", data[j]);
    }
}