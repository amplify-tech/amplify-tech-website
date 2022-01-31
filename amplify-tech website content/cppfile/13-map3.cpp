#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	map<string,int> wordlist;                       //simplest method for word counting
	string filename, searchword;
	cout<<"enter the filename = ";
	cin>>filename;
	cout<<"enter the word to find its frequency = ";
	cin>>searchword;

	string outfile = filename.substr(0,3) + "1wcount" + ".txt";

	ifstream ifs(filename);
	ofstream out(outfile);
	string word;

	while(ifs>>word){
		if(wordlist[word]) wordlist[word]++;
		else wordlist[word] = 1;
	}

	cout<<wordlist[searchword]<<endl;

	for(auto it: wordlist){
		// cout.width(10);
		// cout<<it.first<<" : "<<it.second<<endl;

		out.width(10);
		out<<it.first<<" : "<<it.second<<endl;
	}

	cout<<"the ouput filename is = "<<outfile<<endl;

	cout<<"the no. of different word in the file is = "<<wordlist.size()<<endl;
	
}

	