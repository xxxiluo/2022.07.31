#include<stdio.h>

/*/
#include"List_1.h"

int main()
{
	int i;
	struct Node head;
	head.num=0;
	head.next=NULL;
	for(i=1;i<15;i++) add_node(&head,i);
	print_list(&head);
	del_node(&head,10);//删除num=10的结点
	print_list(&head);
	insert_node(find_node(&head,11),100);//在num=18的结点后插入num=100的新结点
	print_list(&head);
	sort(&head);
	print_list(&head);
	del_list(&head);
}
//*/
//*/
#include"List_2.h"

int main()
{
	int i;
	struct Node head;
	head.num=0;
	head.pre=NULL;
	head.next=NULL;
	for(i=1;i<10;i++) add_node(&head,i);
	print_list(&head);
	del_node(&head,5);//删除num=5的结点
	print_list(&head);
	insert_node(find_node(&head,8),10);//在num=8的结点后插入num=10的新结点
	print_list(&head);
	sort(&head);
	print_list(&head);
	del_list(&head);
}
//*/