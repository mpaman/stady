#include<stdio.h>
void main(){
    int choice;
    float c_cola=5,c_h2o=5,c_j=5;
    float cc,ch2o,cj;
    float cola,h2o,j;
    float sumcola,sumh2o,sumj;
    float sum;
do{
    printf("1 - Cola(%.0f)\n2 - Drinking Water(%.0f)\n3 - Juice(%.0f)\n0 - Confirm\n",c_cola,c_h2o,c_j);
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==0){
        sumcola=20*cc,sumh2o=10*ch2o,sumj=15*cj;
        sum=sumcola+sumh2o+sumj;
        printf("Summary:\nCola: %.0f(%.2f)\nH20: %.0f(%.2f)\nJ: %.0f(%.2f)\nTotal :%.2f",cc,sumcola,ch2o,sumh2o,cj,sumj,sum);
        break;
    }
    else if(choice==1){
        printf("How many choice: ");
        scanf("%f",&cola);
        if(cola<=0||cola>c_cola){
            printf("invalind input\n");
            cola==0; 
        }
        else{
            cc+=cola;
            c_cola=c_cola-cola;
        }
    }
    else if(choice==2){
        printf("How many choice: ");
        scanf("%f",&h2o);
        if(h2o<=0||h2o>c_h2o){
            printf("invalind input\n");
            h2o==0; 
        }
        else{
            ch2o+=h2o;
            c_h2o=c_h2o-h2o;
        }
    }
    else if(choice==3){
        printf("How many choice: ");
        scanf("%f",&j);
        if(j<=0||j>c_j){
            printf("invalind input\n");
            j==0; 
        }
        else{
            cj+=j;
            c_j=c_j-j;
        }
    }
    else{
        printf("Invalid choice. Please try again.\n");
    }
    printf("\n-------------------------------------------\n");
}
    while(1);
}
