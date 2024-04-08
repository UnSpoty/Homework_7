#include <stdio.h>
#include "includes.h"

int main() {
    int choice = 0;
    int num1, num2, result;
    do {
        printf("\nChose operation:\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Division\n");
        printf("5) Exit\n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nNum X: ");
                scanf("%d", &num1);
                printf("\nNum Y: ");
                scanf("%d", &num2);
                result = func_addition(num1, num2);
                printf("\nResult: %d\n", result);
                break;
            case 2:
                printf("\nNum X: ");
                scanf("%d", &num1);
                printf("\nNum Y: ");                           
                scanf("%d", &num2);       
                result = func_subtraction(num1, num2); 
                printf("\nResult: %d\n", result);
                break; 
            case 3:
                printf("\nNum X: ");
                scanf("%d", &num1);
                printf("\nNum Y: ");
                scanf("%d", &num2);       
                result = func_multiplication(num1, num2);
                printf("\nResult: %d\n", result);
                break;
            case 4:        
                printf("\nNum X: ");
                scanf("%d", &num1);
                printf("\nNum Y: ");                         
                scanf("%d", &num2);       
                result = func_division(num1, num2);
                printf("\nResult: %d\n", result);
                break; 
            case 5:
                printf("Exit.\n");
                break;
            default:
                printf("Wrong operation.\n");
        }
    } while (choice != 5);
    
    return 0;
}