#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h> 
#include<sys/wait.h> 

void ChildProcess(); /* child process prototype */ 
void ParentProcess(); /* parent process prototype */ 
char n;

int main(){

	pid_t pid; 
	pid = fork();

	if (pid == 0){
		ChildProcess(n);

	}
	else {
		ParentProcess();
		wait(0);
	}
return 0; 

}
void ChildProcess(char c) { 
printf("child reached");
	char *args[]={"./collatz", n, NULL};
	execvp(args[0],args); 
	exit(0);
} 

void ParentProcess() { 
printf("Parent reached");


	printf("Enter an Integer from 1-100: \n");
	scanf("%c", &n);

	printf("You Entered %c \n", n);
	exit(0);

}
