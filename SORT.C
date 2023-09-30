#include<stdio.h>
#include<conio.h>
void main(){
   char ch,str[27];
   int i,j,length;
   clrscr();
   printf("Enter the string: ");
   scanf("%s",&str);
   for(length=0;str[length]!=0;length++);
   for(i=0;i<length-1;i++){
	for(j=i+1;j<length;j++){
	     if(str[i]>str[j]){
		 ch=str[i];
		 str[i]=str[j];
		 str[j]=ch;
	     }
	}
   }
   printf("Sorted string:%s ",str);
   getch();
}