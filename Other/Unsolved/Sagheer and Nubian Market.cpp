//https://codeforces.com/problemset/problem/812/C#
#include <iostream>
using namespace std;

int main() {
	int n, S, temp;
	vector<int> vect;
	for(int i = 0; i < n; i++){
	    cin >> temp;
	    vect.push_back(temp);
	}
	sort(vect.begin(), vect.end(), greater<int>());
	
	return 0;
}