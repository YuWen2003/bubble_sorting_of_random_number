#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int len){
    len = 20;
    int i, j;
    for(i = 0; i < len-1; i++){
        for(j = 0; j < len-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int a1[100];
    int a2[100];
    int a3[100];
    int a4[100];
    int a5[100];

    int arr[100];
    int len = 20;
    int num;
    int i;
    FILE *f2;

    srand(time(NULL));
    for (i = 0; i < 20; i++) {
        arr[i] = rand() % 100;
        a1[i] = arr[i];
    }

    printf("input: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    BubbleSort(arr, len);

    f2 = fopen("output.txt", "w");
    if(f2 == NULL){
        printf("error\n");
        return 1;
    }

    for (i = 0; i < 20; i++) {
        a3[i] = a1[i];
    }
    printf("\n");

    for(i = 0; i < len; i++){
        fprintf(f2, "%d ", a3[i]);
    }

    printf("output: ");
    for(i = 0; i < len; i++){
        fprintf(f2, "%d ", arr[i]);
        printf("%d ", arr[i]);
        a2[i] = arr[i];
    }
    printf("\n");

    fclose(f2);

    for (i = 0; i < 20; i++) {
        a4[i] = a2[i];
    }
    printf("\n");

    for (i = 0; i < 20; i++) {
        a5[i] = a3[i] + a4[i];
        printf("%d ", a5[i]);
    }
    printf("\n");



    f2 = fopen("output.txt", "w");
    if(f2 == NULL){
        printf("error\n");
        return 1;
    }

    for(i = 0; i < len; i++){
        fprintf(f2, "%d ", a3[i]);
    }
    fprintf(f2, "\n");
    for(i = 0; i < len; i++){
        fprintf(f2, "%d ", a4[i]);
    }
    fprintf(f2, "\n");
    for(i = 0; i < len; i++){
        fprintf(f2, "%d ", a5[i]);
    }

    fclose(f2);

    return 0;
}
