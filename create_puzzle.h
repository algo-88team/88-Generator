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
	int count; // blank의 총 갯수
public:
	void init_frame(int(*map)[MAXSIZE], int length, int width, int count);  //받아오고
	void generate();    //만들고
	void pass_frame();  //넘기고
	
};


 #endif // ! __CREATE_PUZ__ 