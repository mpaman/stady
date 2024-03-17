#include<stdio.h>
void main(){
    int l,i,j,ll;
    do{
    printf("Please enter a lengeth sqare :");
    ll=scanf("%d", &l);
        if (ll == 1){
            if (l<5 ||l%2==0 ==1){
            printf("The side length must be an odd number with at least 5.\n");
            }
            
        }
        else if(ll==0){
            ll=getchar();
            printf("%c Invalid input.\n",ll);
        }
    }
    while(l<5 ||l%2==0 ==1);
        for(i=1;i<=l;i++){
            for(j=1;j<=l;j++){
                if(i==1||i==l||j==1||j==l||j==i||j==l-i+1){
                    printf("* ");;
                }
                else{
                    printf("  ");
                }

            }
            printf("\n");

        }
    
}

