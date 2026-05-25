#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define BUCKETS 10

void bucketSort (int arr[], int n) {
    int bucket[BUCKETS][SIZE];
    int count[BUCKETS] = {0};

    for (int i = 0; i < n; i++) {
        int index = arr[i] / 10;
        bucket[index][count[index]] = arr[i];
        count[index]++;
    }

    for (int i = 0; i < BUCKETS; i++) {
        for (int j = 1; j< count[i]; j++) {
            int key = bucket[i][j];
            int k = j - 1;

            while (k >= 0 && bucket[i][k] > key) {
                bucket[i][k+1] = bucket[i][k];
                k--;
            }

            bucket[i][k+1] = key;
        }
    }

    int index = 0;

    for (int i = 0; i < BUCKETS; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index++] = bucket[i][j];
        }
    }
}

int main () {
    int arr[SIZE] = {78, 17, 39, 26, 72, 94, 21, 12, 23, 68};

    printf("Antes: ");

    for (int i = 0; i < SIZE; i++) {
        printf("[%d]  ", arr[i]);
    }

    bucketSort(arr, SIZE);

    printf("\nDepois: ");

    for (int i = 0; i < SIZE; i++) {
        printf("[%d]  ", arr[i]);
    }

    return 0;
}