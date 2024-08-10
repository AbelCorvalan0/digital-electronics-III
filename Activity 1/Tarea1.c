#include <stdio.h>

void main(){

    // Define matrix.
    int matrix[]= { 3, 4, 1, 1 };
    // Define accumulator variable.
    int accumulator= 0;
    // Matrix length calculation.
    int size= sizeof(matrix)/sizeof(matrix[0]);

    // Add whole matrix elements.
    for(int i=0; i<size; i++){
        accumulator+= matrix[i];
    }
    
    // Print accumulator value.
    printf("The accumulated value is %d", accumulator);

    return;
}

