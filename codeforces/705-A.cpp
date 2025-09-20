#include <bits/stdc++.h>

using namespace std;

int main(){

	string last[2] = {"I hate it", "I love it"};
	string middle[2] = {"I hate that", "I love that"};

	int n;
	cin >> n;

	if(n == 1) {
		cout << last[0] << endl;
		return 0;	       	
	}

	cout << middle[0] << " "; 
	for(int i = 1; i < n - 1; i++) {
		cout << middle[i%2] << " "; 
	}
	cout << last[(n+1)%2] << endl; 

	return 0;
}


