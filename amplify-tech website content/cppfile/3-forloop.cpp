#include<iostream>
using namespace std;

int main(){
	cout.width(6);
	cout << "N" << ":";
	cout.width(10); 
	cout << "N*N"<< ":" << endl;

for(long int  i=1; i<=100000; i*= 10){
	cout.width(6);
	cout << i << ":";
	cout.width(10);
	cout << i*i << ":" <<endl;
}

cout.width(6);
cout<<"akram"<<endl;
cout.width(6);
cout<<"ak"<<endl;
cout.width(6);
cout<<"akr"<<endl;
cout.width(6);
cout<<"akramkhan"<<endl;

// width() specifies the size of the next object to be printed.
// It puts extra blank if needed.
// width() method only applies to next item displayed, 

}