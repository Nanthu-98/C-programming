#include <stdio.h>
int main(){
    int num,fnum,snum,sum;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Fibonacci series till %d is: ",num);
    fnum=0,snum=1;
    do{
        printf("%d ",snum);
        sum=fnum+snum;
        fnum=snum;
        snum=sum;  
   }while(sum<=num);
    return 0;
}
