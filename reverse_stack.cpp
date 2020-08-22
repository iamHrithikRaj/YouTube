
#include<bits/stdc++.h>
using namespace std;

void print(stack<int> stk) {
	while (!stk.empty()) {
		cout << stk.top() << " ";
		stk.pop();
	}
}

void insert(stack<int>& stk, int last_value) {
	if (stk.empty()) {
		stk.push(last_value);
		return;
	}

//5 4
	int popped_element = stk.top();
	stk.pop();
	insert(stk, last_value);
	stk.push(popped_element);

}

void reverse(stack<int>& stk) {

	if (stk.empty()) return;

	int last_value = stk.top();
	stk.pop();
	reverse(stk);
	insert(stk, last_value);
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

	deque<int>dq = {1, 2, 3, 4, 5};
	stack<int>stk(dq);

	print(stk);
	cout << endl;
	reverse(stk);
	print(stk);

	return 0;

}
