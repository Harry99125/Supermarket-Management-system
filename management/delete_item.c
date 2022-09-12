/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  delete_item FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
void delete_item(Node ** list_head){/*this function can be called to delete nodes*/
Node *traversePtr;
Node *priorNode;
int i=0;
int num=0;
traversePtr=*list_head;
printf("Please enter the grocery item stock number you wish to delete, followed by enter: ");
scanf("%d",&num);
if(num==((* list_head)->grocery_item.stockNumber)){
traversePtr=(*list_head);
(*list_head)=traversePtr->next;

/*it the grocery item we are finding is at head, delete it*/
}
else{
while((traversePtr!=NULL)&&num!=(traversePtr->grocery_item.stockNumber)){
priorNode=traversePtr;
traversePtr=traversePtr->next;
if(traversePtr==NULL){
i=1;
printf("ERROR: Grocery item  stock number %d was not found in the list.\n",num);
/*if it's not at head, keep searching until find it, it we still not find it until last node, then print error message*/
}
}
if(traversePtr!=NULL){
priorNode->next=traversePtr->next;
/*delete node*/
}


}
if(i==0){
printf("Grocery item stock number %d was deleted.\n",num);
}
free(traversePtr);
}
