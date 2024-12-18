#include <iostream>
#include <conio.h>
using namespace std;

class exp
{
	char post[100];
	int top, st[100];

public:
	exp()
	{
		top = 0;
	}

	void postfix( char infix[])
	{
		int i;
		int j=0;
		for(int i=0; infix[i]!='\0';i++)
		{
			switch(infix[i])
			{
				case '+' : while(st[top]>=1)
				           post[j++]= pop();
						   push(1);
						   break;

				case '-' : while(st[top]>=1)
				  			post[j++] =pop();
							push(2);
							break;

				case '*' : while(st[top]>=3)
				  			post[j++] =pop();
							push(3);
							break;

				case '/' : while(st[top]>=3)
				  			post[j++] =pop();
							push(4);
							break;

				case '^' : while(st[top]>=4)
				  			post[j++] =pop();
							push(5);
							break;
				
				case '(' : push(0);
							break;
				
				case ')' : while(st[top]!='\0')
				  			post[j++] =pop();
							top--;
							break;
						
				default : post[j++]= infix[i];		
						   
			}
			
		}
		while(top>0)
		{
			post[j++]= pop();
			cout<<"\nPostfix Expression is "<<post;
		}
	}
				

	int push(int x)
	{
		top++;
		st[top] = x;
	}

	char pop()
	{
		int x;
		char e;
		x = st[top];
		top--;

		switch (e)
		{

		case 1:
			e = '+';
			break;

		case 2:
			e = '-';
			break;

		case 3:
			e = '*';
			break;

		case 4:
			e = '/';
			break;

		case 5:
			e = '^';
			break;
		}
		return (e);
	}
};

int main()
{
	exp obj;
	char infix[40];
	cout << "\nEnter the infix Expression ";
	cin >> infix;

	obj.postfix(infix);

}
