#include<stdio.h>
#include<math.h>
void 
separate(double num,
        char *signp,
        int *wholep,
        double *fracp)
{
    double magntiude;
    if(num<0){
        *signp = '-';
    }
    else if (num==0){
        *signp = ' ';

    }
    else{
        *signp ='+';
    }
    magntiude = fabs(num);
    *wholep= floor(magntiude);
    *fracp=magntiude-*wholep;
}

void main(){
    double value = -35.817;
    char sn;
    int whl;
    double fr;
    separate(value,&sn,&whl,&fr);
    printf("Parts if %.4f \nsight: %c\n",value,sn);
    printf("whole number magnitude: %d\n",whl);
    printf("Fractional part: %.4f\n",fr);
}



// void main(){
//     int m =25 ;
//     int *itemp;
//     itemp=&m;
//     *itemp=35;
//     *itemp=2*(*itemp);
//     printf("%d\n",*itemp);
    
//     printf("%p\n",itemp);
    
// }







