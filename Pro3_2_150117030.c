#include <stdio.h>
unsigned long sumOfDigit(unsigned long n, unsigned long sum);
unsigned long superDigit(unsigned long n);
 unsigned concatTwoNums(unsigned a, unsigned b) ;
 
int main(){
unsigned long n,k,i,concat;
printf("%s ","Please enter a number : " );
scanf("%ld",&n);
printf("%s ","Plase enter repetition factor: " );
scanf("%ld", &k);
concat = n;
for(i=0;i<k-1;i++){
	concat = concatTwoNums(concat, n);
	 }
printf("Super digit of number %ld is ",concat );
int result = superDigit(concat);
printf("%d. \n",result);


}


unsigned long sumOfDigit(unsigned long n,unsigned long sum){
	unsigned long result = n%10;
	sum +=result;
	unsigned long x = (n-result)/10;
	if(x!=0){
	  sumOfDigit(x,sum);
	}
	else 
		return sum;
}

 unsigned long superDigit(unsigned long n){

unsigned long result= sumOfDigit(n,0);
	if(result>9){
		superDigit(result);
	}
	else 
		return result;

} 

unsigned concatTwoNums(unsigned a, unsigned b) {
    unsigned mult = 10;
    while(b >= mult)
        mult *= 10;
    return a * mult + b;        
}