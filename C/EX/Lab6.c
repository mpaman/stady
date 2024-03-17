#include<stdio.h>

int main(){
    int a,b;
    printf("\n----1----\n");
    printf("&a = %d",&a);
    printf("\n&b = %d",&b);
    a=4,b=6;
    printf("\n----2----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\n&b = %d",&b);
    int *ap,*bp;
    printf("\n----3----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\n&b = %d",&b);
    ap=&a;
    printf("\n----4----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\nap = %d",ap);   
    bp=&b;
    printf("\n----5----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\n&b = %d",&b);
    printf("\n*ap = %d",*ap);
    printf("\n*bp = %d",*bp);
    printf("\nap = %d",ap);   
    printf("\nbp = %d",bp);
    *ap+=*bp;
    printf("\n----6----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\n&b = %d",&b);
    printf("\n*ap = %d",*ap);
    printf("\n*bp = %d",*bp);
    printf("\nap = %d",ap);   
    printf("\nbp = %d",bp);
    *bp=*bp-*ap;
    printf("\n----7----\n");
    printf("a = %d",a);
    printf("\nb = %d",b);
    printf("\n&a = %d",&a);
    printf("\n&b = %d",&b);
    printf("\n*ap = %d",*ap);
    printf("\n*bp = %d",*bp);
    printf("\nap = %d",ap);   
    printf("\nbp = %d",bp);
    return 0;
}

void read_area(int*);
void convert_to_thai(int,int*,int*,int*);
void print_thai_area(int,int,int);
int main(){
    int sq_metre,rai,ngaan,sq_wa;
    read_area(&sq_metre);
    convert_to_thai(sq_metre,&rai,&ngaan,&sq_wa);
    print_thai_area(rai,ngaan,sq_wa);
    return 0 ;
}
void read_area(int*a){
    printf("Enter the area (in square metres): ");
    scanf("%d",a);
}
void convert_to_thai(int m,int*rai,int*nagann,int*wa){
    rai=m/1600;
    nagann=(m%1600)/400;
    wa=(m%1600)%400/4;
}
void print_thai_area(int rai,int nagann,int wa){
    printf("Rai : %d\n",rai);
    printf("Ngaan : %d\n",nagann);
    printf("Square Wa: %d",wa);

}

// void read_area(int*);
// void convert_to_thai();
// void print_thai_area();
// int sq_metre,rai,ngaan,sq_wa;
// int main(){
//     read_area(&sq_metre);
//     convert_to_thai();
//     print_thai_area();
//     return 0 ;
// }
// void read_area(int*a){
//     printf("Enter the area (in square metres): ");
//     scanf("%d",a);
// }
// void convert_to_thai(){
//     rai=sq_metre/1600;
//     ngaan=(sq_metre%1600)/400;
//     sq_wa=(sq_metre%1600)%400/4;
// }
// void print_thai_area(){
//     printf("Rai : %d\n",rai);
//     printf("Ngaan : %d\n",ngaan);
//     printf("Square Wa: %d",sq_wa);

// }

// // #include<stdio.h>
// // void input_n(int*);
// // void input_h(int,float[]);
// // void print_avg(int,float[]);
// // int main(){
// //     int n=24;
// //     int a[n];
// //     printf("Index\tElement\n");
// //     a[0]=0;
// //     a[1]=1;
// //     for(int i =2;i<=n;i++){
// //         a[i]=a[i-1]+a[i-2];
// //     }
// //     for(int i=0;i<=n;i++){
// //         printf("%d\t%d\n",i,a[i]);
// //     }
// //     return 0 ;
// // }

// #include<stdio.h>
// void read_time(int*);
// void convert_time(int,int*,int*,int*);
// void print_time(int,int,int);
// int main(){
//     int t=0,h,m,s;
//     read_time(&t);
//     convert_time(t,&h,&m,&s);
//     print_time(h,m,s);
    
    
//     return 0;
// }

// void read_time(int*n){
//     printf("Enter time (in seconds): ");
//     scanf("%d",n);
// }
// void convert_time(int t,int*h,int*m,int*s){
//     *h=t/3600;
//     *m=(t%3600)/60;
//     *s=(t%3600)%60/1;
// }
// void print_time(int h,int m,int s){
//     printf("Hour(s): %d\n",h);
//     printf("Minute(s): %d\n",m);
//     printf("Secound(s): %d\n",s);
// }


