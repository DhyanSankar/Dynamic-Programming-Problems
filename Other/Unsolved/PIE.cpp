/*
300 people 200 pies = 1/2 pie per person
find maximum number of people who need to share 1 pie
use areas of pie
*/
#include <iostream>
using namespace std;

int main() {
	
	int cases, n, f, temp;
	cin >> cases;
	for(int i = 0; i < cases; i++){
		cin >> n >> f;
		vector<int> radii, volumes;
		for(int j = 0; j < n; j++){
			cin >> temp;
			radii.push_back(temp);
		}
		sort(radii.begin(), radii.end());
	}

	return 0;
}