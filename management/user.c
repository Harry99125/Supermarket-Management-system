/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE user file FOR LAB 4.
∙ Name: Zening Teng*/
#include <stdio.h>
#include "lab4.h"
#include <stdlib.h>
#include <string.h>
void user(Node* list_head,char*filename){/*this function ask options*/
int input=0;
float(*fp_array[9])(Node*list_head)={total_revenue,wholesale_cost,investment,total_profit,total_sales,ave_profit,print_inStock,print_outStock,department_print};
void(*v_array1[2])(Node**list_head)={add_item,delete_item};
void(*v1_array1[1])(Node**list_head,char*filename)={exit_program};
char* statement[10]={"Total revenue:$%.2f\n","Total wholesale cost:$%.2f\n","Total wholesale investment:$%.2f\n","Total profit:$%.2f\n","Total number of grocery items sold:$%.f\n","Average profit:$%.2f\n"};
printf("Please enter an integer between 1 and 12:\n 1)  Print Total Revenue \n2)  Print Total Wholesale Cost\n3)  Print Current Grocery Item Investment\n4)  Print Current Profit\n5)  Print Total Number of Grocery Items Sold\n6)  Print Average Profit per Grocery Item\n7)  Print Grocery Items In Stock\n8)  Print Out of Stock Grocery Items\n9)  Print Grocery Items for a Department\n10) Add Grocery Item to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n");
printf("Option:");
scanf("%d",&input);
input--;
while(input!=11){



if(input==10|| input==9){

(*v_array1[input-9])(&list_head);
}

/*for option1-9 use function pointer array to call the functions to get the value,then send them to data_information function to print complete statements*/
else{printf((statement[input]),(*fp_array[input])(list_head));

}


printf("Please enter an integer between 1 and 12:\n1)  Print Total Revenue\n2)  Print Total Wholesale Cost\n3)  Print Current Grocery Item Investment\n4)  Print Current Profit\n5)  Print Total Number of Grocery Items Sold\n6)  Print Average Profit per Grocery Item\n7)  Print Grocery Items In Stock\n8)  Print Out of Stock Grocery Items\n9)  Print Grocery Items for a Department\n10) Add Grocery Item to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n");
printf("Option:");
scanf("%d",&input);
input--;
}
v1_array1[0](&list_head,filename);
}





