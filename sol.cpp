#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, c;
	cin >> n;
	int s1 = 0, s2 = 0;
	for(int i = 0; i < n; i++){
		cin >> m >> c;
		if(m == c){
			continue;
		} else if(m > c){
			s1++;
		} else{
			s2++;
		}
	}
	if(s1 == s2){
		cout << "Friendship is magic!^^";
	} else if(s1 > s2){
		cout << "Mishka";
	} else{
		cout << "Chris";
	}
	cout << "\n";
	return 0;
}