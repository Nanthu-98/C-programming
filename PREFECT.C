#include <stdio.h>
int main(){
    int num,fac,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    for(fac=1;fac<num;fac++){
        if(num%fac==0)
        sum=sum+fac;
    }    
    if(sum==num)    
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);
    return 0;
}
