#include <stdio.h>
#include <ctype.h>

int main() {

char number;
printf("Enter a number :");
scanf("%c", &number);

//grade = toupper(grade); 

switch (number){
    case '1':
    printf("monday! ");
    break;;

      case '2':
    printf("tuesday!");
        break;

      case '3':
    printf("wenesday!");
        break;

      case '4':
    printf("thursday!");
        break;

      case '5':
    printf("friday!");
        break;

      case '6':
    printf("saturday!");
        break;

      case '7':
    printf("sunday!");
        break;

      default:
    printf("Invalid Entry");
    
}
    return 0;
}