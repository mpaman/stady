#include <stdio.h>

void main(){
    int arr[]={3,0,1,8,7,2,5,4,6,9};
    int n,max;
    n=sizeof(arr)/sizeof(0);
    print_array(arr,n);
    int i,j,temp;
    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[max]){
                max=j;

            }
        }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    print_array(arr,n);
}

void print_array(int a[],int n){
    printf("\nArry before sorting:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
