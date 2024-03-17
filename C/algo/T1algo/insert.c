#include <stdio.h>

void print_array(int[],int);
void main (){
    int arr[]={3,0,1,8,7,2,5,4,6,9};
    int n,max;
    n=sizeof(arr)/sizeof(0);
    print_array(arr,n);
    int i,j,temp;
    
    for(i=0;i<n;i++){
        temp=arr[i];
        j=i-1;
        while (j>=0 &&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    print_array(arr,n);
}


void print_array(int a[],int n){
    printf("\nArry before sorting:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
