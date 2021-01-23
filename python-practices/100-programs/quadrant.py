#9.How to determine the quadrant of a point
x = float(input("enter the coordinate of point x:"))
y = float(input("enter the coordinate of point y:"))
if x>0 and y>0:
  print("the first quadrant")
elif x<0 and y>0:
  print("the second quadrant")
elif x<0 and y<0:
  print("third quadrant")
elif x>0 and y<0:
  print("fourth quadrant")
else:
  print("point is at zero")
