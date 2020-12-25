#include<stdio.h>
void showday(int day){
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
}
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    year = (year-1)-1900;
    int leap_years,total_days,non_leap_years;
    leap_years = year/4;
    non_leap_years = year - leap_years;
    total_days = (leap_years*366)+(non_leap_years*365)+1;
    int day = total_days%7;
    showday(day);


    return 0;
}