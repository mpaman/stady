#include <stdio.h>

void print_array(int[],int);
void main (){
    int arr[]={3,0,1,8,7,2,5,4,6,9};
    int n;
    n=sizeof(arr)/sizeof(0);
    print_array(arr,n);
    int i,j,temp;
    for(i=0;i<n-1;i++){
        int swapped=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
    print_array(arr,n);
}


void print_array(int a[],int n){
    printf("\nArry before sorting:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
