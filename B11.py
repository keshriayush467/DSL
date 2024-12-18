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
   if i!=l:
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


def Fibbo(arr,x):
   n=len(arr)
   fibbo1=1
   fibbo2=0
   fibbo= fibbo1 + fibbo2
   while(fibbo<n):
      fibbo2= fibbo1
      fibbo1=fibbo
      fibbo= fibbo1 + fibbo2
   offset=-1
   
   while(fibbo>1):
      i=min(offset + fibbo2, n-1)
      if(arr[i]<x):
         fibbo=fibbo1
         fibbo1=fibbo2
         fibbo2= fibbo +fibbo1
         offset =i
         
      elif(arr[i]>x):
         fibbo=fibbo2
         fibbo1=fibbo1-fibbo2
         fibbo2=fibbo -fibbo1
        
      else:
         return i
      
      if(fibbo1 and arr[offset+1]==x) :
         return offset+1
      else:
         return -1
      
   print("\nStudent attenting the trainnig program at ", i)
    
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
        
     elif ch==4:
        print("\n Fibbo")   
        Fibbo(searchlist,key)    
     else:
        print("\n Wrong choice ")

main()




        
  