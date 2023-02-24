#include<stdio.h>
int main()
{
	
	char a;
	
	printf("Enter first char of month : ");
	scanf("%c",&a);
	
	switch(a){
		
		case 'j':
		case 'J':
			printf("January");
			break;
			
		case 'f':
		case 'F':
			printf("February");
			break;
			
		case 'm':
		case 'M':
			printf("March");
			break;
			
		case 'a':
		case 'A':
			printf("April");
			break;
			
		case 'y':
		case 'Y':
			printf("May");
			break;
			
		case 'u':
		case 'U':
			printf("June");
			break;
			
		case 'l':
		case 'L':
			printf("July");
			break;
			
		case 'g':
		case 'G':
			printf("August");
			break;
			
		case 's':
		case 'S':
			printf("September");
			break;
		
		case 'o':
		case 'O':
			printf("October");
			break;
			
		case 'n':
		case 'N':
			printf("November");
			break;
			
		case 'd':
		case 'D':
			printf("December");
			break;
			
		default:
			printf("Invalid charactor.");
	}
	
	return 0;
	
}
