
#include<bits/stdc++.h>
using namespace std;

void print(int K, string str) {
	if (K == 0) {
		cout <<  str << endl;
		return;
	}
	if (str.back() == '0') {
		string str1 = str;
		str1.push_back('1');
		string str2 = str;
		str2.push_back('0');
		print(K - 1, str1);
		print(K - 1, str2);
	}
	if (str.back() == '1') {
		string str3 = str;
		str3.push_back('0');
		print(K - 1, str3);
	}
}


int main(int argc, char** argv) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE

	// for getting input form input.txt
	freopen("input.txt", "r", stdin);

	// for writing output to  output.txt
	freopen("output.txt", "w", stdout);

#endif

	int K = 4;
	string n1 = "0";
	print(K - 1, n1);
	string n2 = "1";
	print(K - 1, n2);
	return 0;
}
