/*
What is a Union?

-> Union is a user defined data type which can hold different data types in a single variable.
-> The difference b/w structures and unions lies in thr fact that in structure, each member has it's own storge loaction, whereas members of a union uses a single shared memory location.
-> The single shared memory location is equal to the size of it's largest data member.
-> We can use it for better memory management.

Declaring an Accessing union members.

-> Like structures, we can access any member by using the member access operator(.) in union.
-> We use keywords union and struct to declare a union and structure respectively.
-> Syntax is very similar to that of structure.
*/

#include <stdio.h>
#include <string.h>

// struct student{
    union student{ 
    int id;
    int number;
    char grade;
    char name[30];
    };
    
int main()
{
    // struct student s, s1;
    union student s, s1;
    s.id = 1; //Gets corrupted because we used union which uses shared memory location, and hence only one thing at a time can be called.
    s1.id = 2;
    s.number = 96;
    s1.number = 95;
    s.grade = 'C'; 
    s1.grade = 'B';
    strcpy(s.name, "Adarsh Raj"); //Only these two will be correct once it has been written at last and machine will not be able to read the previous data.
    strcpy(s1.name, "Smith Maxy");

    printf("The student name %s with id %d has got the number %d out of 100, and hence got the grade %c \n", s.name, s.id, s.number, s.grade);
    printf("The student name %s with id %d has got the number %d out of 100, and hence got the grade %c ", s1.name, s1.id, s1.number, s1.grade);
    
    return 0;
}