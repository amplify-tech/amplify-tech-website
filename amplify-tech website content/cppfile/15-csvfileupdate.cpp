#include<iostream>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
//std::ofstream myfile;

void update(){
	fstream stud;
	fstream temp;
	stud.open ("test3.csv", ios::in);
	temp.open ("test4.csv", ios::out);
	char num[4];
	char sq[4];
	char cub[4];
	cin.ignore();
	cout<<"enter the no ";
	cin.getline(cub,4);

	while(!stud.eof()){
		stud.getline(num,4,',');
		stud.getline(sq,4,',');

		if(strcmp(num,sq)){
			cout<<"num = ";
			cin.getline(num,4);
			cout<<"sq = ";
			cin.getline(sq,4);

			temp<<num<<","<<sq<<","<<endl;

		}
		else {
		temp<<num<<","<<sq<<","<<endl;			
		}

	}
	temp.close();
	stud.close();

	stud.open("test3.csv", ios::out);
	temp.open("test4.csv", ios::in);

	while(!temp.eof()){
		temp.getline(num,4,',');
		temp.getline(sq,4,',');

	    stud<<num<<","<<sq<<","<<endl;

		}
	temp.close();
	stud.close();

	remove("test4.csv");
	cout<<" done ";

}

int main(){

	update();

}