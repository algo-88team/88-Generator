#include <iostream> 
#include "create_puzzle.h"

void Create_puzzle::init_frame(int(*map)[MAXSIZE], int length, int width, int count) {
	
	//위아래,양옆 0으로 덮어 연산을 편하게 뚠뚠

	//인공의 벽을 만들어줘야 하나? 해줘야되나 모르겠는데 우선 하다가 필요없으면 빼겠습니다

	cout << length << width << endl;
	
	//사이즈 추가
	y = length + 2;
	x = width + 2; 
	
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			
			frame[i + 1][j + 1] = map[i][j];
		}
	}

	//출력 확인
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cout << frame[i][j];
		}cout << endl;
	}

	cout << count << endl;
}

void Create_puzzle::generate() {
	
	
	/*1.랜덤 시작점 선택
	  2.랜덤 시작점부터 연속된 숫자 채워넣기
	  3.모든 길이 막히면 1번 다시 실행
	  4.모든 번호가 채워지면 함수 종료 */
}

void Create_puzzle::pass_frame() {

}