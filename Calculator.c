#include<stdio.h>
#include<math.h>

//Calculator
// First input is an integer. Second input is the operation character. 
//Third input is the second integer. Valid operatos are +, -, *, /, and %. 

int main(){
	
	int x,y;
	char n;
	float result;
	
	printf("Please enter an integer:");
	scanf("%d",&x);
	printf("Please enter a valid operator(+,-,*,/,%):");
	scanf("%s",&n);
	printf("Please enter an integer:");
	scanf("%d",&y);
	
	if(n=='+' || n=='-' || n=='*' || n=='/' || n=='%%'){
		
		switch(n){
			case '+':
			   result=x+y;
			   printf("%d+%d:%.2f",x,y,result);	
			   break;
			case '-':
			   result=x-y;
			   printf("%d-%d:%.2f",x,y,result);
			   break;
			case '*':
			   result=x*y;
			   printf("%d*%d:%.2f",x,y,result);
			   break;
			case '/':
			   result=x/y;
			   printf("%d/%d:%.2f",x,y,result);
			   break;
			case '%':
			   result=x%y;
			   printf("%d%%%d:%.2f",x,y,result);
			   break;   
			default :
				break;
			            
		}
	}
	else
	   printf("Please enter a valid character.");
	
	return 0;
}

