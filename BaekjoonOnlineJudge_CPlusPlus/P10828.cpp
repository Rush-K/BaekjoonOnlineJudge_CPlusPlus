/** Baekjoon Online Judge
*   Problem No. 10828
*   ����
*   Writed by Rush.K
*   stack, cin, getline, split �Լ�
*/

#include <iostream>
#include <string>
#include <string.h> // strcmp ����� ���� �������

#include <stack> // stack library

#include <vector> 
#include <sstream>

using namespace std;

vector<string> split(string str, char delimeter) { // C++�� �̷��� split �Լ��� ����������Ѵ�.. �����ϱ���..
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
	cin.ignore(); // cin�� \n�� �����ֱ� ������ �ʼ�!

	for (int i = 0; i < N; i++) {
		getline(cin, command); // ������ �� string�� �б� ���� getline�� ���!
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