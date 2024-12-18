def longestword():
  string= input("\nEnter the string ")
  i=0
  max_word=""
  while i<len(string):
      words = ""
      while i<len(string) and string[i]!=' ':
          words+=string[i]
          i+=1
          
      if len(words)>len(max_word):
         max_word= words
             
      if i==len(string):
            break
       
      while i<len(string) and string[i]==" ":
            i+=1
      
      
  print("\n Word with longest length ",max_word)
  print("\n Length of longest word ", len(max_word))
  return max_word


def char_freq():
   string= input("\nEnter the string ")
   char= input("\n Enter the character ")
   count=0
   for i in range(len(string)):
      if(string[i]== char):
          count+=1
   
   print("\n Frequency of character is ", count)


def palidrome():
   string= input("\n Enter the string ")
   b=0
   e= len(string)-1
   while b<e:
     if(string[b]!= string[e]):
        print("\n String is not palidrome ")

     else:
        b+=1
        e-=1
   
   print("\n String is palidrome ")


def first_app():
    string= input("\nEnter the main string ")
    substring= input("\nEnter the substring string ")
    L1= len(string)
    L2= len(substring)
    if(L1>=L2):
        for i in range(L1-L2+1):
            flag=1
            for j in range(L2):
               if(string[i+1]!= substring[j]):
                   flag=0
                   break
            if flag==1:
                print("\n First apperance of string is at ", i)
        
        if(flag==0):
           print("\n First apperance not found ")
     
    else:
        print("\n Substring greater than string ")


def occurance():
  string= input("\nEnter the string ")
  i=0
  word_list=[]
  count=[]
  while i<len(string):
      words=""
      while i<len(string) and string[i]!=" ":
          words+=string[i]
          i+=1
      
       

      if len(word_list)==0:
          word_list.append(words)
          count.append(1)
     

      else:  
          flag=1                 
          for j in range(len(word_list)):
              if word_list[j]== words:
                  count[j]+=1
                  flag=0
                  break
                  
          if flag==1:        
            word_list.append(words)
            count.append(1)

      if i==len(string):
          break
      

      while i<len(string) and string[i]==" ":
          i+=1

  for i in range(len(word_list)):
     print(word_list[i] , ": ", count[i])



 

def main():
  flag=1
  while flag==1:
     print("\n 1. To display word with the longest length ")
     print("\n 2. To determines the frequency of occurrence of particular character in the string ") 
     print("\n 3.To check whether given string is palindrome or not")
     print("\n 4.To display index of first appearance of the substring" )
     print("\n 5.To count the occurrences of each word in a given string " )

     ch= int(input("\n Enter the choice "))
     
     if ch==1:
         longestword()
         
     elif ch==2:
         char_freq()
  
     elif ch==3:
         palidrome()

     elif ch==4:
         first_app()

     elif ch==5:
         occurance()



main()



   