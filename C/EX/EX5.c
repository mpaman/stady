#include<stdio.h>
int convert_to_seconds(int, int, int);
int main(){
    int h,m,s,sum;
    printf("Enter the time (h:m:s): ");
    scanf("%d:%d:%d",&h,&m,&s);
    sum=convert_to_seconds(h,m,s);
    printf("It is equal to %d second(s) long in total. ",sum);
    return 0 ;
}
int convert_to_seconds(int h, int m, int s){

    return(h*60*60+m*60+s) ;
}

void check_letter(char);
void check_vowel(char) ;
char to_uppercase(char) ;
char to_lowercase(char) ;
void main(){
    char n;
    printf("Enter a letter: ");
    scanf("%c",&n);
    to_uppercase(n) ;
    to_lowercase(n) ;
    check_vowel(n);
    check_letter(n);
    
}

void check_letter(char n){
    if(n>='a'&&n<='z'||n>='A'&&n<='Z'){
    }
    else{
        printf("%c is not a letter.\n",n);
    }
}
void check_vowel(char n){
    if(n>='a'&&n<='z'||n>='A'&&n<='Z'){
    if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='o'||n=='O'||n=='u'||n=='U'){
        printf("%c is a vowel.\n",n);
    }
    else{
        printf("%c is a consonant.\n",n);
    }
    }
}
char to_uppercase(char n) {
    if(n>='a'&&n<='z'){
        printf("%c is converted to %c\n",n,n-32);
    }
}
char to_lowercase(char n) {
    if(n>='A'&&n<='Z'){
        printf("%c is converted to %c\n",n,n+32);
    }
}
