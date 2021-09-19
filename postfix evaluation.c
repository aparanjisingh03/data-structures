#include<stdio.h>
#include<string.h>
#define MAX 100

float st[MAX];
int top=-1;
void push(float [],float);
float pop(float []);
float evaluate_postfix_exp(char []);
int main()
{
	float val;
	char exp[100];
	printf("Enter any postfix expression\n");
	gets(exp);
	val=evaluate_postfix_exp(exp);
	printf("Value of the postfix expression is=%.2f",val);
}
float evaluate_postfix_exp(char exp[])
{
	int i=0;
	float op1,op2,value;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
			push(st,(float)(exp[i]-'0'));
		else
		{
			op2=pop(st);
			op1=pop(st);
			switch(exp[i])
			{
				case '+':
					value = op1+op2;
					break;
				case '-':
					value = op1-op2;
					break;
				case '*':
					value = op1*op2;
					break;
				case '/':
					value = op1/op2;
					break;
				default:
					printf("Invalid operator");
					break;				
			}
			push(st,value);
		}
		i++;
	}
	return (pop(st));
}
void push(float st[],float val)
{
	if (top==MAX-1)
		printf("Stack OVERFLOW\n");
	else
		top++;
		st[top]=val;
}
float pop(float st[])
{
	float val=-1;
	if(top==-1)
		printf("Stack UNDERFLOW\n");
	else
	{
		val=st[top];
		top--;
	}
	return val;
}

