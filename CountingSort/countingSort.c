#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main()
{
    int data[SIZE] = {4,2,7,1,7,2};
    int maxData = 0;
   
    for (int i = 0; i < SIZE; i++){
        if (data [i] > maxData){
            maxData = data[i];
        }
    }
   
    //(Funciona apenas em C99 e posterior)
    //int freq[maxData+1]; 
    
    int *freq = malloc((maxData+1) * sizeof(int));
   
    for (int i = 0; i <= maxData; i++) {
        freq[i] = 0;
    }
   
    for (int i = 0; i < SIZE; i++) {
        freq[data[i]]++;
    }
   
    for (int x = 0; x <= maxData; x++) {
        while (freq[x] > 0) {
            printf("[%d] ", x);
            freq[x]--;
        }
    }

    return 0;
}