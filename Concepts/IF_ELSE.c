// Basic vote system
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d.\n", age);
  if (age>=18 && age<=119){
 printf("You can vote.");
  }
  else if(age>=10 && age<=17)
  {
printf("You can vote for kids.");
  }
  else if(age>=120)
  {
printf("You don't even exist, how will you vote?");
  }
  else if(age>=3 && age<=9)
  {
printf("You can vote for babies.");
  }
  else{
    printf("You can't vote.");
  }
  return 0;
}