def acceptlist():
   searchlist=[]
   n= int(input("\nEnter the total no of Students "))
   for i in range(n):
       st=int(input("\n Enter the roll no of students "))
       searchlist.append(st)
   return searchlist


def linear(arr,x):
   for i in range(len(arr)):
       if(arr[i]== x):
          location =i
   print("\n Student attending the trianing program is found at", location)


def Sentinel(arr,x):
   l= len(arr)
   arr.append(x)
   i=0
   while(arr[i]!=x):
      i+=1
 
      location=i    
   print("\n Student attending the trianing program is found at", location) 


def Binary(arr,x):
   n=len(arr)
   low=0
   high=n-1
   mid=0
   while(low<=high):
      mid=(low+high)//2
      if(arr[mid]>x):
         high=mid-1
      elif(arr[mid]<x):
         low=mid+1
      else:
         return mid
      
   print("\n Student attended the training program ",mid)

def fibonacci_search(arr, key, n):
    b = 0
    a = 1
    f = b + a  
    while f < n:
        b = a
        a = f
        f = b + a
    offset = -1
    
    while f > 1:
        i = min(offset + b, n - 1)  
        
        if arr[i] < key: 
            f = a
            a = b
            b = f - a
            offset = i
        elif arr[i] > key: 
            f = b
            a = a - b
            b = f - a
        else:
            return i  
    

    if a and arr[offset + 1] == key:
        return offset + 1
    
    return -1 

      
    
def display(arr):
  print("\n The current list ", arr)


def main():
   flag=1
   searchlist = acceptlist()
   while flag==1:
     print("\n ----------------Menu--------------------------- ")
     print("\n 1.Linear Search")
     print("\n2.Sentinel Search")
     print("\n3.Binary Search")
     print("\n4.Fibbo search ")
 

     ch= int(input("\nEnter the choice "))
     display(searchlist)
     key= int(input("\nEnter the element to be searched "))
     if ch==1:
        print("\n Linear search ")   
        linear(searchlist,key) 

     elif ch==2:
        print("\n Sentinel search ")   
        Sentinel(searchlist,key) 

     elif ch==3:
        print("\n Binary search ")   
        location= Binary(searchlist,key) 
        print(location)
        
     elif ch == 4:  
        print("\nFibonacci Search")
        position = fibonacci_search(searchlist, key, len(searchlist))
        if position == -1:
            print("Element not found")
        else:
            print(f"Element found at position {position}")
                      
     else:
        print("\n Wrong choice ")

main()




        
  