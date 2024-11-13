#include <stdio.h>

int main(){
    float n1, n2, result;
    char op;
    printf("Instructions: Enter Q when asked for operator to quit.\n");
    do{
        printf("Enter number 1: ");
        scanf(" %f", &n1);
        printf("Enter an operator (+, -, /, *): ");
        scanf(" %c", &op);
        if(op == 'Q'){
            printf("Thanks for using our calculator.\n");
            break;
        }
        else if(op != '+' && op != '-' && op != '/' && op != '*'){
            printf("Incorrect operator.\n");
            continue;
        }
        printf("Enter number 2: ");
        scanf(" %f", &n2);
    }while(1);
    
    return 0;
}