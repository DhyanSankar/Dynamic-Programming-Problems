//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int shortestPath(vector<vector<int>> vect, int N){
	int counter = 0;
	int minArr[N];
	int isFinArr[N];
	fill_n(minArr, N, INT_MAX);
	fill_n(isFinArr, N, false);
	minArr[0] = 0;
	while(true){
		//code
	}
}

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		int N, M;
		cin >> N >> M;
		vector<vector<int>> vect(N);
		for(int j = 0; j < M; j++){
			int x, y;
			cin >> x >> y;
			vect[x - 1].push_back(y - 1);
			vect[y - 1].push_back(x - 1);
		}
		cout << shortestPath(vect, N);
	}
}