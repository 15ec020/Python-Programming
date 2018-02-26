num=int(input())
factorial=1
if(num<0):
 print("factorial value does not exist")
else:
 for i in range(1,num+1):
  factorial=factorial*i
  print("the value is",factorial)
    
