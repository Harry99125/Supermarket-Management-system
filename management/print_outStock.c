/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  print_outStock FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
float print_outStock(Node * list_head){/*this function is to print item out of stock, it's in float type because I want to make function pointer arrays as few as possible*/
Node *traversePtr;
float temp=0.0;
int i=0;
traversePtr=list_head;
printf("Grocery item out of stock: \nStock#	Quantity	Department\t\t\t\tItem\n");
while(traversePtr!=NULL){
if((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity)==0&&(traversePtr->grocery_item.stockNumber)!=0){
printf("%d\t%d\t\t%-30s%s\n",traversePtr->grocery_item.stockNumber,((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity)),(traversePtr->grocery_item.department),(traversePtr->grocery_item.item));
i=1;
}
traversePtr=traversePtr->next;
}
if(i==0){
printf("great, nothing out of stock\n");
}
return temp;
}
