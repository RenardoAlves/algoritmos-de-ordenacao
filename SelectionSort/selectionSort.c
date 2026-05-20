#include <stdio.h>

#define SIZE 8

int main () {
    int data[SIZE] = {6,5,3,1,8,7,2,4};
    int target, temp, targetPos, swap = 0;

    printf("Original: ");
    for (int x = 0; x < SIZE; x++) {
        printf("[%d]  ", data[x]);
    }
    printf("\n");

    for (int j = 0; j < SIZE; j++) {
        target = data[j];
        for (int i = j; i < SIZE; i++) {
            if (data[i] < target) {
                target = data[i];
                targetPos = i;
                swap = 1;
            }
        }
        temp = data[j];
        data[j] = target;
        if (swap) {
            data[targetPos] = temp;
            swap = 0;
        }
        
        printf("Iteracao %d: ", j);
        for (int y = 0; y < SIZE; y++) {
            printf("[%d]  ", data[y]);
        }
        printf("\n");
    } 

    printf("Ordenado: ");
    for (int k = 0; k < SIZE; k++) {
        printf("[%d]  ", data[k]);
    }
    printf("\n");
}