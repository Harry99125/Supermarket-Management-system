/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  GETDATAFORNODE FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
Node* getDataForNode(Node * newNodePtr,FILE* input){

/*this function read lines in file and put data into the new node*/
if(((fscanf(input," %[^\t]",(newNodePtr->grocery_item.item)))!=EOF)&&((newNodePtr->grocery_item.item)!=NULL)){
fscanf(input," %[^\t]\t%d\t%f\t%f\t%d\t%d", (newNodePtr->grocery_item.department),(&newNodePtr->grocery_item.stockNumber),(&newNodePtr->grocery_item.pricing.retailPrice),(&newNodePtr->grocery_item.pricing.wholesalePrice),(&newNodePtr->grocery_item.pricing.retailQuantity),(&newNodePtr->grocery_item.pricing.wholesaleQuantity));/*put all data into node from input file*/
}
else{
free(newNodePtr);/*if we reach eof, free memory first then return a null node*/
newNodePtr=NULL;
}
return newNodePtr;
}
