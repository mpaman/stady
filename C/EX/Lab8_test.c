#include<stdio.h>
#include<string.h>

int main(){
    char first[15];
    char second[15];
    printf("Enter the first word> ");
    scanf("%s",first);
    printf("Enter the second word> ");
    scanf("%s",second);
    if(strncmp(first,second,1)==0){
        printf("%s and %s are equal.",first,second);
    }
    else if(strncmp(first,second,1)<0){
        printf("%s precedes %s.",first,second);
    }
    else if(strncmp(first,second,1)>0){
        printf("%s succeeds %s.",first,second);
    } 
    return 0 ;
}

int main(){
    char a[6][20]={"1 H  Hydrogen","2 He Helium","3 Li Lithium","6 C  Carbon","7 N  Nitrogen","8 O  Oxygen"};
    char atom[6][2];
    char symbol[6][3];
    char name[6][10];
    printf("Atomic Number\tSymbol\tName\n");
    for(int i=0;i<6;i++){
        strncpy(atom[i],&a[i][0],1);
        atom[i][1]='\0';
        strncpy(symbol[i],&a[i][2],2);
        symbol[i][2]='\0';
        strcpy(name[i],&a[i][5]);
    }
    for(int i=0;i<6;i++){
        printf("%-16s%-8s%-10s\n",atom[i],symbol[i],name[i]);  
    }
    return 0 ;
}


#define LEN 20
int main(){
    char last_name[15];
    char first_name[15];
    char full_name[LEN];
    char a[3];
    printf("Enter your last name> ");
    scanf("%s",last_name);
    printf("Enter your first name> ");
    scanf("%s",first_name);
    int x=strlen(first_name)+strlen(last_name);
    if(x>=LEN){
        strcpy(full_name,last_name);
        strcat(full_name,", ");
        strncpy(a,&first_name[0],1);
        a[1]='.';
        a[2]='\0';
        strcat(full_name,a);
        printf("%s",full_name);
    }
    else{
        strcpy(full_name,last_name);
        strcat(full_name,", ");
        strcat(full_name,first_name);
        printf("%s",full_name);
    }
    return 0;
}

int main(){
    char arr[10][20]={"BRN 096 Brunei","KHM 116 Cambodia","IDN 360 Indonesia","LAO 418 Laos","MYS 458 Malaysia","MMR 104 Myanmar","PHL 608 Philippines","SGP 702 Singapore","THA 764 Thailand","VNM 704 Vietnam"};
    char a[10][4];
    char code[10][4];
    char country[10][10];
    for(int i=0;i<10;i++){
        strncpy(a[i],&arr[i][0],3);
        a[i][3]='\0';
        strncpy(code[i],&arr[i][4],3);
        code[i][3]='\0';
        strcpy(country[i],&arr[i][8]);
    }
    printf("Alpha 3 Code\tUN Code\tCountry\n");
    for(int i=0;i<10;i++){
        printf("%-16s%-8s%-s\n",a[i],code[i],country[i]);
    }






    return 0 ;
}












