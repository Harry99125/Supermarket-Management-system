/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  total_revenue FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
float total_revenue(Node * list_head){
Node *traversePtr;
float result=0;
traversePtr=list_head;
while(traversePtr!=NULL){
result+=((traversePtr->grocery_item.pricing.retailQuantity)*(traversePtr->grocery_item.pricing.retailPrice));
traversePtr=traversePtr->next;
}


return result;
}
