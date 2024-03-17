#include <stdio.h>
int main() {
    int n, i, j,nn;
    do{
        printf("Please enter a number> ");
        nn=scanf("%d", &n);
        if (nn == 1){
            if (n>9 || n<1 ==1){
            printf("Number %d is not in range.\n",n);
            continue;
            }
        }
        else{
            nn=getchar();
            printf("%c Invalid input.\n",nn);
        }
    } 
    while (n>9 || n<1 || n==0 ==1);
        for (i = 0; i <= n; i++) {
            for (j = 0; j <= i; j++) {
                printf("%d ", j);
            }
            printf("\n");
        }
        for(i=n-1;i>=0;i--){
            for(j=0;j<=i;j++){
                printf("%d ",j);
            }
            printf("\n");  
        }
    return 0;
}

