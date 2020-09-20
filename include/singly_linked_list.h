#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int number;
    char name[10];
    short score;
}STU;

typedef struct node
{
    STU stu;
    struct node *next;
}NODE,*NODE_LIST;

NODE *Create_linked_table_header(void);
NODE *find_the_end_of_the_list(NODE *h);
void enter_the_linked_list_node_information(NODE *p);
NODE *create_new_linked_list_node(void);
NODE *add_linked_list_node_from_the_header(NODE *h,NODE *p);
void add_linked_list_node_from_the_tail(NODE *h,NODE *p);




#endif