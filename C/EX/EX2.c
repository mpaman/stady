#include<stdio.h>
void main(){
    int a,b,c,d,e;
    float count=0,sum=0;
    float tt=0;
    printf("Please enter scores from the judges (a/b/c/d/e): ");
    scanf("%d/%d/%d/%d/%d",&a,&b,&c,&d,&e);
    if(a%2==0){
        count=count+1;
        sum+=a;
        printf("%d",a);
    }
    if(b%2==0){
        count=count+1;
        sum+=b;
        printf("%d",b);
    }
    if(c%2==0){
        count=count+1;
        sum+=c;
        printf("%d",c);
    }
    if(d%2==0){
        count=count+1;
        sum+=d;
        printf("%d",d);
    }
    if(e%2==0){
        count=count+1;
        sum+=e;
        printf("%d",e);
    }
    tt=sum/count;
    printf("Number of judges used: %.0f",count);
    printf("\nThe final score is: %.2f",tt);
    

    int n ;
    printf("Measure under the arms around the widest part of your chest.\n");
    printf("Please enter your chest measurement in inches: ");
    scanf("%d",&n);
    if(n>54||n<30){
        printf("Sorry, there is no suitable size for you.\n");
    }
    if(n>=30&&n<35){
        printf("SS");
    }
    if (n>=35&&n<=37){
        printf("S");
    }
    if (n>=38&&n<=40){
        printf("M");
    }
    if (n>=41&&n<=43){
        printf("L");
    }
    if (n>=44&&n<=46){
        printf("XL");
    }
    if (n>=47&&n<=49){
        printf("XXL");
    }
    if (n>=50&&n<=54){
        printf("XXXL");
    }
    
    
    int n ;
    printf("Please enter your score (0 - 100): ");
    scanf("%d",&n);
    switch(n>100||n<0){
    case 1:
    printf("Invalid score!\n");
    break;
    case 0:
        switch(n/10){
        case 10:
        case 9:
        case 8:
        printf("Grade: A");
        break;
        case 7:
        printf("Grade: B");
        break;
        case 6:
        printf("Grade: C");
        break;
        case 5:
        printf("Grade: D");
        break;
        default:
        printf("Grade: F");
        break;
        }
    }
    
    
    
    



    
    
    
    
    
}