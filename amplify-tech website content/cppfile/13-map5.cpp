#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

typedef map<vector<char>, vector<string> > AnagramMap;

void stringToVector(const string& s, vector<char>& v){
	for(size_t i=0; i<s.size(); i++){
		v.push_back(s[i]);
	}
}

vector<char> getAnagramKey(const string& s){
	vector<char> anagramkey;
	stringToVector(s,anagramkey);
	sort(anagramkey.begin(), anagramkey.end());

	return anagramkey;
} 
void addKeyandWord(const vector<char>& anagramkey, const string& word, AnagramMap& aMap){
	aMap[anagramkey].push_back(word);
}

void addWord(const string& word, AnagramMap& anagramMap){
	vector<char> anagramkey = getAnagramKey(word);

	addKeyandWord(anagramkey, word, anagramMap);
}
void buildAnagramGroups(const string& filename, AnagramMap& anagramMap){
	ifstream ifs(filename);
	string word;

	while(ifs>>word){
		addWord(word,anagramMap);
	}
}

void printAnagramGroups(const AnagramMap& aMap){	
	 for(auto it : aMap){
		for(size_t i=0; i<it.first.size(); i++){
			cout<<it.first[i];
		}
		cout<<" :--  "<<it.second.size()<<endl;

		for(size_t i=0; i<it.second.size(); i++){
			cout<<it.second[i]<<" ";
		}
		cout<<endl<<endl;
	}
}
void saveastxt(const string& s, const AnagramMap& aMap){
	 ofstream out(s);

	 for(auto it : aMap){
		for(size_t i=0; i<it.first.size(); i++){
			out<<it.first[i];
		}
		out<<" :--  "<<it.second.size()<<endl;

		for(size_t i=0; i<it.second.size(); i++){
			out<<it.second[i]<<" ";
		}
		out<<endl<<endl;
	}

}

vector<string> findanagramgrp(const string &s, AnagramMap& anagramMap){
	vector<char> anagramkey = getAnagramKey(s);
	return anagramMap[anagramkey];
}

// ostream& operator<<(ostream& os, const vector<char>& v){
// 	for(size_t i=0; i<v.size(); i++){
// 		os<<v[i];
// 	}
// 	return os;
// }

int main(){

	string filename, searchword;
	cout<<"enter the filename = ";
	cin>>filename;
	cout<<"enter the word to find its anagram group = ";
	cin>>searchword;

	string outfile = filename.substr(0,3) + "anagram" + ".txt";
	
	AnagramMap anagramMap;
	
	buildAnagramGroups(filename,anagramMap);	

	saveastxt(outfile, anagramMap);

	vector<string> vofs = findanagramgrp(searchword, anagramMap);
	int nn=vofs.size();

	for (int i=0; i<nn; i++){
		cout<<vofs[i]<<" ";
	}

	cout<<endl<<"the ouput filename is = "<<outfile<<endl;

	printAnagramGroups(anagramMap);


}