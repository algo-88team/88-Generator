#include <iostream> 
#include "create_puzzle.h"

void Create_puzzle::init_frame(int(*map)[MAXSIZE], int length, int width, int count) {
	
	//���Ʒ�,�翷 0���� ���� ������ ���ϰ� �Ӷ�

	//�ΰ��� ���� �������� �ϳ�? ����ߵǳ� �𸣰ڴµ� �켱 �ϴٰ� �ʿ������ ���ڽ��ϴ�

	cout << length << width << endl;
	
	//������ �߰�
	y = length + 2;
	x = width + 2; 
	
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			
			frame[i + 1][j + 1] = map[i][j];
		}
	}

	//��� Ȯ��
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cout << frame[i][j];
		}cout << endl;
	}

	cout << count << endl;
}

void Create_puzzle::generate() {
	
	
	/*1.���� ������ ����
	  2.���� ���������� ���ӵ� ���� ä���ֱ�
	  3.��� ���� ������ 1�� �ٽ� ����
	  4.��� ��ȣ�� ä������ �Լ� ���� */
}

void Create_puzzle::pass_frame() {

}