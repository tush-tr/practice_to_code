def leap_year(y):
    year = False
    if(y%100 == 0):
        if(y%400 == 0):
            year = True
    else:
        if(y%4 == 0):
            year = True
    return year
i = int(input("Enter the year")
print(leap_year(i))
