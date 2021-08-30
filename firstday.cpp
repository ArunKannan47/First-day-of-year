#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,leap_year,remaining_year,day,total_days,basic_year=1900;
    cin>>year;
    year=(year-1)-basic_year;
    leap_year=year/4;
    remaining_year=year-leap_year;
    total_days=(remaining_year*365)+(leap_year*366)+1;
    day=total_days%7;
    
    if(day==0)
    cout<<"Monday";
else if(day==1)
cout<<"Tuesday";
else if(day==2)
cout<<"Wednesday";
else if(day==3)
cout<<"Thursday";
else if(day==4)
cout<<"Friday";
else if(day==5)
cout<<"Saturday";
else if(day==6)
cout<<"Sunday";
else
printf("Invalid Entry");
return 0;
    
}
