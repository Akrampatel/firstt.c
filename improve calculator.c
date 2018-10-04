/* This code checks IELTS exam score if person score less than 5 then system will print 'fail' otherwise 'pass' with final band result.*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    double number1;
    double number2;
    char operator;

    printf("Please enter first number: ");
    scanf("%lf", &number1);
    printf("Please enter operator: ");
    scanf(" %c", &operator);
    printf("Please enter second number: ");
    scanf ("%lf", &number2);
    printf("\n");

    if (operator == '+'){
        printf("Answer %f", number1 + number2);
    } else if(operator == '-') {
        printf("Answer %f", number1 - number2);
    } else if(operator == '/'){
        printf("Answer %f", number1 / number2);
    } else if(operator == '*'){
        printf("Answer %f", number1 * number2);
    } else {
        printf("Error: The operator you have entered is invalid. \nPlease enter one of these operator  +,  -,  /,  * ");
    }

    return 0;
}




