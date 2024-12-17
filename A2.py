def average(marklist):
   sum=0
   count=0
   for i in marklist:
      if i!= -999:
         sum+=i
         count=count+1
   if count>0:
      avg=sum/count
   else:
      avg=0
   print("\nAverage marks is ", avg)


def highest(marklist):
    max_marks= -999
    for mark in marklist:
        if mark!=-999 and mark>max_marks:
           max_marks= mark

    print("\n Highest marks is ",max_marks)


def lowest(marklist):
    low_marks= 999
    for mark in marklist:
        if mark!=999 and mark<low_marks:
           low_marks= mark

    print("\n Lowest marks is ",low_marks)


def absent(marklist):
    count=0
    for mark in marklist:
        if mark==0:
           count+=1
    
    print("\n Absent Count is ", count)


def MaxFreq(marklist):
    i=0
    max=0
    for j in marklist:
        if(marklist.index(j)==i):
           print(j," | " ,marklist.count(j))
           if marklist.count(j)>max:
              max= marklist.count(j)
              mark=j
        i+=1
    print(mark,max)


marksinFDS=[]
n= int(input("\nEnter the total no of students "))
for i in range(n):
    marks=int(input("\n Enter the marks of each student "))
    marksinFDS.append(marks)


def main():
   flag=1
   while flag==1:
     print("\n ----------------Menu--------------------------- ")
     print("\n 1.Average")
     print("\n2.Highest Marks ")
     print("\n3.Lowest Marks ")
     print("\n4.Absent Count ")
     print("\n5. Max Frequency ")

     ch= int(input("\nEnter the choice "))
     
     if ch==1:
          average(marksinFDS)
          a=input("\nDo u want to continue ")
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

     elif ch==2:
          highest(marksinFDS)
          a=input("\nDo u want to continue ")
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")
  
     elif ch==3:
          lowest(marksinFDS)
          a=input("\nDo u want to continue ")
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

     
     elif ch==4:
          absent(marksinFDS)
          a=input("\nDo u want to continue ")
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

     elif ch==5:
          highest(marksinFDS)
          a=input("\nDo u want to continue ")
          if a== "yes":
             flag=1
          else:
             flag=0
             print("\n End")

     else:
          print("\nWrong CHoice")


main()


        
