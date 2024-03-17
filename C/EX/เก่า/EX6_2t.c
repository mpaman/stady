#include <stdio.h>
 
void main(){
    int l,i,j;
    do{
        printf("Please enter side length of sqare: ");
        if(scanf("%d",&l) ==1){
            if(l<5||l%2==0 ==1){
                printf("The side leng must be odd number at lest 5.\n");
                continue;
            }
        }
        else{
            getchar();
            printf("%c is an incakid input.\n",l);
        }
    }
    while(l<5||l%2==0||l==0 ==1);
    for (i=1;i<=l;i++){
        for(j=1;j<=l;j++){
            if(i==1||i==(l+1)/2||i==l||j==1||j==(l+1)/2||j==l ==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
