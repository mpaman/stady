#include<stdio.h>
void main(){
    int rows,colums,i,j;
    printf("Please enter number of rows> ");
    scanf("%d",&rows);
    printf("Please enter number of columns> ");
    scanf("%d",&colums);
    for(i=1;i<=rows;i++){
        for(j=1;j<=colums;j++){
            if (i==1||i==rows||j==1||j==colums == 1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
