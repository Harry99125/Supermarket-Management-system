/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  print_inStock FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <string.h>
float print_inStock(Node * list_head){/*this function can print items in stock, it's float type because I want to make function pointer arrays as few as possible*/
float temp=0.0;
Node *traversePtr;
traversePtr=list_head;
printf("Grocery item in stock: \nStock#	Quantity\tDepartment\t\t\t\tItem\n");
while(traversePtr!=NULL){
if((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity)>0){
printf("%d\t%d\t\t%-30s%s\n",traversePtr->grocery_item.stockNumber,((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity)),(traversePtr->grocery_item.department),(traversePtr->grocery_item.item));

}
traversePtr=traversePtr->next;
}
return temp;
}
