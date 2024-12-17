def acceptlist(lst):

   n= int(input("\nEnter the total no of Students "))
   for i in range(n):
       per=float(input("\n Enter the percentage of students "))
       lst.append(per)
   return lst


def selection(arr):
   n=len(arr)
   for i in range(n):
        min=i
        for j in range(i+1,n):
           if(arr[j]<arr[min]):
               min=j
     
        temp= arr[i]
        arr[i]=arr[min]
        arr[min]=temp
   
   print(arr)


def bubble(arr):
    n=len(arr)
    for i in range(n-1):
       for j in range(0,n-1-i):
           if(arr[j]>arr[j+1]):
              temp=arr[j]
              arr[j]=arr[j+1]
              arr[j+1]=temp

    print(arr)


def main():
  lst=[]
  flag=1
  while flag==1:
     print("\n ----------------Menu--------------------------- ")
     print("\n 1.Selection")
     print("\n2.Bubble")
     
     ch= int(input("\nEnter the choice "))
     

     if ch==1:
        acceptlist(lst)
        selection(lst)
        print("\n Sorted array is ", lst)
        

    
     elif ch==2:
        acceptlist(lst)
        bubble(lst)
        print("\n Sorted array is ", lst)
        

     
     else:
          print("\n Wrong Choice ")
          

main()
     
                     