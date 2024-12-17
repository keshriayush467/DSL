#include<iostream>
#include<string.h>
using namespace std;

struct node
{
 int roll;
 struct node *next;
};

class info
{
  node* head1=NULL, *head2= NULL, *head3=NULL, *h1=NULL;

public:
  node *create()
{

  node *p= new node;
  cout<<"\n Enter the student roll no ";
  cin>>p->roll;
  p->next=NULL;
 return p;
}

 void insert (node * &head)
{
  node *p= create();
  if(head==NULL)
{
  head= p;
}
else
{
  node *temp= head;
  while(temp->next)
{
  temp=temp->next;
  
}
  temp->next=p;
}
}


void display(node * &head)
{
  node *temp= head;
  while(temp->next)
{
 cout<<temp->roll<<" ";
  temp=temp->next;
}
}


void allstud()
{
 int k;
 cout<<"\nEnter the name of students ";
 cin>>k;
 h1=NULL;
 for(int i=0;i<k;i++)
  {
   insert(h1);
}
display(h1);
}

void vanilla()
{
 int k;
 cout<<"\n Enter the students who like vanilla ";
 cin>>k;
 head1=NULL;
 for(int i=0;i<k;i++)
  {
   insert(head1);
}
display(head1);
}

void Buterscotch()
{
 int k;
cout<<"\n Enter the students who like buterscotch ";
 cin>>k;
 head2=NULL;
 for(int i=0;i<k;i++)
  {
   insert(head2);
}
display(head2);
}


void unionset()
{
  cout<<"\n Students who like vanilla and buterscotch both ";
  head3= NULL;
  node *temp1 =head1;
  while(temp1)
{
  insert(head3);
  temp1=temp1->next;
}
  node *temp2= head2;
while(temp2)
{
  bool found= false;
  node *temp1 =head1;
  while(temp1)
{
  if(temp1->roll==temp2->roll)
{
   found=true;
   break;
}
  temp1=temp1->next;
}
 if(found==true)
{
  insert(head3);
}
 temp2=temp2->next;
 } 
}

void intersection()
{
  cout<<"\n Students who like both Vanilla and Buterscotch ";
  node *temp1= head1;
  while(temp1)
{
   node *temp2= head2;
   while(temp2)
{
   if(temp1->roll== temp2->roll)
{
   cout<<temp1->roll <<" ";
 }
  temp2=temp2->next;
}
   temp1=temp1->next;
  }
  
}

void onlyvanilla()
{
 cout<<"\n Students who like only Vanilla icecream ";
 node *temp1= head1;
 while(temp1)
{
   bool found= false;
   node *temp2= head2;
   while(temp2)
{
   if(temp1->roll==temp2->roll)
{
    found=true;
    break;
}
  temp2=temp2->next;
}
 if(found==true)
{
  cout<<temp1->roll<<" ";
}
temp1=temp1->next; 
}
}

void onlybutterscotch()
{
  node *temp2= head2;
  while(temp2)
  {
    bool found= false;
    node *temp1= head1;
    while(temp1)
    {
      if(temp2->roll==temp2->roll)
      {
        found= true;
        break;
      }
      temp1=temp1->next;
    }
    if(found==true)
    {
      cout<<temp2->roll<<" ";
    }
    temp2=temp2->next;
  }
} 

void neitherlikes()
{
  node *temp=h1;
  while(temp)
  {
    bool found= false;
    node *temp3= head3;
    while(temp3)
    {
      if(temp->roll==temp3->roll)
      {
        found= true;
        break;
      }
      temp3= temp3->next;
    }
    if(found==true)
    {
      cout<<temp->roll<<" ";
    }
    temp=temp->next;
  }
}
};

int main()
{
  info s;
  char ans;
  int ch;
  do
  {
    cout<<"\n1. Enter all students " ;
    cout<<"\n2. Enter students who like vanilla ";
    cout<<"\n3. Enter students who like Butterscotch  ";
    cout<<"\n4.  Students who like only Vanilla   ";
 cout<<"\n5.  Students who like only Butterscotch   ";
 cout<<"\n6.  Students who like Both Vanilla and Butterscotch   ";
cout<<"\n7.  Students who like neither Vanilla nor Butterscotch   ";

  cout<<"\nEnter Choice";
  cin>>ch;
  switch(ch)
  {
    case 1: s.allstud();
             break;
    case 2: s.vanilla();
    break;
    case 3: s.Buterscotch();
    break;
    case 4: s.onlyvanilla();
     break;
     case 5: s.onlybutterscotch();
     break;
     case 6: s.intersection();
     break;
     case 7: s.neitherlikes();
             cout<<"Success";
     break;
  }
  cout<<"\n Do u want to continue ";
  cin>>ans;
  }while(ans=='y' || ans=='Y');
  return 0;
}











