/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE date File FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
int date(int day,int month,int year){
int i;
int result=0;
int leap[]={31,29,31,30,31,30,31,31,30,31,30,31};
int non_leap[]={31,28,31,30,31,30,31,31,30,31,30,31};

if((year%4==0&&year%100!=0)||(year%400==0)){/*this function is to convert mm/dd/yy to dd/yy*/
for(i=0;i<month-1;i++){
result+=leap[i];
}


}

else{
for(i=0;i<month-1;i++){
result+=non_leap[i];

}

}

result+=day;

return result;
}
