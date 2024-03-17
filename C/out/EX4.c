#include <stdio.h>
#include<math.h>
void main(){
    int n1,n2,n3,n4,n5,n6;
    int pn,sum,l,even,odd,sumeven,sumodd;
    int maxodd=0,maxeven=0;
    int minodd=0,mineven=0;
    printf("Enter Pn number******: ");
    scanf("%d",&pn);
    for(int i =0;i<=6;i++){
        l=pow(10,i);
        n1=(pn/(100000/l))%10;
        printf("%d\n",n1);
            if(n1%2==0){
                even+=1;
                sumeven+=n1;
                if (n1>mineven){
                    maxeven=mineven;
                }
                else{
                    maxeven=n1;
                }
                
                if (n1>maxeven){
                    maxeven=n1;
                }
                else{
                    maxeven=maxeven;
                }
                
            }
            else{
                odd+=1;
                sumodd+=n1;
                if (n1>mineven){
                    maxeven=mineven;
                }
                else{
                    maxeven=n1;
                }
                if (n1>maxodd){
                    maxodd=n1;
                }
                else{
                    maxodd=maxodd;
                }
                
            }
        printf("even %d\n",even);
        printf("odd %d\n",odd);
        printf("sumeeven %d\n",sumeven);
        printf("sumodd %d\n",sumodd);
        printf("maxeven %d\n",maxeven);
        printf("maxodd %d\n",maxodd);
        printf("mineven %d\n",mineven);
        printf("minodd %d\n",minodd);
    
    
        
    }
    
    
    

    
    

}