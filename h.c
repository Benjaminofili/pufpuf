#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main() {

char operator;
printf("Choose an operator ['+','-','*','/','m','^','r']: ");
scanf("%c", &operator);

double num1, num2;

printf("Enter first number:");
scanf("%lf", &num1);

printf("Enter second number:");
scanf("%lf", &num2);
double result;

switch(operator) {
    case'+':
     result = num1 + num2;
     break;

      case'-':
     result = num1 - num2;
     break;

      case'*':
     result = num1 * num2;
     break;
      
      case'/':
     result = num1 / num2;
     break;

      case'm':
     result = fmod(num1,num2);
     break;

      case'^':
     result = pow(num1,num2);
     break;

     case'r':
     result = sqrt(num1);
     break;

     case's':
     result = num1 * num1;
     break;

    default:
     printf("invalid operator");
    
   }

printf ("%.1lf", result);

return 0;
}