#include<iostream>
using namespace std;
int main(){
	int start=11;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			cout<<start<<"";
			start++;
		}
		cout<<endl;
	}
	return 0;
}