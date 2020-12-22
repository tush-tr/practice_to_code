# Check the greatest number of 3 numbers
a = int(input("enter the number1:"))
b = int(input("Enter the number2"))
c = int(input("enter the number3"))
print("the maximum number is:",end="")
if b<= a >=c:
  print(a)
elif c<= b >=a:
  print(b)
elif a<= c >=b:
  print(c)
