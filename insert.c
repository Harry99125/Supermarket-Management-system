/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  INSERT FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
void insert(Node ** list_head,Node * newNodePtr){
Node *priorNode;
Node *traversePtr;
traversePtr=*list_head;
if(*list_head==NULL){
*list_head=newNodePtr;
newNodePtr->next=NULL;/*if list is empty, put new node at the first*/
}
else {
if((newNodePtr->grocery_item.stockNumber)>=((* list_head)->grocery_item.stockNumber)){
newNodePtr->next=(*list_head);/*if new node's stock number larger than the first node's stock number, put new node first*/
(*list_head)=newNodePtr;

}
else{
while((traversePtr!=NULL)&&(traversePtr->grocery_item.stockNumber)>(newNodePtr->grocery_item.stockNumber)){
/*otherwise, we keep going forward and find the correct posistion*/
priorNode=traversePtr;
traversePtr=traversePtr->next;
}
newNodePtr->next=traversePtr;
priorNode->next=newNodePtr;

}
}
}
