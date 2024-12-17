#include<iostream>
#include<string.h>
using namespace std;

class stack
{
 char st[20];
 int top;
public:
 stack()
{
  top=-1;
}
 void push(char x)
{
  top++;
  st[top]=x;
}

 void pop()
{
  char x;
  x= st[top];
  top--;
}

int check()
{
  char ch[20]; 
  int i=0;
  top=-1;
  cout<<"\n Enter the expression " ;
  cin>>ch;

  while(ch[i]!='\0')
  {
     if(ch[i]=='{' || ch[i]== '[' || ch[i]== '(' )
     {
        push(ch[i]);
     }
     else if (ch[i]=='}')
     {
        if(top!=1 && st[top]=='{')
      {
     pop();
      }

     else
    {
    cout<<"\n Matching not found ";
    }
     }
   else if (ch[i]==']')
   {
       if(top!=1 && st[top]=='[')
      {
     pop();
      }

     else
    {
    cout<<"\n Matching not found ";
    }
   }
   else if( ch[i]==')')
   {
     if(top!=-1 && st[top]=='(')
     {
       pop();
     }
     else
     {
       cout<<"\n Match not found ";
       return 0;
     }
   }
   i++;
}
if(top==-1)
{
  cout<<"\n Expression is well parenthesized ";

}
else
{
  cout<<"\n Expression is not well parenthesized ";
}
}
};

int main()
{
  stack obj;
  obj.check();
}
