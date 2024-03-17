#include <stdio.h>
#include <math.h>

void main(){
    int Posinb,tt,count=0;
    printf("Plase enter a positive number ");
    scanf("%d",&Posinb);

    // for (int i=3;i<Posinb;i+=1){
    //     if (i==4){
    //         continue;
    //     }
    //     printf("%d\n",i);
    //     tt+=i;
    // }
    // printf("Summation %d",tt);

    
    int sum;
    while (count<=Posinb)
    {       
        tt=3*pow(2,count);
        sum+=tt;     
        count+=1;
    }
    printf("Summation: %d\n",sum);
    

    
    



   
}