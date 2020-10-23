
my_str=input("\n\nenter a string\n\n")
rev_str=""
for i in range(len(my_str)-1,-1,-1):
   rev_str=rev_str+my_str[i]
if list(my_str) == list(rev_str):
   print("The string is a palindrome.")
else:
   print("The string is not a palindrome.")