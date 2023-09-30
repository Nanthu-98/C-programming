#include<stdio.h>
#include<conio.h>
void main(){
   int i,j;
   int matrix[3][3];
   clrscr();
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
	 printf("Enter the element: ");
	 scanf("%d",&matrix[i][j]);
      }
   }
   printf("Matrix:\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++){
	 printf("%d ",matrix[i][j]);
      }
      printf("\n");
   }
   getch();
}
