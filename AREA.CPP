#include <iostream>
using namespace std;

int area(int l, int w);

int main(){
	int l, w;
	cout << "Enter L: ";
	cin >> l;
	cout << "Enter W: ";
	cin >> w;
	cout << area(l, w);
	return 0;
}

int area(int l, int w){
	return l*w;
}
