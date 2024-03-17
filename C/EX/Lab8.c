#include<stdio.h>
#include<string.h>
#define LEN 20
int main(){


    char full_name[5][20]={"G. Washington", "J. Adams", "T. Jefferson", "J. Madison", "R. Sherman"};
    char  initials[5][3];
    char last_names[5][20];
    printf("Initial First Name\t\tLast Name\n");
    for(int i=0;i<5;i++){
        strncpy(initials[i],&full_name[i][0],2);
        initials[i][2]='\0';
        strcpy(last_names[i],&full_name[i][2]);
    }
        for(int i=0;i<5;i++){
        printf("%18s%23s\n",initials[i],last_names[i]);
    }
    return 0 ;
}

int main (){
    char frist_name[15];
    char last_name[15];
    char full_name[LEN];
    char a[2];
    printf("Enter your last name> ");
    scanf("%s",last_name);
    printf("Enter your first name> ");
    scanf("%s",frist_name);
    int x=strlen(last_name)+strlen(frist_name);
    if(x>=LEN){
        strncpy(a,&frist_name[0],1);
        a[1]='\0';
        strcpy(full_name,a);
        strcat(full_name,". ");
        strcat(full_name,last_name);
        printf("%s",full_name);    
    }
    else{
        strcat(full_name,frist_name);
        strcat(full_name," ");
        strcat(full_name,last_name);

        printf("%s",full_name);

    }



    return 0 ;
}