#include <stdbool.h>		/* bool, true, false */

typedef struct node
{
  int num;
  bool visited;
  struct node *lchild;
  struct node *rchild;
} node;

typedef struct stack
{
  struct item *head;
} stack;

typedef struct item
{
  struct node *node;
  struct item *next;
} item;

node *make_node (int num, node * left, node * right);

void free_node (node * p);

void print_node (node * p);

void print_tree (node * p, int depth);

stack *recursiveDFT (node *root, stack *s);

void DFT (node * root);



void push (stack * topp, node * node);

bool isEmpty (stack * topp);

stack *pop (stack * topp);

void print_stack (item *item);
