#include<stdio.h>
int main(){
    int n,rem,ori,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    ori=n;
    while(n>0){
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(ori==sum)
    printf("GIVEN NUMBER IS PALINDROME");
    else
    printf("GIVEN NUMBER IS NOT PALINDROME");
return 0;
}
