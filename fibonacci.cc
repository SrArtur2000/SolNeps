#include <bits/stdc++.h>

using namespace std;

int fib(int n){
	if(n < 2){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}	
} // funcao recursiva baseada na função de fibonacci

int main(){
int n;
cin>>n;

cout<<fib(n)<<endl;
return 0;
}// averigua qual o fibonacci de n
