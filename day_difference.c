/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE day_difference File FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
int day_difference(int day,int year, int current_day,int current_year){/*this function is to calculate day difference between date in the input file and date from command line*/
int difference=current_day-day;

for(year;year<=current_year-1;year++){
if((year%4==0&&year%100!=0)||(year%400==0)){/*if year can be module by 4 and can't be module by 100, or it can be module by 400, then it's leap year*/
difference+=366;
}
else{
difference+=365;
}
}
printf("There are %d days difference between the date entered and the date in the file.Do you wish to continue?(Enter n to quit,enter any key to continue)",difference);
return difference;
}
