/*
 * Search an expression using DFS.
 */

#include <stdio.h>		/* scanf, printf */
#include <stdlib.h>		/* abort */
#include <stdbool.h>		/* bool, true, false */
#include "..\include\dfs.h"


void DFT (node * root)
{
  stack* s = malloc (sizeof(stack));
  s->head = NULL;

  s = recursiveDFT (root, s);
  print_stack (s->head);

  return;

}

stack *recursiveDFT (node *root, stack *s)
{
  push(s, root);

  if (root->lchild)
  {
    recursiveDFT (root->lchild, s);
  }
  if (root->rchild)
  {
    recursiveDFT (root->rchild, s);
  }
 return s;
}

node *make_node (int num, node * left, node * right)
{
  node *p = malloc(sizeof(node));
  p->lchild = left;
  p->rchild = right;
  p->num = num;
  p->visited = 0;
  return p;
}

void free_node (node * p)
{
	if (p->visited == 1)
    free (p);
  else
  {
    free_node (p->lchild);
    free_node (p->rchild);
    free(p);
  }
}


void print_node (node * p)
{

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("%d", p->num);
}


void print_tree (node * p, int depth)
{
  for (int i = 0; i < depth; i = i + 1)
    printf (" ");
  printf ("| ");

  if (p == NULL)
    printf ("NULL\n");
  else
    printf ("[%d]\n", p->num);


  if (p->lchild)
    {
      print_tree (p->lchild, depth + 1);
    }

  if (p->rchild)
    print_tree (p->rchild, depth + 1);
}

void push (stack * topp, node * node)
{
  item* element = malloc (sizeof(item));
 if (isEmpty (topp))
 {
   element->next = NULL;
 }
 else 
 {
   element->next = topp->head;
 }
   element->node = node;
   topp->head = element;

   return;
}


bool isEmpty (stack * topp)
{
 if (topp->head == NULL)
 {
   return true;
 }
 else
 {
   return false;
 }
}

// Utility function to pop topp  
// element from the stack 

stack *pop (stack * topp)
{
	return 0;
}

void print_stack (item *item)
{
  if (item->next == NULL)
  {
    printf ("%d, ", item->node->num );
  }
  else 
  {
    print_stack (item->next);
    printf ("%d, ", item->node->num );
  }
  return;
}
