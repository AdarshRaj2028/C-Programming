/*
Write a program to do the following conversions.
1 -> Kilometres to Miles
2 -> Inches to Metres
3 -> Pounds to Kilograms
4 -> Centimetres to Inches
5 -> Inches to Foot
6 -> Celsius to Fahrenheit
*/

// My Own Approach.

#include <stdio.h>
#include <stdlib.h>

#define KM_TO_MILES 0.6213
#define INCHES_TO_METRES 0.0254
#define POUNDS_TO_KILOGRAMS 0.4535
#define CENTIMETRES_TO_INCHES 0.3937
#define INCHES_TO_FEET 0.0833

int main()
{
    int user_input, choice1;
    float user_input2, CtoF;
    do{
        printf("\n1 -> Kilometres to Miles\n2 -> Inches to Metres\n3 -> Pounds to Kilograms\n4 -> Centimetres to Inches\n5 -> Inches to Foot\n6 -> Celsius to Fahrenheit\n\nEnter the number whose conversion you want to see: ");
        scanf("%d", &user_input);
        if(user_input > 0 && user_input < 7){
            switch(user_input){
            case 1:
            printf("Enter the value in Kilometres: ");
            scanf("%f", &user_input2);
            printf("The value in Miles: %f\n", KM_TO_MILES * user_input2);
            break;

            case 2:
            printf("Enter the value in Inches: ");
            scanf("%f", &user_input2);
            printf("The value in Metres: %f\n", INCHES_TO_METRES * user_input2);
            break;

            case 3:
            printf("Enter the value in Pounds: ");
            scanf("%f", &user_input2);
            printf("The value in Kilograms: %f\n", POUNDS_TO_KILOGRAMS * user_input2);
            break;

            case 4:
            printf("Enter the value in Centimetres: ");
            scanf("%f", &user_input2);
            printf("The value in Inches: %f\n", CENTIMETRES_TO_INCHES * user_input2);
            break;

            case 5:
            printf("Enter the value in Inches: ");
            scanf("%f", &user_input2);
            printf("The value in Foots: %f\n", user_input2 * INCHES_TO_FEET);
            break;

            case 6:
            printf("Enter the value in Celsius: ");
            scanf("%f", &user_input2);
            CtoF = ((user_input2 * 9/5) + 32);
            printf("The value in Fahrenheit: %f\n", CtoF);
            break;
        }
        }
        else{
             printf("\n--> Please enter the number available above for respective conversion and try again!!!\n");
        }
        while(69){
             printf("\n-> Do you want to do another conversion?\n-> Type '1' for Yes.\n-> Type '0' for No.\n Enter your Decision: ");
             scanf("%d", &choice1);
            if(choice1 == 1){
                system("cls"); // Move the system("cls"); here
                break;
            }
            else if(choice1 == 0){
                printf("\nThank you for using the conversion program!!!\n");
                return 0;
            }
            else{
                printf("\n-> ERROR, Please enter the again number, 1 for Yes and 0 for No.\n");
            }
        }
    }while(1);
}  
  
// AI Approach By Using Functions.

// #include <stdio.h>

// // Define conversion factors as constants
// #define KM_TO_MILES 1.6093
// #define INCHES_TO_METRES 0.0254
// #define POUNDS_TO_KILOGRAMS 0.4535
// #define CENTIMETRES_TO_INCHES 0.3937
// #define INCHES_TO_FEET 0.0833
// #define CELSIUS_TO_FAHRENHEIT 1.8

// void print_menu() {
//     printf("\n1 -> Kilometres to Miles\n");
//     printf("2 -> Inches to Metres\n");
//     printf("3 -> Pounds to Kilograms\n");
//     printf("4 -> Centimetres to Inches\n");
//     printf("5 -> Inches to Foot\n");
//     printf("6 -> Celsius to Fahrenheit\n\n");
//     printf("Enter the number whose conversion you want to see: ");
// }

// void perform_conversion(int choice) {
//     float value;
//     switch (choice) {
//         case 1:
//             printf("Enter the value in Kilometres: ");
//             scanf("%f", &value);
//             printf("The value in Miles: %f\n", KM_TO_MILES * value);
//             break;
//         case 2:
//             printf("Enter the value in Inches: ");
//             scanf("%f", &value);
//             printf("The value in Metres: %f\n", INCHES_TO_METRES * value);
//             break;
//         case 3:
//             printf("Enter the value in Pounds: ");
//             scanf("%f", &value);
//             printf("The value in Kilograms: %f\n", POUNDS_TO_KILOGRAMS * value);
//             break;
//         case 4:
//             printf("Enter the value in Centimetres: ");
//             scanf("%f", &value);
//             printf("The value in Inches: %f\n", CENTIMETRES_TO_INCHES * value);
//             break;
//         case 5:
//             printf("Enter the value in Inches: ");
//             scanf("%f", &value);
//             printf("The value in Foot: %f\n", INCHES_TO_FEET * value);
//             break;
//         case 6:
//             printf("Enter the value in Celsius: ");
//             scanf("%f", &value);
//             printf("The value in Fahrenheit: %f\n", CELSIUS_TO_FAHRENHEIT * value + 32);
//             break;
//         default:
//             printf("-> Please enter the number available above for respective conversion!!!\n");
//     }
// }

// int main() {
//     int conversion_choice, repeat;
//     do {
//         print_menu();
//         scanf("%d", &conversion_choice);
//         if (conversion_choice > 0 && conversion_choice < 7) {
//             perform_conversion(conversion_choice);
//         } else {
//             printf("-> Please enter the number available above for respective conversion!!!\n");
//         }
//         printf("\nDo you want to do another conversion?\n-> Type '1' for Yes.\n-> Type '0' for No.\n Enter your Decision: ");
//         scanf("%d", &repeat);
//     } while (repeat == 1);
//     printf("\nThank you for using the conversion program!!!\n");
//     return 0;
// }
