num=str(input())
rev_num = reversed(num) 
if list(num) == list(rev_num): 
  print("palindrome")
else:
  print("not a palindrome")
