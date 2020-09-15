/*
   Author: Brian Pereira
   Dated: 15th Septemnber, 2020
   Purpose: Calculate a student report card
*/

#include <stdio.h>

void main()
{
  char reply, roll_no;
  char name[30], subject[30];
   
  
  printf("Student report card.\n");
  do
  {
    fflush(stdin);   // Flushing the stdin (keyboard) because scanf stores the value between loops.
    printf("Get student details: ");
    
    fflush(stdin);
    printf("\nEnter roll number: ");
    scanf("%c", &roll_no);
    
    fflush(stdin);
    printf("\nEnter name: ");
    scanf("%s", &name); 
    
    fflush(stdin);
    printf("\nEnter Subject: ");
    scanf("%s, &subject");

    fflush(stdin);
    printf("Do you want to continue: y or n: ? ");
    scanf("%c", &reply);
  }
  while(reply == 'y');
}