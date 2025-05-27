// comments
// - single live comments ctrl+/
/* */ - multiple comments ctrl+shift+/

// C operators
arithmetic operators+
-
*
/
%

#include<stdio.h>
int main(){
 int n1,n2,sum,sub,mul,div,mod;
 printf("Enter number 1: ");
 scanf("%d",&n1);  
 printf("Enter number 2: ");
 scanf("%d",&n2);

 sum=n1+n2;
 sub=n1-n2;
 mul=n1*n2;
 div=n1/n2;
 mod=n1%n2;
 
 printf("Summation=%d\n",sum);
 printf("Subtraction=%d\n",sub);
 printf("Multiplication=%d\n",mul);
 printf("Division=%d\n",div);
 printf("Modules=%d\n",mod);
 
} 

[2021ict119@fedora ~]$ ./arithOpr
Enter number 1: 10
Enter number 2: 3
Summation=13
Subtraction=7
Multiplication=30
Division=3
Modules=1