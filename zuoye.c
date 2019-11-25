#include<stdio.h>
int main ()
{
    int A,a,chicken;
    for(A=0;A<=20;A++)
    for(a=0;a<=30;a++)
    for(chicken=0;chicken<=99;chicken++){
        if(A*5+a*3+chicken/3==100)
        if(A+a+chicken==100)
        if(chicken%3==0){
            printf("H,h,c is %d,%d,%d.",A,a,chicken);
        }
    }
}