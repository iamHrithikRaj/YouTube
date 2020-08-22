
#include<bits/stdc++.h>
using namespace std;

//reverse the string

void insert(string&a str, char letter) {
	if (str.size() == 0) {
		str.push_back(letter);
		return;
	}

	char popped_letter = str[0];
	str.erase(str.begin());
	insert(str, letter);
	str = popped_letter + str;
}

void reverse(string& str) {

	if (str.size() == 0) return;

	char letter = str[0];
	str.erase(str.begin());
	reverse(str);
	insert(str, letter);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input form input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to  output.txt
	freopen("output.txt", "w", stdout);
#endif

	string str = "hello";
	reverse(str);
	cout << str;
	return 0;

}

