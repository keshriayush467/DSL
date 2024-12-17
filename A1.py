def removeduplicate(d):
  lst=[]
  for i in d:
     if i not in lst:
        lst.append(i)
  return lst

def intersection(lst1,lst2):
   lst3=[]
   for val in lst1:   
      if val in lst2:
         lst3.append(val)
   return lst3

def union(lst1,lst2):
   lst3=[]
   lst3=lst1.copy()
   for val in lst1:
      if val not in lst2:
         lst3.append(val)
   return lst3

def diff(lst1, lst2):
   lst3=[]
   for val in lst1:
      if val not in lst2:
         lst3.append(val)
   return lst3

def symdiff(lst1,lst2):
    lst3=[]
    D1=diff(lst1,lst2)
    print("\n Diff between Cricket and Badminton is ", D1)
    D2=diff(lst2,lst1)
    print("\n Diff between Badminton and Cricket is ", D2)
    D3=union(D1,D2)
    lst3.append(D3)
    return lst3

def CB(lst1,lst2):
    lst3=[]
    lst3= intersection(lst1,lst2)
    print("\n List of students who play Cricket & Football both" , lst3)
    return lst3

def CFnB(lst1,lst2,lst3):
    lst4=[]
    lst4=diff(intersection(lst1,lst2),lst3)
    print("\n List of students who play Cricket & Football but not Badminton ",lst4)
    return lst4

def eCeB(lst1,lst2):
    lst3=[]
    lst3=symdiff(lst1,lst2)
    print("\n List of students who either  play Cricket or Badminton but not both ", lst3)
    return lst3

def nCnB(lst1,lst2,lst3):
    lst4=[]
    lst4=diff(lst3, union(lst1,lst2))
    print("\n List of students who neither  play Cricket nor Badminton  ", lst4)
    return lst4



SeComp=[]
n=int(input("\nEnter the no of student in SE Comp "))
print("\nEnter the students roll no ")
for i in range(n):
  roll=int(input())
  SeComp.append(roll)
print("\n Original List of Students are" , str(SeComp))


Cricket=[]
n=int(input("\nEnter the no of student "))
print("\nEnter the students roll no who play cricket ")
for i in range(n):
  roll=int(input())
  Cricket.append(roll)
print("\n Original List of Students are" , str(Cricket))
Cricket=removeduplicate(Cricket)
print("\n list of student who play cricket after remove duplicates", str(Cricket)) 


Badminton=[]
n=int(input("\nEnter the no of student "))
print("\nEnter the students roll no who play badminton ")
for i in range(n):
  roll=int(input())
  Badminton.append(roll)
print("\n Original List of Students are" , str(Badminton))
Badminton=removeduplicate(Badminton)
print("\n list of student who play Badminton after remove duplicates", str(Badminton)) 


Football=[]
n=int(input("\nEnter the no of student "))
print("\nEnter the students roll no who play Football ")
for i in range(n):
  roll=int(input())
  Football.append(roll)
print("\n Original List of Students are" , str(Football))
Football=removeduplicate(Football)
print("\n list of student who play football after remove duplicates", str(Football))


 
def main():
  flag=1
  while(flag==1):
      print("\n ----------------Menu--------------------------- ")
      print("\n 1.List of students who play Cricket & Badminton both")
      print("\n2.List of students who play Cricket & Football but not Badminton ")
      print("\n3.List of students who either  play Cricket or Badminton but not both ")
      print("\n4.List of students who neither  play Cricket nor Badminton  ")

      ch=int(input("\nEnter the choice "))
      

      if ch==1:
          print("\n No of students who play cricket and Badminton both",CB(Cricket,Badminton))
          a=str(input("\nDo u want to continue "))
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")
     
      elif ch==2:
          print("\n No of students who play cricket & Football but not Badminton    ",CFnB(Cricket,Football,Badminton))
          a=int(input("\nDo u want to continue "))
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

      elif ch==3:
          print("\n No of students who either play cricket or Badminton but not both ",eCeB(Cricket,Badminton))
          a=int(input("\nDo u want to continue "))
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

      elif ch==4:
          print("\n No of students who neither play cricket nor Badminton  ",nCnB(Cricket,Badminton))
          a=int(input("\nDo u want to continue "))
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

      else:
           print("\n Wrong Choice")



main()

