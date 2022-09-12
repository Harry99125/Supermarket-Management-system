
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
int main(int argc,char *argv[]){
int converted_day;
Node *list_head = NULL; 
int day,month,year;
int current_day,current_month,current_year;
int difference;
FILE *input;
if(argv[3]=='\0'||argv[2]=='\0'||argv[1]=='\0'||argv[0]=='\0'){/*if there's some problem with command line, print usage to user*/
printf("Error:lack of arguments\n");
exit(0);
}

sscanf(argv[1],"%d/%d/%d",&current_month,&current_day,&current_year);

converted_day=date(current_day,current_month,current_year);
input = fopen(argv[2], "r");
fscanf(input,"%d\t%d",&day,&year);
day_difference(day,year,converted_day,current_year);
/*get the day difference between current date and date*/

list_head=read_file(argv[2],input,list_head);
user(list_head,argv[3]);


return 0;
}

