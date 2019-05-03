// Author Beyza Aydoğan  #150117030  All rights reserved. 2019 
#include <stdio.h>
int number_Of_Ears(int n);


int main(){
	int n;

	printf("%s\n","Please enter the number of lines(n=) " );
	scanf("%d",&n);
  	number_Of_Ears(n);

}

int number_Of_Ears(int n){
	if(n==0){
		printf("bunnyEars(0) %d\n",0 );
		return 0;
	}
	else if(n==1){
		printf("bunnyEars(1) %d\n",2 );
		return 2;
	}
	else if(n%2==0){
		int x= number_Of_Ears(n-1)+3;
		printf("bunnyEars(%d) %d\n",n, x);
		return x;	
	}
	else {
		int x =number_Of_Ears(n-1)+2;
		printf("bunnyEars(%d) %d\n",n,x );
		return x;
	}


}