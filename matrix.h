#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    char name[20];
    int rows;
    int cols;
    int **data;
} Matrix;

typedef struct {
    Matrix *matrices;
    int count;
} MatrixCollection;

void createMatrix(MatrixCollection *collection);
void displayMatrix(MatrixCollection *collection);
void addMatrices(MatrixCollection *collection);
void subtractMatrices(MatrixCollection *collection);
void multiplyMatrices(MatrixCollection *collection);

#endif