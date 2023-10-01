#include <stdio.h>

int main (void)
{
    int mark ;
    
    printf("Enter The Mark : ");
    scanf("%d", &mark);
    
    if( mark <= 100  && mark >= 90)
        printf("%d Mark Is 'A' Grade.", mark);
        
    else if( mark <= 89 && mark >=70)
        printf("%d Mark Is 'B' Grade.", mark);
    
    else if( mark <= 69 && mark >= 50)
        printf("%d Mark Is 'C' Grade.", mark);
    
    else if( mark <= 49 && mark >= 35)
        printf("%d Mark Is 'D' Grade.", mark);
        
    else if( mark <= 34 && mark >= 0 )
        printf("%d Mark Is Fail.", mark);
    
    else 
        printf("Unvalid Input!!!!");
        
   return 0;
}
