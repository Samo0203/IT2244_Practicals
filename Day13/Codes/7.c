// 7 user input
#include<stdio.h>
int main(){
 int age;
 printf("Enter your age: ");
 //printf("%d",age);
 scanf("%d",&age);   //&=ampasan
 printf("Age=%d\n",age);
 
 double number;
 char alpha;
 
 printf("Enter double input: ");
 scanf("%lf",&number);
 printf("Your double input is:%lf\n",number);
 
 printf("Enter character: ");
 scanf(" %c",&alpha);
 printf("Your character is:%c\n",alpha);
 
 double n1;
 char c1;
 printf("Enter inputs: ");
 scanf("%lf %c",&n1,&c1);
 printf("Your inputs are:%lf %c\n",n1,c1);
 
}

[2021ict119@fedora ~]$ ./userInput
Enter your age: 22
Age=22
Enter double input: 15.25
Your double input is:15.250000
Enter character: c
Your character is:c
Enter inputs: 12.23
g
Your inputs are:12.230000 g
