/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  check_exist FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
int check_exist(Node * list_head,Node* newNodePtr){/*this function can check if new node has same stock number with some items in the list*/
Node *traversePtr;
int result=0;
traversePtr=list_head;
while(traversePtr!=NULL){
if((traversePtr->grocery_item.stockNumber)==(newNodePtr->grocery_item.stockNumber)){/*if we find it, result=1*/
result=1;
}
traversePtr=traversePtr->next;
}


return result;
}
