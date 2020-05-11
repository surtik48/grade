#include<stdio.h>
void main()
{float mark;// variable to store mark obtained

printf("Enter mark:");
scanf("%f",&mark);  // to get the marks
if(mark>=85)
printf("Grade A");
else if(mark>=70)
printf("Grade B");
else if(mark>=55)
printf("Grade C");
else if(mark>=40)
printf("Grade D");
else
printf("Grade F");
}
