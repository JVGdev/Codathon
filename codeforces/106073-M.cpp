#include <bits/stdc++.h>

using namespace std;

long int zer(long int a){
	if(a < 0) return  0;  else return a;
}

int main(){
	cin.tie(NULL);
	
	long int n, k;
	cin >> n >> k;

	
	long int final[n];
       	
	long int c;
	for(int i = 0; i < n; i++){
		cin >> c;
		final[i] = c;
	}	
	
	
	long int i = 0;
	long int j = n-1;
	// Percore a lista simultanêamente das duas pontas. Se j >= i + k - dis(i, j), reduz o j, senão, aumenta i;
	// J será a posição que o incremento deverá ser feito no final do loop.
	while(i < j){		
		if((final[i] + zer(k - (j - i - 1))) <= final[j]){
			j--;
		} else {
			i++;
		}
	}	
	
	for(long int i = k; i > 0 && pos >= 0; i--){
		final[j] += i;
		j--;
	}	
	sort(final, final + n);

	cout << final[0] << endl;

	return 0;
}
