#include <bits/stdc++.h>

using namespace std;

int main(){
char op;
double x,y,res;
cin>>op; // DIz qual conta fazer
cin>>x>>y; // Diz quais numeros usar
cout << setprecision(2) << fixed; // define uma precisão fixa para todo cout

if(op == 'D'){
	res = x/y;
}else if(op == 'M'){
	res = x*y;
}// gera a operação

cout<<res<<endl;// imprime o resultado

return 0;
}
