//https://www.spoj.com/problems/OPCPIZZA/
#include <iostream>
using namespace std;

int main() {
	
	int t, n, m, temp, counter;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		vector<int> friends;
		for(int j = 0; j < n; j++){
			cin >> temp;
			friends.push_back(temp);
		}
		counter = 0;
		for(int k = 0; k < n - 1; k++){
			for(int l = k + 1; l < n; l++){
				if(friends[k] + friends[l] == m){
					counter ++;
				}
			}
		}
		cout << counter;
	}

	return 0;
}