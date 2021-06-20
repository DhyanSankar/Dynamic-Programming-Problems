//https://www.spoj.com/submit/EKO/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> vect, int height, int required) {
	int count = 0;
	for(auto itr : vect){
		if(itr - height > 0){
			count += itr - height;
		}
	}
	return count >= required;
}

int main() {
	int n, m, temp, b = 0, mid, e = INT_MAX;
	cin << n << m;
	vector<int> vect;
	for(int i = 0; i < n; i++){
		cin >> temp;
		vect.push_back(temp);
	}
	while(b <= e){
		m = b + (e - b)/2;
		if(check(vect, mid, m)){
			//code
		}
	}

	return 0;
}