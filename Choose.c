#include"Choose.h"
#include<stdio.h>



//ѡ����
void choose() {
	Book* head;
	int flag;	//���ƹ���
	int i = 1;		//����ѭ��,��-1��ֹ

	while (i > 0) {
		printMenu();	//��ӡ�˵�
		scanf_s("%d", &flag);//ѡ����

		switch (flag) { //���������ֶ�Ӧ�˵����֣�ͨ��nȷ����������
		case 1://����
			printf("���� ������\n");
			head = create();
			break;
		case 2://����
			printf("���� ������\n");
			break;
		case 3://ɾ��
			printf("ɾ�� ������\n");
			break;
		case 4://�޸�
			printf("�޸� ������\n");
			break;
		case 5://����
			printf("���� ������\n");
			break;
		default:
			i = -1;	//����ѭ�����˳�����ϵͳ
			printf("\n�ɹ��˳�����ϵͳ��\n");
			break;
		}	
	}
}