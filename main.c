#include<stdio.h>
#include <stdlib.h>
#include"matrix.h"

int main()
{
    MatrixCollection collection;
    int choice;
    do{
        printf("Operations:\n");
        printf("1 - Create matrix\n");
        printf("2 - Display matrix\n");
        printf("3 - Add matrices\n");
        printf("4 - Subtract matrices\n");
        printf("5 - Multiply matrices\n");
        printf("6 - Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createMatrix(&collection);
                break;
            case 2:
                displayMatrix(&collection);
                break;
            case 3:
                addMatrices(&collection);
                break;
            case 4:
                subtractMatrices(&collection);
                break;
            case 5:
                multiplyMatrices(&collection);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice != 6);

    return 0;
}
    