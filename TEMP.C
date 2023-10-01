#include <stdio.h>
int main(){
    char unit,choice;
    float temp,c,f;
    do{
        printf("Enter the Temperature: ");
        scanf("%f",&temp);
        printf("Enter unit C or F: ");
        scanf(" %c",&unit);
        if (unit=='c'){ 
            f=(temp*9/5)+32;
            printf("%.2f celsius is %.2f fahrenheit\n",temp,f);
        }    
        else if(unit=='f'||unit=='F'){
            c=(temp-32)*5/9;
            printf("%.2f fahrenheit is %.2f celsius\n",temp,c);
        }    
        else{ 
            printf("Invalid Input!\n");
        }    
        printf("Another Temperature Conversion Y or y: ");
        scanf("%c",&choice);
    } 
    while(choice=='Y'||choice=='y');
    return 0;
}
