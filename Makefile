# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
#THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
#RESPECT TO THIS ASSIGNMENT.
#THIS IS THE MAKEFILE FOR LAB 4.
# Name: Zening Teng
# comments in a Makefile start with sharp 

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c

all: lab4.zip lab4

# this target is the .zip file that must be submitted to Carmen
lab4.zip: Makefile lab4main.c read_file.c day_difference.c date.c create_node.c getDataForNode.c insert.c print_inStock.c print_outStock.c total_revenue.c wholesale_cost.c investment.c total_profit.c total_sales.c ave_profit.c department_print.c add_item.c delete_item.c user.c exit_program.c  check_exist.c file_written.c lab4Readme lab4.h
	zip lab4.zip Makefile lab4main.c read_file.c day_difference.c date.c create_node.c getDataForNode.c insert.c print_inStock.c print_outStock.c total_revenue.c wholesale_cost.c investment.c total_profit.c total_sales.c ave_profit.c department_print.c add_item.c delete_item.c user.c exit_program.c  check_exist.c file_written.c lab4Readme lab4.h
 


lab4: lab4main.o read_file.o day_difference.o date.o create_node.o getDataForNode.o insert.o print_inStock.o print_outStock.o total_revenue.o wholesale_cost.o investment.o total_profit.o total_sales.o ave_profit.o department_print.o add_item.o delete_item.o user.o exit_program.o  check_exist.o file_written.o

	gcc lab4main.o read_file.o day_difference.o date.o create_node.o getDataForNode.o insert.o print_inStock.o print_outStock.o total_revenue.o wholesale_cost.o investment.o total_profit.o total_sales.o ave_profit.o department_print.o add_item.o delete_item.o user.o exit_program.o  check_exist.o file_written.o -g -o lab4


lab4main.o: lab4main.c lab4.h
	gcc $(gcc_opt) -o lab4main.o lab4main.c
read_file.o:read_file.c lab4.h
	gcc $(gcc_opt) -o read_file.o read_file.c
day_difference.o:day_difference.c lab4.h
	gcc $(gcc_opt) -o day_difference.o day_difference.c
date.o:date.c lab4.h
	gcc $(gcc_opt) -o date.o date.c
insert.o:insert.c lab4.h
	gcc $(gcc_opt) -o insert.o insert.c
getDataForNode.o:getDataForNode.c lab4.h
	gcc $(gcc_opt) -o getDataForNode.o getDataForNode.c
create_node.o:create_node.c lab4.h
	gcc $(gcc_opt) -o create_node.o create_node.c
print_inStock.o:print_inStock.c lab4.h
	gcc $(gcc_opt) -o print_inStock.o print_inStock.c
print_outStock.o:print_outStock.c lab4.h
	gcc $(gcc_opt) -o print_outStock.o print_outStock.c
total_revenue.o:total_revenue.c lab4.h
	gcc $(gcc_opt) -o total_revenue.o total_revenue.c
wholesale_cost.o:wholesale_cost.c lab4.h
	gcc $(gcc_opt) -o wholesale_cost.o wholesale_cost.c
investment.o:investment.c lab4.h
	gcc $(gcc_opt) -o investment.o investment.c
total_profit.o:total_profit.c lab4.h
	gcc $(gcc_opt) -o total_profit.o total_profit.c
total_sales.o:total_sales.c lab4.h
	gcc $(gcc_opt) -o total_sales.o total_sales.c
ave_profit.o:ave_profit.c lab4.h
	gcc $(gcc_opt) -o ave_profit.o ave_profit.c
department_print.o:department_print.c lab4.h
	gcc $(gcc_opt) -o department_print.o department_print.c
add_item.o:add_item.c lab4.h
	gcc $(gcc_opt) -o add_item.o add_item.c
delete_item.o:delete_item.c lab4.h
	gcc $(gcc_opt) -o delete_item.o delete_item.c
user.o:user.c lab4.h
	gcc $(gcc_opt) -o user.o user.c
exit_program.o:exit_program.c lab4.h
	gcc $(gcc_opt) -o exit_program.o exit_program.c
check_exist.o:check_exist.c lab4.h
	gcc $(gcc_opt) -o check_exist.o check_exist.c
file_written.o:file_written.c lab4.h
	gcc $(gcc_opt) -o file_written.o file_written.c
# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab4 lab4.zip

