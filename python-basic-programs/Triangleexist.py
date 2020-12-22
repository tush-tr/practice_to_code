print("enter the lengths of your triangle")
a = float(input("a="))
b = float(input("b="))
c = float(input("c="))
if a+b>c and a+c>b and b+c>a:
  print("the triangle exists")
else:
  print("triangle does not exist")
