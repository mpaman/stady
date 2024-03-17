#include<stdio.h>
void main(){
    int pn,i,j;
    printf("Please enter a positive number>");
    scanf("%d",&pn);
    for(i =1;i<=pn;i++){
        for(int j=pn;i<=j-1;j--){
            printf("   ");
        }
        for(j=1;j<=2*i-1;j++){
            printf(" * ");
        }
        printf("\n");
    }
    
}