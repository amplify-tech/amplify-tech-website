#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class wordstat{
public:
	string word;
	int count;

	wordstat(const string &s, const int c): word(s), count(c) {};

};
bool wordstatlessthan(const wordstat &w1,const wordstat &w2){
	 return w1.word<w2.word;
	}

class WordList{
public:
	vector<wordstat> wlist;

	WordList(const string& fname){
		ifstream ifs(fname);
		string word1;

		while(ifs>>word1){
			int nn=wlist.size();
			int i;
			for(i=0; i<nn; i++){
				if(wlist[i].word == word1){
					wlist[i].count++;
					break;
				}
				else{};
			}
			if(i == nn) wlist.push_back(wordstat(word1,1));
			else{}
		}
}

	void show(){
	
		for(size_t i=0; i<wlist.size(); i++){
			cout.width(10);
			cout<<wlist[i].word<<" : "<<wlist[i].count<<endl;
		}
	}
	void mysort(){
		sort(wlist.begin(), wlist.end(), wordstatlessthan);
	}
	void saveastxt(const string &fname){
		ofstream out(fname);

		for(size_t i=0; i<wlist.size(); i++){
			out.width(10);
			out<<wlist[i].word<<" : "<<wlist[i].count<<endl;
		}
	}

	int frequency(const string &s){
		int nn=wlist.size() , i;

		for(i=0; i<nn; i++){
			if(wlist[i].word==s) return wlist[i].count;
			else{}
		}
	if(i==nn) return 0;
	else{}
	}
	// bool Bsearch( string s){                                           //error
	// 	return binary_search(wlist.begin(), wlist.end(), s, wordstatlessthan);
	// }
};

int main(){                           //word count using class , hide c++ as much as u can
                                      // bcoz c++ is object oriented lang.
	string filename, searchword;
	cout<<"enter the filename = ";
	cin>>filename;
	cout<<"enter the word to find its frequency = ";
	cin>>searchword;

	string outfile = filename.substr(0,3) + "2wcount" + ".txt";

	WordList akr(filename);
	akr.mysort();
	akr.saveastxt(outfile);

	cout<< akr.frequency(searchword)<<endl;

	cout<<"the ouput filename is = "<<outfile<<endl;

	//akr.show();
	
}

// basic
//vector<string>  wordlist;

// typedef vector<string>::iterator itr1;                      
// itr1 it=find(wordlist.begin(), wordlist.end(), "Akram");     //if not found, return worldlist.end();

// cout<<*it<<endl;                                             //if not found, return nothing  (*)

// sort(wordlist.begin(), wordlist.end());                      //sorting is required for binary search 
// bool found=binary_search(wordlist.begin(), wordlist.end(), "Akram");
// cout<<found<<endl;
