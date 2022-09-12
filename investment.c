/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  investment FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
float investment(Node * list_head){
Node *traversePtr;
float result=0;
traversePtr=list_head;
while(traversePtr!=NULL){
result+=(((traversePtr->grocery_item.pricing.wholesaleQuantity)-(traversePtr->grocery_item.pricing.retailQuantity))*(traversePtr->grocery_item.pricing.wholesalePrice));/*get the investment by calculated as the sum of(wholesale price * (wholesale quantity – retail quantity))*/
traversePtr=traversePtr->next;
}
return result;
}
