#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

    void createMatrix(MatrixCollection *collection){
        int number_of_matrices = 2;
        //printf("Enter the number of matrices to create: ");
        //scanf("%d", &number_of_matrices);

        collection->matrices = malloc(number_of_matrices * sizeof(Matrix));
        for (int i = 0; i < number_of_matrices; i++) {
            printf("Enter the name of the matrix %d:", i + 1);
            scanf(" %[^\n]", (*(collection->matrices + i)).name);
            printf("Enter the number of rows for matrix %d : ", i + 1);
            scanf("%d", &((*(collection->matrices + i)).rows));
            printf("Enter the number of columns for matrix %d : ", i + 1);
            scanf("%d", &((*(collection->matrices + i)).cols));
            
            (*(collection->matrices + i)).data = malloc((*(collection->matrices + i)).rows * sizeof(int*));
            for (int j = 0; j < (*(collection->matrices + i)).rows; j++) {
                *((*(collection->matrices + i)).data + j) = malloc((*(collection->matrices + i)).cols * sizeof(int));
                printf("Enter the elements of matrix %d row %d : ", i, j + 1);
                for (int k = 0; k < (*(collection->matrices + i)).cols; k++) {
                    scanf("%d", *((*(collection->matrices + i)).data + j) + k);
                }
            }

        }
    }

    void displayMatrix(MatrixCollection *collection){
        int number_of_matrices = 2;
        for (int i = 0; i < number_of_matrices; i++) {
            printf("Matrix %d (%s):\n",i + 1, (*(collection->matrices + i)).name);
            for (int j = 0; j < (*(collection->matrices + i)).rows; j++){
                for (int k = 0; k < (*(collection->matrices + i)).cols; k++){
                    printf("%d ", *(*((*(collection->matrices + i)).data + j)+k));
                }
                printf("\n");
            }
        }
    }

void addMatrices(MatrixCollection *collection){

}

void subtractMatrices(MatrixCollection *collection){

}

void multiplyMatrices(MatrixCollection *collection){

}

    
    void my_exit(void){
        //free space when exiting
    }


    
