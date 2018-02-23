#python code goes here
#python version :3 
yr=int(input())
if(yr%400==0):
 print("leap yr")
elif(yr%100==0):
 print("not a leap year")
elif(yr%4==0):
 print("a leap year")
else:
 print("not a leap year")
