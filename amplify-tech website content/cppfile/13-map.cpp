#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;


int main(){
map<string,int> hist;

	hist["abc"] = 13;
	hist["abc"] = 777;
	hist["6yuef"] = 78;

for(map<string,int>::iterator hx=hist.begin(); hx != hist.end(); hx++){
		cout<<hx->first <<" :- "<< (*hx).second<<endl;
	}                                              // iterator moves in increasing order of  key 
cout<<hist.find("abc")->second<<endl;              //if not found iterator = hist.end();
                                                   //there is a unique key so first one is removed

typedef map<string,vector<int> > dictionary;
dictionary brt, oxford;

typedef dictionary::iterator itr;

vector<int> a(3);
	a[0]=2, a[1]=9, a[2]=6;

vector<int> ax(3);
	ax[0]=12, ax[1]=19, ax[2]=16;

vector<int> d(3);
	d[0]=22, d[1]=99, d[2]=66;

oxford["art"] = ax;
oxford["ball"] = d;
oxford["dog"] = a;
oxford["car"] = d;

for(itr ti=oxford.begin() ; ti!=oxford.end(); ti++){   
	cout<< ti->first <<" :-: "<< ti->second[2] <<endl;
}

itr yy=oxford.find("dog");
oxford.erase(yy);

cout<<endl;
for(auto it: oxford){                              //second method
	cout<<it.first<<" : "<<it.second[2]<<endl;
}

oxford.clear();                       //completely removed the map
cout<<oxford.size()<<"\n";

}
