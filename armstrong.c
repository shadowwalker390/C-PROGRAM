#include<stdio.h>
int main(){
    int n,rem,ori,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    ori=n;
    while(ori!=0){
        rem=ori%10;
        sum +=rem*rem*rem;
        ori/=10;
    }
    if(sum==n)
    printf("GIVEN NUMBER IS ARMSTRONG",n);
    else
    printf("GIVEN NUMBER IS NOT ARMSTRONG",n);
return 0;
}
