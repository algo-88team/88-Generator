#pragma once

#ifndef  __CREATE_PUZ__ 
#define  __CREATE_PUZ__

#define MAXSIZE 300
using namespace std;

class Create_puzzle {
private:
	int frame[MAXSIZE][MAXSIZE] = {0,};
	int x;
	int y;
	int count; // blank�� �� ����
public:
	void init_frame(int(*map)[MAXSIZE], int length, int width, int count);  //�޾ƿ���
	void generate();    //�����
	void pass_frame();  //�ѱ��
	
};


 #endif // ! __CREATE_PUZ__ 