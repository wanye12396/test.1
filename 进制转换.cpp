#include <iostream>
#include<stack> 
using namespace std;

stack<char> st;
int x,m;
string s="0123456789ABCDEF";

int main(){
	cin>>x>>m;
	while(x!=0){
		st.push(s[x%m]);
		x=x/m;
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	
	return 0;
}
