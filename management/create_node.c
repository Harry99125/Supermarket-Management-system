/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  CreateNode FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
Node * create_node(FILE* input){

Node *newNodePtr;

newNodePtr = (Node*)malloc(sizeof(Node));/*allocate memory*/
if(newNodePtr!=NULL){

newNodePtr->next=NULL;

newNodePtr=getDataForNode(newNodePtr,input);
}
else{
printf("storage not allocated");/*if fail to allocate, print error message and quit*/
exit(0);
}

return newNodePtr;
}
