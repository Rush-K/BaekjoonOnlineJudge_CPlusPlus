/** Baekjoon Online Judge
*   Problem No. 10828
*   스택
*   Writed by Rush.K
*   stack, cin, getline, split 함수
*/

#include <iostream>
#include <string>
#include <string.h> // strcmp 사용을 위한 헤더파일

#include <stack> // stack library

#include <vector> 
#include <sstream>

using namespace std;

vector<string> split(string str, char delimeter) { // C++은 이렇게 split 함수를 구현해줘야한다.. 불편하구만..
	vector<string> result;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, delimeter)) result.push_back(temp);
	return result;
}

int main() {
	int N;
	string command;
	stack<int> stack;

	cin >> N;
	cin.ignore(); // cin에 \n가 남아있기 때문에 필수!

	for (int i = 0; i < N; i++) {
		getline(cin, command); // 공백이 들어간 string을 읽기 위해 getline을 사용!
		vector<string> parsedCommand = split(command, ' ');

		if (!strcmp(parsedCommand[0].c_str(), "push")) {
			stack.push(stoi(parsedCommand[1]));
		}
		else if (!strcmp(parsedCommand[0].c_str(), "pop")) {
			if (stack.empty()) cout << -1 << "\n";
			else {
				cout << stack.top() << "\n";
				stack.pop();
			}
		}
		else if (!strcmp(parsedCommand[0].c_str(), "size")) {
			cout << stack.size() << "\n";
		}
		else if (!strcmp(parsedCommand[0].c_str(), "empty")) {
			if (stack.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (!strcmp(parsedCommand[0].c_str(), "top")) {
			if (stack.empty()) cout << -1 << "\n";
			else cout << stack.top() << "\n";
		}
	}
}