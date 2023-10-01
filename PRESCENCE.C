#include <stdio.h>
int main(){
    int num,digit,found,lastdigit;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the digit for find: ");
    scanf("%d",&digit);
    do{
        lastdigit=num%10;
        if(lastdigit==digit){
        found++;
        }num=num/10;
    }while(num!=0);
    if(found)
        printf("The digit %d is present in the entered number\n",digit);
    else
        printf("The digit %d is not present in the entered number\n",digit);
    return 0;
}
