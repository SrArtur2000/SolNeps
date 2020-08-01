#include <bits/stdc++.h>

using namespace std;

int main(){
char op;
double x,y,res;
cin>>op;
cin>>x>>y;
cout << setprecision(2) << fixed;

if(op == 'D'){
	res = x/y;
}else if(op == 'M'){
	res = x*y;
}

cout<<res<<endl;

return 0;
}