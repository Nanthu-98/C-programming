#include <stdio.h>
int main(){
    int num,fac,number;
    printf("Enter a number:");
    scanf("%d",&num);
    for(fac=1;fac<=num;fac++){
        if(num%fac==0)
        number++;
    }    
    if(number==2)    
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}
