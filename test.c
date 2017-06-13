#include <stdio.h>          
#include <stdlib.h>         
#include <string.h>         
#include <float.h>
#include <stdarg.h>
#include<ctype.h>

#include "tostr.h"

int main(int argc,char *argv[]){

long int i=11483646;
float f=-11111999.999;
char *s="string";



printf("7 arguments: %s\r\n",tostr(i,f,s,111,999.123,"QQQQQQQ",5+5));
printf("3: %s\r\n",tostr(f*2,"argstr",i/2));
printf("0: %s\r\n",tostr());



echo("echo 7 arguments: ",i+f,f-i,s,"abc",1,1.333,"qwerty\r\n");
echo("echo 1 argument\r\n");


return 0;

}