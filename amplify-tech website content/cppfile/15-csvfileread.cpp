#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
//std::ofstream myfile;

int main(){

	string filename="canadata.csv";
	//cout<<"enter the filename = ";
	//cin>>filename;
	
	ifstream myfile;	
	myfile.open(filename);

	vector<string> data;
	string word;

	while(myfile.good()){
	
		getline(myfile, word, ',');
		data.push_back(word);
		cout<<word<<" ";
	}	
	
	for(size_t i=0; i<data.size(); i++){
		cout<<data[i]<<" ";
	}
	cout<<data[4]<<data.size()<<endl;
	
	myfile.close();
}