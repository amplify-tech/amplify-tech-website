#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
//std::ofstream myfile;

int main(){
	string filename;
	cout<<"enter the filename = ";
	cin>>filename;
	
	ofstream myfile;	
	myfile.open(filename);

	int i=0, n=7 ; 
	for (i=0; i<n; i++){
		myfile<<i<<","<<i*i<<","<<"okay"<<endl;
	}

	myfile<<589<<","<<9977<<endl;

	myfile.close();
}