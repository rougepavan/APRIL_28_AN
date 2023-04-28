#include <stdio.h>
void main() 
{
   int year;
   printf("Enter a ,year: ");
   scanf("%d",&year);
   if (year % 400 == 0) {
      printf("%d",year);
   }
   else if (year % 100 == 0) {
      printf("%d",year);
   }
   else if (year % 4 == 0) {
      printf("%d",year);
   }
   else {
      printf("%d",year);
   }
    getch();
    
}
