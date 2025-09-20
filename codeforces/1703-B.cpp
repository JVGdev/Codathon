#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t, sum, b[26];
	char bal;
	cin >> n;
	while(n--){
		sum = 0;
		cin >> t;
		vector<int> b(26, 0);
		while(t--){
			cin >> bal;
			bal -= 'A';
			sum += (b[bal] == 0) ? 2 : 1;
			b[bal] = 1;
		}
		cout << sum << endl;
	}

	

	return 0;
}


