/** Baekjoon Online Judge
*   Problem No. 11721
*   열 개씩 끊어 출력하기
*   Writed by Rush.K
*   scanf 사용해보기
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main() { // Case 1 : 원래 생각했던 방식, 미리 입력받고, 10개씩 끊어 출력
	int printNum;
	string input;
	getline(cin, input);
	printNum = input.size() % 10 == 0 ? input.size() / 10 : input.size() / 10 + 1;

	for (int i = 0; i < printNum; i++) {
		for (int j = 10 * i; j < 10 * i + 10; j++) {
			if (j >= input.size()) break;
			else cout << input.c_str()[j];
		}
		cout << endl;
	}
}


/*
int main() { // Case 2 : 숏코딩, scanf 이용
	char input[101];
	while (~scanf("%10s", input)) {
		printf("%s\n", input);
	}
}
*/