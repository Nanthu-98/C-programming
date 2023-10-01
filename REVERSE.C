#include <stdio.h>

int main(){
    int num,reversednum,rem,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    reversednum=num;
    while(num>0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(sum==reversednum)
        printf("%d is a Palindrome number",reversednum);
    else    
        printf("%d is not an palindrome number",reversednum);
    return 0;
}
