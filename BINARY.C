#include <stdio.h>
int main(){
    long dec,bin,base=1;
    printf("Enter the binary number: ");
    scanf("%ld",&bin);
    while(bin>0){
        dec=dec+(bin%10)*base;
        bin=bin/10;
        base=base*2;
    }
    printf("Binary to decimal convesion :%ld",dec);
    return 0;
}
