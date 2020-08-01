#include <bits/stdc++.h>

using namespace std;

int main(){
int N;
int P;
char op;
int Q;
cin>>N;
cin>>P;
cin>>op;
cin>>Q;

if(op == '*'){
	if(P*Q > N){
		cout<<"OVERFLOW"<<endl;
	}else{
	cout<<"OK"<<endl;
	}
}
if(op == '+'){
	if(P+Q > N){
		cout<<"OVERFLOW"<<endl;
	}else{
	cout<<"OK"<<endl;
	}
}


return 0;
}