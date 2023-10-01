#include <stdio.h>

int main(void)
{
   int num1,num2;
   char op;
   printf("Enter num1:");
   scanf("%d",&num1);
   printf("Enter num2:");
   scanf("%d",&num2);
   printf("Enter the operator:");
   scanf("%c\n",&op);
   
   switch(op)
   {
       case'+':
         printf("Sum: %d",num1+num2);
         break;
       case'-':
         printf("different: %d",num1-num2);
         break;
       case'*':
         printf("Product: %d",num1*num2);
         break;
       case'/':
         printf("Division: %d",num1/num2);
         break;
       default:
         printf("invalid operator!!!");
         break;
   }
   return 0;
}
