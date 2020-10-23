#include<iostream>
using namespace std;
int main(){
	// This program will print out the greatest number in an array of 5 numbers provided by the user.
	const int s=5; 
	int A[s], d=0;
	cout<<"Enter values of array: ";
	for(int i=0;i<s;i++){
		cin>>A[i];
	}
	cout<<"The greatest number is: ";
	for(int e=0;e<=1;e++){
	for(int c=0; c<=4; c++){
		if(A[d]<A[c]){
			d++;
		}
	}
}
cout<<A[d];
}
