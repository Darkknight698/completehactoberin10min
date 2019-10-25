#include<stdio.h>
int gcd(int a,int b){
	if(a%b==0)
		return b;
	else{
		return gcd(b,a%b);
	}
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("\nGCD of %d and %d is : %d\n",num1,num2,res);
	return 0;
}