#include<stdio.h>
#include<conio.h>
int main(){
   int n,a[50],N,i,position;
   clrscr();
   printf("Enter the number of elements in the array: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("Enter the element arr[%d]: ",i);
       scanf("%d",&a[i]);
   }
   printf("Original array:{ ",n);
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   printf("}\nEnter the position for deleting element in the array: ");
   scanf("%d",&position);
   for(i=position-1;i<=n;i++){
       a[i]=a[i+1];
   }
   n--;
   printf("Updated array:{ ",n);
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   printf("}");
   getch();
}
