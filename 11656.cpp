#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<string> s;
	string temp;
	cin >> temp;

	for (int i = 0; i < temp.size(); i++) {
		s.push_back(temp.substr(i));
	}
	sort(s.begin(), s.end());

	for (int i = 0; i < temp.size(); i++) {
		cout << s[i] << endl;
	
	}
	

}