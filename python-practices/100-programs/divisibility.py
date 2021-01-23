# Check the divisibility of any number
x = int(input("enter the number:"))
y = int(input("Enter the dominator"))
z = x%y
if z ==0:
  print(x, "is divisible by ",y)
else:
  print("not divisible")
