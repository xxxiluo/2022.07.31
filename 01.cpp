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
	del_node(&head,10);//ɾ��num=10�Ľ��
	print_list(&head);
	insert_node(find_node(&head,11),100);//��num=18�Ľ������num=100���½��
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
	del_node(&head,5);//ɾ��num=5�Ľ��
	print_list(&head);
	insert_node(find_node(&head,8),10);//��num=8�Ľ������num=10���½��
	print_list(&head);
	sort(&head);
	print_list(&head);
	del_list(&head);
}
//*/