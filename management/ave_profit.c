/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  average profit FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
float ave_profit(Node * list_head){
Node *traversePtr;
float result=0;
float totalP=total_profit(list_head);
float totalS=total_sales(list_head);
traversePtr=list_head;
while(traversePtr!=NULL){
result=(totalP/totalS);/*calculate average profit*/
traversePtr=traversePtr->next;
}


return result;
}
