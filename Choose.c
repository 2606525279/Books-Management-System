#include"Choose.h"
#include<stdio.h>


//ѡ����
void choose() {
	Book* head = NULL;
	int flag;	//���ƹ���
	int i = 1;		//����ѭ��,��-1��ֹ

	while (i > 0) {
		printMainMenu();	//��ӡ�˵�
		scanf_s("%d", &flag);//ѡ����

		switch (flag) { //���������ֶ�Ӧ�˵����֣�ͨ��nȷ����������
		case 1://����
			head = create();
			break;
		case 2://����
			insert(head);
			break;
		case 3://ɾ��
			del(head);
			break;
		case 4://�޸�
			mod(head);
			break;
		case 5://����
			printBook(head);
			break;
		default:
			i = -1;	//����ѭ�����˳�����ϵͳ
			printf("\n�ɹ��˳�����ϵͳ��\n");
			break;
		}	
	}
}