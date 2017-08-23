#include <stdio.h>          
#include <stdlib.h>         
#include <string.h>         
#include <float.h>
#include <stdarg.h>
#include<ctype.h>

#include "tostr.h"

int main(int argc,char *argv[]){

double* x[128];

int x0=111;
float x1=123.321;
char *x2="salala";

long int i=11483646;
float f=-11111999.999;
char *s="string";
char sss[10];

char s1[]="hello";
sprintf(sss,"%s","dummy");

char c='A';



int iii=0;
printf("7 arguments: %s\r\n",tostr(i,f,s,111,999.123,"QQQQQQQ",5+5)); 

max_args=1;
printf("3: %s\r\n",_tostr(111,"argstr",i/2));
printf("0: %s\r\n",tostr());

max_args=128;

echo("echo 8 arguments: ",i+f,f-i,s,c,'x',1,1.333,"qwerty\r\n");
printf("xxxXXXXXXXXXXXXXX%d\r\n",echo("echo 3 argument\r\n",sss,s1));



echo(i);

gdbg=1;  

int _i=123;

long long int lli=123457347899999;
echo(lli,f,s,c);

printf("%c\r\n%lld\r\n",c,lli);


iii=777;
long double lld=111111.111111;


char **arr=toarr(iii,f,s);
printf("\r\n%s %s %s\r\n",arr[0],arr[1],arr[2]);

i=0;
while(arr[i]){

printf("%s\r\n",arr[i]);

i++;
}

echo(lld);

int_dig="1.6";
flt_dig=".2";
str_wch="10.3";
echo("\r\n",lld," ",123," abcdef ","\r\n");

return 0;

}