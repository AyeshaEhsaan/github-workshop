#include<iostream>
using namespace std;
int main(){
	char op;
	double a,b,result;
	cout<<"Enter values: "<<endl;
	cin>>a>>b;
	cout<<"Choose operation (+ , - , * , /): ";
	cin>>op;
	switch(op){
		case '+':
			result = a + b;
			break;
		case '-':
			result =  a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
	}
	cout<<"Result: "<<result<<endl;
}

// teacking, staging, commiting, pushing
	// git init to initialize it
	// s