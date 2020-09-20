#include "singly_linked_list.h"

/*************************************************************************
*functionname:  Create_linked_table_header
*arguments:     void
*return:        NODE *h
*explain:       创建链表表头函数，返回值是链表表头的指针
*************************************************************************/
NODE *Create_linked_table_header(void)
{
    NODE *h = (NODE *)malloc(sizeof(NODE));
    if(NULL == h)
    {
        printf("malloc error!\n");
        return NULL;
    }

    enter_the_linked_list_node_information(h);

    h->next = NULL;
    return h;
}

/*************************************************************************
*functionname:  find_the_end_of_the_list
*arguments:     NODE *h
*return:        NODE *p
*explain:       找到链表表尾函数，返回值为找到的链表表尾指针，参数
*               为链表表头指针
*************************************************************************/
NODE *find_the_end_of_the_list(NODE *h)
{
    NODE *p = h;
    while(p->next != NULL)
    {
        p = p->next;
    }
    return p;
}

/*************************************************************************
*functionname:  enter_the_linked_list_node_information
*arguments:     NODE *p
*return:        void
*explain:       输入链表节点信息，参数为链表节点的指针
*************************************************************************/
void enter_the_linked_list_node_information(NODE *p)
{
    printf("please enter the number:");
    scanf("%d",p->stu.number);
    printf("please enter the name:");
    scanf("%d",p->stu.name);
    printf("please enter the number:");
    scanf("%d",p->stu.score);
    printf("enter complete!\n");
}

/*************************************************************************
*functionname:  create_new_linked_list_node
*arguments:     void
*return:        NODE *p
*explain:       创建一个新的链表节点，并输入节点的信息，返回值为
*               新创建的节点的指针
*************************************************************************/
NODE *create_new_linked_list_node(void)
{
    NODE *p = (NODE *)malloc(sizeof(NODE));
    if(NULL == p)
    {
        printf("malloc error!\n");
        return NULL;
    }

    enter_the_linked_list_node_information(p);

    return p;
}

/*************************************************************************
*functionname:  add_linked_list_node_from_the_header
*arguments:     NODE *h，NODE *p
*return:        NODE *
*explain:       从链表头部添加节点的函数，,返回值为新的表头指针，
*               参数一为链表表头指针，参数二为要添加的节点的指针
*************************************************************************/
NODE *add_linked_list_node_from_the_header(NODE *h,NODE *p)
{
    p->next = h;
    return p;
}

/*************************************************************************
*functionname:  add_linked_list_node_from_the_tail
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/
void add_linked_list_node_from_the_tail(NODE *h,NODE *p)
{
    NODE *q = find_the_end_of_the_list(h);
    q->next = p;
    p->next = NULL;
}

/*************************************************************************
*functionname:  inserts_node_after_the_node_specified_in_the_linked_list
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  Deletes_the_specified_linked_list_node
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  sort_the_linked_list
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  iterate_over_the_linked_list
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       对链表进行遍历，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  modify_the_linked_list_node_information
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  look_up_the_linked_list_node
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/

/*************************************************************************
*functionname:  delete_linked_list
*arguments:     NODE *h，NODE *p
*return:        void
*explain:       从链表表尾添加节点的函数，参数一为链表表头指针，参数
*               二为要添加的节点的指针
*************************************************************************/