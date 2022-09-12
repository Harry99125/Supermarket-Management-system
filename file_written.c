/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  file_written FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
void file_written(Node*list_head,char*filename){/* print data to the file*/
FILE * output;
int i=0;
Node * traversePtr=list_head;
output=fopen(filename,"w+");
while(traversePtr!=NULL){
fprintf(output,"%s\t%s\t%d\t%.2f\t%.2f\t%d\t%d\n",(traversePtr->grocery_item.item),(traversePtr->grocery_item.department),(traversePtr->grocery_item.stockNumber),(traversePtr->grocery_item.pricing.retailPrice),(traversePtr->grocery_item.pricing.wholesalePrice),(traversePtr->grocery_item.pricing.retailQuantity),(traversePtr->grocery_item.pricing.wholesaleQuantity));/*keep printing data from every nodes in the list*/


traversePtr=traversePtr->next;
i++;
}

fclose(output);
printf("A total of %d grocery item records were written to file \"%s\".",i,filename);
}

