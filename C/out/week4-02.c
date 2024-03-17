#include <stdio.h>
#include <math.h>

void main(){
    // int i,sum=1,Posinb;
    float Posinb=0,sum=0,i=0,n=0;
    printf("Plase enter a positive number> ");
    scanf("%f",&Posinb);

    // for (i=1;i<=Posinb;i++){
    //     sum*=i;
    //     printf("%d\n",i);  
    // }
    // printf("Factorial of %d (%d!) : %d",Posinb,Posinb,sum);

    
    while (i<=Posinb){
        n+=i;
        sum=n/i;
        printf("%f\n",sum); 
        i++;
    }
    printf("Averange if 1-%.0f: %.2f",i,sum);


    
    
    
    
    
    
    
    
}