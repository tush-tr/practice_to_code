#Create a calender Leap year program
import calendar as cl
x = cl.isleap(int(input("Enter the year you want to check leap or not")))
if x=="True":
  print("Year is leap")
else:
  print("year is not leap")

#month
year = int(input("enter the year"))
month = int(input("ënter the month no."))
print(cl.month(year,month))

year = int(input("enter the year"))
print(cl.calendar(year))

