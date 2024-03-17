#include<stdio.h>

void main(){
    int n,a3,i;
    int a1=0,a2=1;
    printf("Please enter the number of terms: ");
    scanf("%d",&n);
    if(n==1){
        printf("Fibonacci sequence: 0");
    }
    else{
        if (n<=0){
        printf("Invalid input! ");
        }
        else{
            printf("Fibonacci sequence: 0, 1");
        }
    }
    for(i=2;i<n;i++){
        a3=a2+a1;
        printf(", %d",a3);
        a1=a2;
        a2=a3;
    }
    printf(".");


    int n,n1;
    int odd=0,maxodd=0,minodd=10,sumodd=0;
    int even=0,maxeven=0,mineven=10,sumeven=0;
    printf("Please enter a positive integer (111111 to 999999 only):");
    scanf("%d",&n);
    if(n>=111111&&n<=999999){
        for(int i=6;i>0;i--){
            n1=n%10;
            if(n1%2==0){
                even+=1;
                maxeven=(n1>maxeven)?n1:maxeven;
                mineven=(n1<mineven)?n1:mineven;
                sumeven+=n1;
            }
            else{
                odd+=1;
                maxodd=(n1>maxodd)?n1:maxodd;
                minodd=(n1<minodd)?n1:minodd;
                sumodd+=n1;
            }
            n=n/10;
        }
        if (sumodd==0){
            printf("There is no odd integer.");
        }
        else{
            printf("There are %d odd integers.\n",odd);
            printf("Max of odd integers: %d\n",maxodd);
            printf("Min of odd integers: %d\n",minodd);
            printf("Sum of odd integers: %d\n",sumodd);
        }
        if(sumeven==0){
            printf("There is no even integer. ");
        }
        else{
            printf("There are %d even integers.\n",even);
            printf("Max of even integers: %d\n",maxeven);
            printf("Min of even integers: %d\n",mineven);
            printf("Sum of even integers: %d ",sumeven);
        }
    }
    else{
        printf("Invalid input! ");
    }
}
