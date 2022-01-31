#include<iostream>
using namespace std;

void read(double A[], int n){
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
	}
void print(double A[], int n){
	for (int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
		cout<<endl;
	}

void place(double A[], int x){       
	double val=A[x];
	int i;
	for(i=x-1; A[i]>val && i>=0; i--){
		A[i+1]=A[i];
	}
	A[i+1]=val;
}
void sort(double A[],int n){        //this is insertion sorting.
	for (int i=1; i<n; i++){
		place(A,i);

	} 
}

int main(){
	cout<<"no of element in the array is "<<endl;
	int x;
	cin>>x;
    double B[x];
	cout<<"enter the array "<<endl;
 read(B,x);
 //print(B,x);
 sort(B,x);
 print(B,x);

}