/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE exit_program FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
void exit_program(Node** list_head,char * filename){
/*print all data to the file named by user, and free all allocated memory*/
Node *traversePtr;
int num=0;
traversePtr=(*list_head);
file_written(*list_head,filename);
while(traversePtr!=NULL){
free(traversePtr);
traversePtr=traversePtr->next;


}




}
