#include <stdio.h>

float calc(float n1, float n2, char op);

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
        result = calc(n1, n2, op);
        printf("result = %.3f\n", result);
    }while(1);
    
    return 0;
}

float calc(float n1, float n2, char op){
    if(op == '+')
        return n1 + n2;
    else if(op == '-')
        return n1 - n2;
    else if(op == '/')
        return n1 / n2;
    else if(op == '*')
        return n1 * n2;
    else
        printf("Error: Incorrect operator.\n");
    return 0;
}