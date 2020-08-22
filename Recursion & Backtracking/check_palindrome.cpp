
#include<bits/stdc++.h>
using namespace std;

bool compare(string str1, string str2) {
	if (str1.empty() and str2.empty()) return true;
	if (str1[0] != str2[0]) return false;

	str1.erase(str1.begin());
	str2.erase(str2.begin());
	compare(str1, str2);

}

void insert(string& str, char last_letter) {
	if (str.size() == 0) {
		str.push_back(last_letter);
		return;
	}

	char popped_letter = str[0];
	str.erase(str.begin());
	insert(str, last_letter);
	str = popped_letter + str;
}

void reverse(string& str) {
	if (str.size() == 0) return;

	char last_letter = str[0];
	str.erase(str.begin());
	reverse(str);
	insert(str, last_letter);
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

	string str1 = "0racecar";
	string str2 = str1;
	reverse(str2);
	// cout << str1 << " " << str2;
	cout << boolalpha << compare(str1, str2);

	return 0;

}
