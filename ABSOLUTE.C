#include <stdio.h>

int main()
{
   int num,absvalue;
   printf("Enter an integer:");
   scanf("%d",&num);
   absvalue=(num<0)? -num:num;
   printf("The absolute value of %d is %d",num,absvalue);
   
   return 0;
}

