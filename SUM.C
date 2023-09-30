#include<stdio.h>
#include<conio.h>
void main(){
   int i,j,matrix[3][3],rowSum,diagonalSum,colSum,secondDiagonalSum;
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
   printf("Row sums:\n");
   for(i=0;i<3;i++){
      rowSum=0;
      for(j=0;j<3;j++){
	 rowSum=rowSum+matrix[i][j];
      }
      printf("Row %d: %d\n",i,rowSum);
   }
   printf("Diagonal sums:\n");
   diagonalSum=0;
   secondDiagonalSum=0;
   for(i=0;i<3;i++){
      diagonalSum=diagonalSum+matrix[i][i];
      secondDiagonalSum=secondDiagonalSum+matrix[i][j-1-i];
   }
   printf("Diagonal sum: %d\n",diagonalSum);
   printf("Second diagonal sum: %d\n",secondDiagonalSum);
   printf("Coloumn sums:\n");
   for(j=0;j<3;j++){
      colSum=0;
      for(i=0;i<3;i++){
	 colSum=colSum+matrix[i][j];
      }
      printf("Coloumn %d: %d\n",j,colSum);
   }
   getch();
}

