#include <stdio.h>
int main() {
 int age;
    printf("Enter your age :");
    scanf("%d",&age);

if (age > 120 || age <= 0 ){
    printf("invalid age");
}
/*
else if (age = 0){
printf("invalid age");
}
*/

else if (age >= 18){
    printf("you're Elegible to vote");
}
 else
 {
    printf("you're not Elegible to vote");
}
    return 0;
}