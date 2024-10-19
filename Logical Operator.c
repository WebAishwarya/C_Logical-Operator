/*
    3.Logical Operator Usage
    Problem :   Write a program that takes three boolean values as input and demonstrates the usage of logical operators 
                (&&,||,!). 
                Evaluate and display the results of logical AND, OR, and NOT operations on these inputs.
*/

#include<stdio.h>

int main()
{
    printf("PROGRAM FOR PERFORMING LOGICAL OPETATORS\n");
    
    int a, b, c;
    printf("\nEnter the first number a : ");
    scanf("%d", &a);
    printf("Enter the second number b : ");
    scanf("%d", &b);
    printf("Enter the third number c : ");
    scanf("%d", &c);
    
    printf("\nLogical AND (&&) :\n");
    printf("a && b = %d\n", a && b);
    printf("b && c = %d\n", b && c);
    printf("a && b && c = %d\n", a && b && c);
    
    printf("\nLogical OR (||) :\n");
    printf("a || b = %d\n", a || b);
    printf("b || c = %d\n", b || c);
    printf("a || b || c = %d\n", a || b || c);

    printf("\nLogical NOT (!) :\n");
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);
    printf("!c = %d\n", !c);

    return 0;
}
