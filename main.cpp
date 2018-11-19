#include <iostream>
#include <fstream>
#include "create_puzzle.h"
#include "create_blank.h"

#define MAXSIZE 300

using namespace std;

int main()
{
	int map[MAXSIZE][MAXSIZE] = { 0, };

	int width,length;
	int count = 0; // blank�� �� ����

	ifstream in("input.txt");

	//�� ������ �Է� 
	//����,���� ��
	//0 = ��, 1 = blank
	in >> length >> width;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			in >> map[i][j];
			if (map[i][j] == 1)
				count++;
		}
	}

	// �ܼ� ��� Ȯ�� 
	cout << length << width <<count <<  endl;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			cout << map[i][j];
		}cout << endl;
	}
	
	in.close();

	Create_puzzle test;
	test.init_frame(map, length, width, count);



	return 0;


}