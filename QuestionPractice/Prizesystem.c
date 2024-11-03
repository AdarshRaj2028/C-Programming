/*
EXERCISE 1:
Write code for giving prize to students according to their input,
 For Pass -> 1
 For Fail -> 0
 Subjects are Physics, Chemistry and Maths,
 The system should give different prize money for each output i.e,
 even if the student is pass in one subject he/she should get some prize money.
 You can distribute prize money according to you.
*/
 
 // Format 1

#include <stdio.h>

int main() {
  int p, c, m;
  printf("Write 0/1 according to your result, The system will give you the prize.\n -> 1 for Pass. \n -> 0 for Fail.\n");
  printf("Did you passed the Physics exam: ");
  scanf("%d", &p);
  if(p !=  0 && p != 1) 
  {
   goto label;
   }
  printf("Did you passed the Chemistry exam: ");
  scanf("%d", &c);
  printf("Did you passed the Mathematics exam: ");
  scanf("%d", &m);
  if( p == 1 && c == 1 &&  m == 1) 
  {
    printf("\aCongratulations!!! You won 100rs as your prize.");
  }
 else if(p == 0 &&  c == 0 && m == 0)
 {
    printf("\aSorry!!! You didn't win any prize.");
 }
 else if(p == 1 && (c == 0 && m == 0))
 {
    printf("\aCongratulations!!! You won 15rs as your prize.");
 }
 else if((p == 0 && m == 0) &&  c == 1 )
 {
    printf("\aCongratulations!!! You won 10rs as your prize.");
 }
 else if((p == 0 &&  c == 0) && m == 1)
 {
    printf("\aCongratulations!!! You won 20rs as your prize.");
 }
 else if((p == 1 &&  c == 1) && m == 0)
 {
    printf("\aCongratulations!!! You won 50rs as your prize.");
 }
 else if((p == 0)  && c == 1 && m == 1)
 {
    printf("\aCongratulations!!! You won 45rs as your prize.");
 }
 else if((p == 1 && m == 1) && c == 0)
 {
    printf("\aCongratulations!!! You won 55rs as your prize.");
 }
 else if ((p != 1  || c != 1 || m != 1) && (p != 0  || c != 0 || m != 0))
 {
   label:
    printf("\aERROR!!!, Please answer as 0 or 1 only!!!");
 }
  return 0;
}

// Format 2

// #include <stdio.h>

// int main() {
//     char p, c, m;
//   printf("Write y/n according to your result, The system will give you the prize. \n");
//   label1:
//   printf("\nDid you passed the Physics exam: ");
//   scanf(" %c", &p);
//   /*
// Use a space before %c in scanf to make it ignore any leftover spaces or newlines from previous input,
// so it only reads the next actual character you type.
//   */
//   if(p != 'y' &&  p != 'n')
//   {
//    goto label;
//   }
//   else
//   {
//   printf("Did you passed the Chemistry exam: ");
//   scanf(" %c", &c);
//   printf("Did you passed the Mathematics exam: ");
//   scanf(" %c", &m);
//   }
//   if (p == 'y' &&  c == 'y' && m == 'y') 
//   {
//     printf("Congratulations!!! You won 100rs as your prize.");
//   }
//  else if(p == 'n' &&  c == 'n' && m == 'n')
//  {
//     printf("Sorry!!! You didn't win any prize.");
//  }
//  else if(p == 'y' && (c == 'n' && m == 'n'))
//  {
//     printf("Congratulations!!! You won 15rs as your prize");
//  }
//  else if((p == 'n' && m == 'n') &&  c == 'y' )
//  {
//     printf("Congratulations!!! You won 15rs as your prize");
//  }
//  else if((p == 'n' &&  c == 'n') && m == 'y')
//  {
//     printf("Congratulations!!! You won 15rs as your prize");
//  }
//  else if((p == 'y' &&  c == 'y') && m == 'n')
//  {
//     printf("Congratulations!!! You won 50rs as your prize");
//  }
//  else if((p == 'n')  && c == 'y' && m == 'y')
//  {
//     printf("Congratulations!!! You won 45rs as your prize");
//  }
//  else if((p == 'y' && m == 'y') && c == 'n')
//  {
//     printf("Congratulations!!! You won 55rs as your prize");
//  }
//  else if((p != 'y' ||  c != 'y' || m != 'y') && (p != 'n' || c !=  'n' || m != 'n'))
//  {
//    label:
//     printf("ERROR!!!, Please answer as 'y' or 'n' only!!!\n");
//     goto label1;
//  }
//   return 0;
// }

