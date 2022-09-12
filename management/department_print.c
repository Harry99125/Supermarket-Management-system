/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  department_print FILE FOR LAB 4.
∙ Name: Zening Teng*/
#define _GNU_SOURCE
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
#include <string.h>
float department_print(Node * list_head){/*print all items in a department.it's in float type because I want to make as few function pointer arrays as possible*/
float temp;
Node *traversePtr;
char* department;
department=malloc(30*sizeof(char));
traversePtr=list_head;
printf("Enter department name to print: ");
scanf("%s",department);
printf("Grocery item list for:%s\n Stock#	Quantity\tDepartment\t\t\t\tItem\n",department);
while(traversePtr!=NULL){
if(strcasestr((traversePtr->grocery_item.department),department)!=NULL){
printf("%d\t%d\t\t%-30s%s\n",traversePtr->grocery_item.stockNumber,((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity)),traversePtr->grocery_item.department, traversePtr->grocery_item.item);

}
traversePtr=traversePtr->next;
}
free(department);
return temp;
}
