#include <stdio.h>
int main()
{
    int n,sum=0,term=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(n>0){
        term=n%10;
        sum+=term;
        n/=10;
    }
    printf("Sum is %d",sum);
    return 0;
}