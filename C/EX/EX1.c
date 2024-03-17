#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Pleae enter a positive integer nimber : ");
    scanf("%d",&n);
    if(n>0){
        printf("OK, %d is a positive integer number.\n",n);
        if(n%5==0){
            printf("%d has %d as a factor",n,n/5);
        }
    }
    else{
        printf("Sorry, %d is a zero/negative integer number.\n",n);

    }

   
    
    int n;
    float x ;
    printf("Please enter a perimeter of a regular pentagon: ");
    scanf("%d",&n);
    if(n>0){
        printf("OK, %d is a perimeter.\n",n);
        if(n%5==0){
            x=n/5;
            printf("%d has %.0f as side",n,x);
            printf("The area of the regular pentagon is %.3f.",1.0/4.0*sqrt(5*(5+2*sqrt(5)))*x*x);
        }
        else{
            printf("But it may not suit this calculation. ");
        }
    }
    else{
        printf("Sorry, %d is a  perimeter.\n",n);

    }

    float p,i,n,m,tt,P;
    printf("Please enter the purchase price> ");
    scanf("%f",&p);
    printf("Please enter the annual interest rate> ");
    scanf("%f",&m);
    printf("Please enter the total number of payments> ");
    scanf("%f",&n);
    printf("******************************\n");
    P=p-500;
    i=1.0/12.0*m;
    tt=i*P/(1.0-pow(1+i,-n));
    printf("The amount borrowed: %.2f\n",P);
    printf("The monthly payment: %.2f",tt);

    
    
}