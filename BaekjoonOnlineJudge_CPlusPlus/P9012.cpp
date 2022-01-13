/** Baekjoon Online Judge
*   Problem No. 9012
*   괄호
*   Writed by Rush.K
*   문자열 다루기
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	int T;
	int ParenthesisNum;

	bool isVPS;

	string input;
	

	cin >> T;
	cin.ignore(); // 잊지말자!

	for (int i = 0; i < T; i++) {
		getline(cin, input);
		isVPS = true;
		ParenthesisNum = 0;

		for (int j = 0; j < input.size(); j++) {
			if (input.c_str()[j] == '(') ParenthesisNum++;
			else {
				if (ParenthesisNum <= 0) {
					isVPS = false;
					break;
				}
				else {
					ParenthesisNum--;
				}
			}
		}

		if (isVPS && ParenthesisNum == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
