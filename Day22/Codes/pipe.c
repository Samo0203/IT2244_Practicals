#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MSGSIZE 16

char* msg1 = "hello, world #1";  // * -> pointers
char* msg2 = "hello, world #2";
char* msg3 = "hello, world #3";

int main()
{
	char inbuf[MSGSIZE];
	int p[2], i; // file descripter[2] -> 0-read, 1-write
	
	if(pipe(p)<0)
	exit(1);
	
	/* continued
	   write pipe */
	   
	write(p[1], msg1, MSGSIZE); //write(filedes, message, message size)
	write(p[1], msg2, MSGSIZE);
	write(p[1], msg3, MSGSIZE);
	
	for(i=0; i<3; i++){
		/* read pipe */
		read(p[0],inbuf, MSGSIZE); //read(filedes,msg,message size)
		printf("%s\n", inbuf);
	}
	return 0;
}