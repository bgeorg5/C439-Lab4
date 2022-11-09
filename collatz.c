#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h>

int main(){

int n;

printf("Enter the value of n: \n");
scanf("%d", &n);

printf("\n START \n");
printf("%d \n", n);

	//repeats until n=1
	while(n != 1){

	//if n is even --> n/2
	if(n % 2 == 0){
		n = n/2;
	
	}
	//if n is odd --> 3n+1
	else{
		n = (3*n)+1;
	}
	
	printf("%d \n", n);
	
	}
	
printf("END \n");
return 0;
}


