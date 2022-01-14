/** Baekjoon Online Judge
*   Problem No. 11721
*   �� ���� ���� ����ϱ�
*   Writed by Rush.K
*   scanf ����غ���
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main() { // Case 1 : ���� �����ߴ� ���, �̸� �Է¹ް�, 10���� ���� ���
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
int main() { // Case 2 : ���ڵ�, scanf �̿�
	char input[101];
	while (~scanf("%10s", input)) {
		printf("%s\n", input);
	}
}
*/