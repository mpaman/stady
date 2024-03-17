#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    printf("Please enter number of students> ");
    scanf("%d",&n);
    float hight[n],tt;
    for(int i=0;i<n;i++){
        printf("Please enter student height [%d]> ",i+1);
        scanf("%f",&hight[i]);
        tt+=hight[i];
    }
    tt=tt/n;
    printf("Average height: %.2f\n",tt);
    return 0 ;


    // int n,num,i;
    // int arr[]={10,20,30,40,50,60,70,80,90,100};
    // printf("Please enter a number> ");
    // scanf("%d",&n);
    // if(n>0&&n%10==0&&n<=100){
    //     for(i =0;i<=10;i++){
    //         if(arr[i]==n){
    //             break;
    //         }
    //     }
    //     printf("Element is present in the array at index %d",i);
    // }
    // else{
    //     printf("Element is not present in the array!");
    // }

    
    

    
}





    // int i,j,temp,index_of_min,
    //     list[]={10,50,30,60,20,40},
    //     n=sizeof(list)/sizeof(list[0]);
    // for (i=0;i<n-1;++i){
    //     index_of_min=i;
    //     for(j=i+1;j<n;j++){
    //         if(list[j]<list[index_of_min])
    //             index_of_min=j;
    //     }
    //     if(i != index_of_min){
    //         temp=list[index_of_min];
    //         list[index_of_min]=list[i];
    //         list[i]=temp;
    //     }
    //     printf("teamp %d \n",temp);
    //     for(int k=0;k<n;++k){
    //         printf("%d\t",list[k]);
    //     }
    //     printf("\n");
    // }