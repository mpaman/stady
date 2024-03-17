#include <stdio.h>
#include <math.h>

void main(){
    int pb=0,i=1,count=0;
    printf("Please enter a positive number> ");
    scanf("%d",&pb);
    while (i<=pb-1)
    {
        i+=1;
        if (i%7==0){
            printf("%d\n",i);
            count+=1;
        }
    }
    printf("There are %d numbers of the range 1 - 20 that can be \nfactored by 7.",count);
    
        

        
    
    
    
    
    
    
}
