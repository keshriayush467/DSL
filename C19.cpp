#include<iostream>
#include<string.h>
using namespace std;

struct node
{
 int roll, prn;
 char name[50];
 node *next;
};

class info
{
  node *head= NULL;
public:
  node *create()
{
  node *temp = new node;
  cout<<"\n Enter the name ";
  cin>>temp->name;
  cout<<"\n Enter the prn ";
  cin>>temp->prn;
   temp->next=NULL;
  return temp;

}

 int insertbeg()
{
  node *n= create();
  n->next= head;
  head= n;
}

 int insertend()
{
  node *n= create();
 
  if(head==NULL)
{
  head= n;
}
 else
{
 node *temp= head;
 while(temp->next)
{
   temp=temp->next;
}
temp->next= n;
}
}

int deletebeg()
{
  if(head!=NULL)
{
  node *temp= head;
  head= head->next;
  delete temp;
  cout<<"\n Delete succesfull ";
 }
else
{
 cout<<"\n List is empty ";
}
} 

int deleteend()
{
  if(head== NULL)
{
 cout<<"\n List is empty ";
}
else
{
  node *temp= head;
  while(temp->next!=NULL && temp->next->next!=NULL)
{
  temp=temp->next;
}
  delete temp->next;
  temp->next= NULL;
}
}

int insertmid(int prn)
{
  node *n= create();
  node *temp =head;
  while(temp!=NULL && temp->prn!=NULL)
{
 temp=temp->next;
}
if(temp!=NULL)
{
  n->next=temp->next;
  temp->next=n;
}
else
{
 cout<<"\n Roll Not found";
}
}

int deletemid(int prn)
{
 if(head==NULL)
{
  cout<<"\n Nothing to delete ";
}
 if(head->prn==prn)
{
  node *temp= head;
  head=head->next;
  delete temp;
}
node *temp= head;
while(temp->next!=NULL && temp->next->prn!=prn)
{
  temp=temp->next;
}
if(temp->next)
{
 node *temp2= temp->next;
 temp->next= temp->next->next;
 delete temp->next;
}
else
{
cout<<"\n Prn not found ";
}
}
  
int count()
{
int count=0;
node *temp= head;
while(temp!=NULL)
{
  count++;
  temp=temp->next;
}
cout<<"\n Total no of members is "<<count;
}

int display()
{
  if(head==NULL)
  {
    cout<<"\n  Nothing to display ";
  }
  else
  {
    node *temp=head;
    cout<<"\n PRN \t Name";
    while(temp!=NULL)
    {
      cout<<temp->prn<<" "<<temp->name<<" ";
      temp=temp->next;
    }
  }
}

int concat(info &other)
{
  if(head==NULL)
  {
    head=other.head;
  }
  else
  {
    node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next= other.head;
  }
  other.head= NULL;
}

};

int main()
{
  info s,lst2;
  
  int ch,prn;
  char ans='y';

  while(ans=='y' || ans =='Y')
  {
    cout<<"\n1. Insert Beg (president) ";
    cout<<"\n2. Insert End (Secretary) ";
    cout<<"\n3. Delete Beg (President )";
    cout<<"\n4. Delete End (secretary )";
    cout<<"\n5. Insert mid (members )";
    cout<<"\n6. Delete mid (members )";
    cout<<"\n7. Total count ";
    cout<<"\n8. Display";
    cout<<"\n9. Concatinate ";

    cout<<"\nEnter your choice ";
    cin>>ch;

    switch(ch)
    {
      case 1: s.insertbeg();
                break;
      
      case 2:  s.insertend();
                break;
              
      case 3: s. deletebeg();
                  break;

      case 4: s.deleteend();
                break;

      case 5: cout<<"\nEnter the prn ";
               cin>>prn;
              s.insertmid( prn);
              break;

      case 6: cout<<"\nEnter prn to be deleted";
              cin>>prn;
              s.deletemid( prn);
              break;

      case 7: s.count();
               break;

      case 8: s.display();
              break;

      case 9: s.concat(lst2);
              break;
              
    }
    cout<<"\n Do you want to continue ";
    cin>>ans;
  }
  return 0;
}

  




 


