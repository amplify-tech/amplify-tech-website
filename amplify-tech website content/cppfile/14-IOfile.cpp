#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<char> stringtovector(const string& s){
	vector<char> v;
	for(size_t i=0; i<s.size(); i++){
		v.push_back(s[i]);
	}
	return v;
}

ostream& operator<<(ostream& os, const vector<string> &vs){         // u can change os to any variable name
	for(size_t i=0; i<vs.size(); i++){
		vector<char> vc = stringtovector(vs[i]);

		for(size_t k=0; k<vc.size(); k++){
			os<<vc[k]<<" ";                       // use endl and see what happen
		}
		os<<endl;                                 // use " "  and see what happen 
	}

	return os;
}

int main(){
	string inputfilename, outputfilename;
	cout<<"enter the input filename = ";
	cin>>inputfilename;

	cout<<"enter the output filename = ";
	cin>>outputfilename;

	ifstream infile(inputfilename);                   // u can change infile to any variable name
	ofstream outfile(outputfilename);                 // u can change outfile to any variable name

	string word;
	vector<string> lesson;
	while(infile>>word){
		lesson.push_back(word);
	}

	cout<<"total no. of words in the file is "<<lesson.size()<<endl;

	outfile<<lesson;


	
}