#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
printf("Enter a  number: \n");
char num[100]="";
scanf("%s",&num);
int len=0;
len=strlen(num);
int x=0;
for (x=0;x<len+1;x++)
{
if(num[x]=='0')
    printf("0");
if(num[x]=='1')
    printf("1");
if(num[x]=='2')
    printf("10");
if(num[x]=='3')
    printf("11");
if(num[x]=='4')
    printf("100");
if(num[x]=='5')
    printf("101");
if(num[x]=='6')
    printf("110");
if(num[x]=='7')
    printf("111");
if(num[x]=='8')
    printf("1000");
if(num[x]=='9')
    printf("1001");    
}
printf (" \n");
}