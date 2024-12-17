def acceptlist(lst):

   n= int(input("\nEnter the total no of Students "))
   for i in range(n):
       per=float(input("\n Enter the percentage of students "))
       lst.append(per)
   return lst

def insertion(arr):
   n=len(arr)
   i=1
   for i in range(n):
       temp=arr[i]
       j=i-1
       while(j>=0 and arr[j]>temp):
           arr[j+1]=arr[j]
           j=j-1
       arr[j+1]=temp

   print(arr)

def shell(arr):
   n=len(arr)
   d=n//2
   while d>0:
    for i in range(d,n):
       temp=arr[i]
       j=i
       while(j>=d and arr[j-d]>temp):
          arr[j]=arr[j-d]
          j=j-d
       arr[j]=temp
    d=d//2
    


def main():
  lst=[]
  flag=1
  while flag==1:
     print("\n ----------------Menu--------------------------- ")
     print("\n 1.Insertion")
     print("\n2.Shell")
     
     ch= int(input("\nEnter the choice "))
    
     if ch==1:
        acceptlist(lst)
        insertion(lst)
        print("\n Sorted Array ", lst)

     elif ch==2:
        acceptlist(lst)
        shell(lst)
        print("\n Sorted Array ",lst)



     else:
         print("\n Wrong Choice")

main()


   