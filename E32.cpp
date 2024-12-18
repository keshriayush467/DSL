#include<iostream>
using namespace std;
#define size 10

class Pizza
{
 int arr[size];
 int front, rear;
public:
 Pizza()
{
 front=rear=-1;
}

bool isfull()
{
 if(front==0 && rear>=size-1 || front== (rear+1)%size)
{
 return true;
}
else
{
 return false;
}
}

bool isempty()
{
  if(front==-1)
{
  return true;
}
 else
{
 return false;
}
}

int accept_order(int item)
{
  if(isfull())
{
  cout<<"\n Sorry we cannot accept more orders ";
 }
  else
{
  if(front==rear)
{
  front=rear=0;
}
 else
{
  rear=(rear+1)%size;
}
  arr[rear]=item;
}
 cout<<"\n Your order is accepted ";
}


int make_payment(int n)
{
  if(isempty())
{
  cout<<"\n U have no orders ";
}
else
{
  cout<<"\n Delivered orders ";
  for(int i=0;i<n;i++)
{
  int item=arr[front];
  cout<<"\t"<<item;
  if(front==rear)
{
  front=rear=0;
}
else
{
  front= (front+1)%size;
}
}
 cout<<"\nTotal amount to be paid is " <<n*100;
}
}

int pendorders()
{
    if(isempty())
{
  cout<<"\n U have no pending orders ";
}
else
{
  int temp= front;
 while(temp!=rear)
{
  cout<<"\t"<<arr[temp];
  temp=(temp+1)%size;
}
cout<<"\t"<<arr[rear];
}
}

};

int main()
{
 Pizza p1; 
    int choice, pizzaType, quantity; 
 
    do { 
        cout << "\n***** Welcome to Pizza Parlor *****"; 
        cout << "\n1. Accept Order"; 
        cout << "\n2. Make Payment"; 
        cout << "\n3. View Pending Orders"; 
        cout << "\n4. Exit"; 
        cout << "\nEnter your choice: "; 
        cin >> choice; 
 
        switch (choice) { 
            case 1: 
                cout << "\nWhat type of pizza would you like to order?\n"; 
                cout << "1. Veg Soya Pizza\n2. Veg Butter Pizza\n3. Egg Pizza\n"; 
                cout << "Enter your choice: "; 
                cin >> pizzaType; 
                p1.accept_order(pizzaType); 
                break; 
            case 2: 
                cout << "\nHow many pizzas would you like to pay for? "; 
                cin >> quantity; 
                p1.make_payment(quantity); 
                break; 
            case 3: 
                p1.pendorders(); 
                break; 
            case 4: 
                cout << "Exiting... Thank you for visiting!\n"; 
                break; 
            default: 
                cout << "Invalid choice, please try again.\n"; 
        } 
    } while (choice != 4); 
 
    return 0; 
}


  