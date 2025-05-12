#include <stdio.h>
int main(){
    int user_Write;
    printf("  Arithmetic Table Generator \n ");
    printf(" Enter a number to generate tables: ");
    scanf("%d", &user_Write);
    printf("Addition Table of %d\n", user_Write);
    for (int i = 1; i <= 10; i++){
        printf("%d", user_Write);
        printf("+");
        printf("%d", i);  
        printf("=");
        printf("%d\n", user_Write + i); 
    }

    printf("Subtraction Table of %d\n", user_Write);
    for (int i = 1; i <= 10; i++){

        printf("%d", user_Write);
        printf("-");
        printf("%d", i);  
        printf("=");
        printf("%d\n", user_Write - i); 
    }

    printf("Multiplication Table of %d\n", user_Write);
    for (int i = 1; i <= 10; i++){

        printf("%d", user_Write);
        printf("*");
        printf("%d", i);  
        printf("=");
        printf("%d\n", user_Write * i); 
    }
    printf("Divide Table of %d\n", user_Write);
    for (int i = 1; i <= 10; i++){
        printf("%d", user_Write);
        printf("/");
        printf("%d", i);  
        printf("=");
        printf("%d\n", user_Write / i); 
    }
    return 0;
}