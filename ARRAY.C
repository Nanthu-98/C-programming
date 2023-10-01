
#include <stdio.h>
int main()
{    
    int N,i,min,max;
    printf("Enter the number of elements:");
    scanf("%d",&N);
    printf("Enter %d elements \n",N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    i=1;
    while(i<N){    
        if(arr[i]>max){
            max=arr[i];
        }    
        if(arr[i]<min){
            min=arr[i];
        }    
        i++;
    }
    printf("The largest number of the array is %d\n",max); 
    printf("The smallest number of the array is %d\n",min); 
    return 0;
-}
