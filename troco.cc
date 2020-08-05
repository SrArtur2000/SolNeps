#include <bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin>>n;
	int total = 0;
	int moeda[6];
	moeda[0] = 1;
	moeda[1] = 5;
	moeda[2] = 10;
	moeda[3] = 25;
	moeda[4] = 50;
	moeda[5] = 100;

	for(int i = 5 ; i >= 0  ; i--){
		if(int(n/moeda[i]) > 0){
			total += int(n/moeda[i]);
			n -= int((n/moeda[i]))*moeda[i];
		}
	}

	cout<<total<<endl;

	return 0;
}