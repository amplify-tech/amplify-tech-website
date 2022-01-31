#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
//std::ofstream myfile;

int main(){
	ifstream myfile;
	ofstream myfile1;		
	myfile.open("test.csv");
	myfile1.open("test1.csv");

	string data[25];
	int i=0;

	while(myfile.good()){
		//string line;
		getline(myfile, data[i], ',');
		cout<<data[i];
		myfile1<<data[i]<<",";
		i++;
	}
	
	double datai[3];
	datai[0]=555;
	datai[1]=666;
	datai[2]=777;

	int x;
	cin>>x;
	cout<<x+4<<endl;

	for ( i=0; i<3; i++){
	//cin>>datai[i];
	myfile1<<datai[0]<<","<<datai[1]<<","<<datai[2]<<endl;
	//myfile1<<7<<","<<77<<","<<777<<endl;

	}	

	myfile.close();

	myfile1.close();
}