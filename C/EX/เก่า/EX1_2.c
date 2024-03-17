#include<stdio.h>
void main(){

    int a,b,c,d;
    printf("Please enter scores from the judges (a-b-c-d):");
    scanf("%d-%d-%d-%d",&a,&b,&c,&d);
    int max=a;
    int min=a;
    float sum;
    if(b>max){
        max=b;
    }
    else if(b<min){
        min=b;
    }
    if(c>max){
        max=c;
    }
    else if(c<min){
        min=c;
    }
    if(d>max){
        max=d;
    }
    else if(d<min){
        min=d;
    }
    sum=(a+b+c+d-max-min)/2.0;
    printf("Max: %d\n",max);
    printf("Min: %d\n",min);

    printf("The final score is: %.2f",sum);
    
    
    
    
    
    
}