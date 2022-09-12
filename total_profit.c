/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  total_profit FILE FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
float total_profit(Node * list_head){
float result;
float current_inventory=investment(list_head);
float wholesale=wholesale_cost(list_head);
float revenue=total_revenue(list_head);/*get values from other functions*/	
result=revenue-wholesale+current_inventory;
/*calculate total_profit*/
return result;
}

