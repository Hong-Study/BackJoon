#include<iostream>
using namespace std;
int main(){
	int a;
	int x = 3;
	cin >> a;
	if(a>=11){
		x += a/10;
		a%=10;
	}
	if(a!=1){
		cout<<a-1;
	}
	for(int i=0;i<x;i++){
		cout<<'6';
	}
	cout<<endl;
}