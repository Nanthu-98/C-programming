#include <stdio.h>

int main()
{
    int N,sum;
    float average;  
    printf("Enter the value N:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
       sum+=i;
       printf("Sum of %d numbers is %d\n",N,sum);
       average=sum/N;
       printf("Average of %d numbers is %f\n",N,average);
    return 0;
}
