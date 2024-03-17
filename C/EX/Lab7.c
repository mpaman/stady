#include<stdio.h>
void read_num_of_students(int*);
void read_heights(int,float[]);
void find_average(int,float[],float*);
int main(){
    int n ;
    float tt;
    read_num_of_students(&n);
    float hight[n];
    read_heights(n,hight);
    find_average(n,hight,&tt);
    printf("Average height: %.2f",tt);
    return 0 ;
}
void read_num_of_students(int*n){
    printf("Please enter the number of students: ");
    scanf("%d",n);
}
void read_heights(int n,float h[]){
    for(int i=0;i<n;i++){
        printf("Please enter student height [%d]: ",i+1);
        scanf("%f",&h[i]);
    }
}
void find_average(int n,float h[],float *tt){
    for(int i=0;i<n;i++){
        *tt+=h[i];
    }
    *tt=*tt/n;
}

// EX2
#include<stdio.h>
void print_array(int[],int);
void bubble_sort(int[],int);

int main(){
    int arr[]={3,0,1,8,7,2,5,4,6,9};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);

    printf("Ascending Buble Sort");
    print_array(arr,n);
    bubble_sort(arr,n);
    print_array(arr,n);
}
void print_array(int a[],int n){
    printf("\nArry before sorting:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void bubble_sort(int a[], int n) {
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }  
    }
    
}

// int main(){
//     int a[3][3]={{1,3,2},{1,0,0},{1,2,2}};
//     int b[3][3]={{0,0,5},{7,5,0},{2,1,1}};
//     int c[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//         c[i][j]+=a[i][j]+b[i][j];
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }
















