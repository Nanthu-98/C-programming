#include <stdio.h>

int main(){
    int number,sum,remaining,N;
    printf("Enter the number: ");
    scanf("%d",&number);
    N=number;
    while(number>0)
    {
        remaining=number%10;
        sum=sum+(remaining*remaining*remaining);
        number=number/10;
    }
    if(sum==N)
        printf("%d is an Armstrong number",N);
    else    
        printf("%d is not an Armstrong number",N);
    return 0;
}
