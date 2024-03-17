#include<stdio.h>
void main(){
    int choice;
    float cola=5,water=5,juice=5;
    float w_cola,w_water,w_juice;
    float c_cola,c_water,c_juice;
    float sum;
    while(1){
    printf("Menu:\n1 - Coka(%.0f)\n2 - Drinking Water(%.0f)\n3 - Juice(%.0f)\n0 - Confirm\n",cola,water,juice);
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if (choice==1||choice==2||choice==3||choice==0){
        if(choice==0){
            printf("==============\n");
            break;
        }
        if(choice==1){
            printf("How many cans do you want? ");
            scanf("%f",&w_cola);
            if(w_cola<=cola&&w_cola>0){
                cola=cola-w_cola;
                c_cola+=w_cola;
            }
            else{
                w_cola==0;
                printf("Sorry, invalid input\n");
            }
        }
        if(choice==2){
            printf("How many cans do you want? ");
            scanf("%f",&w_water);
            if(w_water<=water&&w_water>0){
                water=water-w_water;
                c_water+=w_water;
            }
            else{
                w_water==0;
                printf("Sorry, invalid input.\n");
            }
        }
        if(choice==3){
            printf("How many cans do you want? ");
            scanf("%f",&w_juice);
            if(w_juice<=juice&&w_juice>0){
                juice=juice-w_juice;
                c_juice+=w_juice;
            }
            else{
                w_juice==0;
                printf("Sorry, invalid input.\n");
            }
        }
        }
    else{
        printf("Invalid choice. Please try again. \n");
    }
    printf("------------------\n");
    }
    sum=20*c_cola+10*c_water+15*c_juice;
    printf("Summary:\n");
    printf("Cola: %.0f (%.2f)\n",c_cola,20*c_cola);
    printf("Drinking Water: %.0f (%.2f)\n",c_water,10*c_water);
    printf("Juice: %.0f (%.2f)\n",c_juice,15*c_juice);
    printf("Total price: %.2f",sum);
}

void main(){
    int l,i,j,ll;
do{
    printf("Please enter side length of square: ");
    ll=scanf("%d",&l);
    if(ll==0){
        ll=getchar();
        printf("%c is an invalid input.\n",ll);
        l==0;
    }
    else{
        if(l<5||l%2==0){
        printf("The side length must be an odd number with at least 5.\n");
        }
    }
    
    
}
while(l<5||l%2==0 ==1);
for(i=1;i<=l;i++){
    for(j=1;j<=l;j++){
        if(i==1||i==l||j==1||j==l||j==i||i==l-j+1){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}

}




    






