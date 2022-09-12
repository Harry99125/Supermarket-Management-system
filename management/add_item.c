/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  add_item FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
void add_item(Node** list_head){

Node *newNodePtr;
newNodePtr = (Node*)malloc(sizeof(Node));

if(newNodePtr!=NULL){
newNodePtr->next=NULL;
printf("Enter grocery item name: \n");
scanf(" %[^\n]",(newNodePtr->grocery_item.item));
printf("Enter department: \n");
scanf(" %[^\n]",(newNodePtr->grocery_item.department));
printf("Enter item stock number: \n");
scanf("%d",(&newNodePtr->grocery_item.stockNumber));
printf("Enter item retail price: \n");
scanf("%f",(&newNodePtr->grocery_item.pricing.retailPrice));
printf("Enter item wholesale price: \n");
scanf("%f",(&newNodePtr->grocery_item.pricing.wholesalePrice));
printf("Enter item retail quantity: \n");
scanf("%d",(&newNodePtr->grocery_item.pricing.retailQuantity));
printf("Enter item wholesale quantity: \n");
scanf("%d",(&newNodePtr->grocery_item.pricing.wholesaleQuantity));
}
else{
printf("storage not allocated");
exit(0);
}
if(check_exist(*list_head, newNodePtr)==0){/*if no same stock number in the list, insert the node*/
insert(list_head, newNodePtr);

}
else{/*else, free the node and print error message*/
free(newNodePtr);
printf("sorry,item with stock number %d already in the inventory\n",(newNodePtr->grocery_item.stockNumber));
}



}
