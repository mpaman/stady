#include<stdio.h>

int convert_to_seconds(int, int, int);
int main(){
    int h,m,s,totle ;
    printf("Enter the time (h:m:s): ");
    scanf("%d:%d:%d",&h,&m,&s);
    totle=convert_to_seconds(h,m,s);
    printf("It is equal to %d second(s) long in totle",totle);
    
    
    return 0 ;
}
int convert_to_seconds(int a, int b, int c){
    return(a*60*60+b*60+c);
}

void check_letter(char);
void check_vowel(char);
char to_uppercase(char);
char to_lowercase(char);

int main(){
    char n;
    printf("Enter a Letter: ");
    scanf("%c",&n);
    to_uppercase(n);
    to_lowercase(n);
    check_letter(n);
    check_vowel(n);   
    return 0 ;
}
void check_letter(char a){
    if((a<='z' && a>='a' )||(a<='Z' && a>='A')){
    }
    else{
        printf("%c is not a letter\n",a);
    }

}
void check_vowel(char a){
    if((a<='z' && a>='a' )||(a<='Z' && a>='A')){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("%c is a vowel. \n",a);
        }
        else{
            printf("%c is a consonant.\n",a);
        }
    }
}
char to_uppercase(char a){
    if(a<='z' && a>='a' ){
        printf("%c is converted to %c\n",a,a-32);
    }
}
char to_lowercase(char a){
    if((a<='Z' && a>='A')){
        printf("%c is converted to %c\n",a,a+32);
    }
}




// // G2
// #include<stdio.h>
// int convert_to_square_metre(int, int, int);
// int main(){
//     int r,n,w,tt;
//     printf("Enter thai area unit (r-n-w): ");
//     scanf("%d-%d-%d",&r,&n,&w);
//     tt=convert_to_square_metre(r,n,w);
//     printf("This Thai area unit is equal to %d square metres.",tt);
//     return 0 ;
// }
// int convert_to_square_metre(int a, int b, int c){
//     return(a*1600+b*400+c*4);
// }


