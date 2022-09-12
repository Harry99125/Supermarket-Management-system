/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE read_file FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
#include <string.h>
Node* read_file(char* filename ,FILE*input,Node * list_head){/*this function can read file and construct linked list*/
Node *newNodePtr;	
int i=0;
char yes_or_no;
scanf("%c",&yes_or_no);
if(yes_or_no=='n'){
exit(0);
}
else{
printf("Reading inventory from file \"%s\"\n ",filename);
while(1){
if((newNodePtr=create_node(input))==NULL){

break;

}
insert(&list_head,newNodePtr);
i++;

}

printf("A total of %d grocery items were read into inventory from the file \"%s\".\n",i,filename);	

fclose(input);

return list_head;
}
}





