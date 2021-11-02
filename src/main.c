#include<stdio.h>
#include <stdio.h>
#include "../include/myfile.h"

int main(){

char s[]="hello world";
char s1[]="world";
char *p;
p=sgs_clib_strstr (s,s1);
printf("%s",p);

}
