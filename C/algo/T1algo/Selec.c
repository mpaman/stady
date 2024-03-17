#include <stdio.h>

void print_array(int[],int);
void main (){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n,max;
    n=sizeof(arr)/sizeof(0);
    print_array(arr,n);
    int i,j,temp;
    for(i=0;i<n;i++){
        max=i;
        for(j=0;j<n;j++){
            if(arr[j]>arr[max]){
                temp=arr[max];
                arr[max]=arr[j];
                arr[j]=temp;
            }
        }
    }
    print_array(arr,n);
}


void print_array(int a[],int n){
    printf("\nArry before sorting:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
