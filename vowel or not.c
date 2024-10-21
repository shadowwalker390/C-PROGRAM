#include <stdio.h>
int main() {
char x;
printf("enter a character:");
scanf("%c",&x);
if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
{
    printf("'%c' is VOWEL",x);
}
else
{
printf("'%c' is NOT VOWEL",x);
}
return 0;
}
