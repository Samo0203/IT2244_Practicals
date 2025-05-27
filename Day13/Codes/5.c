//5 data types
#include<stdio.h>
int main(){
 int age=10;
 printf("%d\n",age);

 printf("size:%zu\n", sizeof(age));

 double number=12.45;
 printf("%.2lf\n",number); //without .2 it will 12.450000(6 bytes)

 float num1=10.9f;  //using f we indicate the float
 printf("%f\n",num1); //10.90000
 printf("%.1f\n",num1); //10.9

 char character='z';
 printf("%c",character);
 printf("\n%d\n",character); //integer value of integer

 return 0;
}


[2021ict119@fedora ~]$ ./3rdpro
10
size:4
12.45
10.900000
10.9
z
122