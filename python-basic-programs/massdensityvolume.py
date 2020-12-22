#Calculate Mass, Density and volume
mdv = input("enter what you want to calculate m for mass,d for density,v for volume")
if mdv=="m":
  d = float(input("Enter density:"))
  v = float(input("Enter volume"))
  result = d*v # this is formula for mass
  print("Mass is ", result)
elif mdv=="d":
  m = float(input("Enter mass:"))
  v = float(input("enter the volume:"))
  result=m/v
  print("Density is:",result)
else:
  m = float(input("enter the mass:"))
  d = float(input("enter the density:"))
  result = m/d
  print("Volume is :",result)
