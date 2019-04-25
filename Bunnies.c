#include <stdio.h>
int number_Of_Ears(int n);


int main(){
	int n;

	printf("%s\n","Please enter the number of lines(n=) " );
	scanf("%d",&n);
  
  	printf("bunnyEars() %d\n",number_Of_Ears(n) );

}

int number_Of_Ears(int n){
	if(n==0)
		return 0;
	else if(n==1){
		return 2;
	}
	else if(n%2==0)
		return number_Of_Ears(n-1)+3;
	else 
		return number_Of_Ears(n-1)+2;


}