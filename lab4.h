/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
RESPECT TO THIS ASSIGNMENT.
THIS IS THE  Lab4.h file FOR LAB 4.
∙ Name: Zening Teng*/
struct Cost {
float wholesalePrice;
float retailPrice;
int wholesaleQuantity;
int retailQuantity; 
};
struct Data {
char item[50];
char department[30];
int stockNumber;
struct Cost pricing;
};
typedef struct Node {
struct Data grocery_item;
struct Node *next;
} Node;

int day_difference(int day,int year, int current_day,int current_year);
Node* read_file(char* filename ,FILE*input,Node * list_head);
int date(int day,int month,int year);
void insert(Node **list_head_ptr, Node *newNodePtr);
Node * create_node(FILE* input);
Node* getDataForNode(Node * newNodePtr,FILE* input);
void insert(Node ** list_head,Node * newNodePtr);
float print_inStock(Node * list_head);
float print_outStock(Node *list_head);
float total_revenue(Node *list_head);
float wholesale_cost(Node *list_head);
float investment(Node *list_head);
float total_profit(Node *list_head);
float total_sales(Node * list_head);
float ave_profit(Node *list_head);
float department_print(Node*list_head);
void add_item(Node** list_head);
void delete_item(Node ** list_head);
void user(Node* list_head,char*filename);
void exit_program(Node** list_head,char*filename);
int check_exist(Node*list_head,Node* newNodePtr);
void file_written(Node*list_head,char*filename);
