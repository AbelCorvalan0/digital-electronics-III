#include <stdio.h>

void main(){

    int matrix[]= { 3, 4, 1, 1 };
    int accumulator= 0;

    int size= sizeof(matrix)/sizeof(matrix[0]);

    for(int i=0; i<size; i++){
        accumulator+= matrix[i];
    }
    
    printf("The accumulated value is %d", accumulator);

    return;
}

