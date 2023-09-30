#include<stdio.h>
#include<conio.h>
int main(){
   char str1[50],str2[50];
   int i,len1,len2;
   clrscr();
   printf("Enter the first string: ");
   gets(str1);
   printf("Enter the second string: ");
   gets(str2);
   for(len1=0;str1[len1]!='\0';len1++);
   str1[len1]=' ';
   for(i=0;str2[i]!='\0';i++){
       str1[len1+i+1]=str2[i];
   }
   str1[len1+i+1]='\0';
   printf("joined string: %s\n",str1);
   getch();
}