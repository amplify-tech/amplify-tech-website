#include<iostream>
using namespace std;

void read(double A[], int n){
	for (int i=0; i<n; i++){
		cin>>A[i];
	}
	}
void print(double A[], int n){
	for (int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
		cout<<endl;
	}

int mini(double A[], int start, int end){
    int m=start;
    for (int i=start+1 ; i<end; i++){
    	if(A[i]<A[m]) {
    		m=i;
    	}
    	else{}
    }
return m; 
}
void swap(double A[], int j, int k){   
	double temp=A[j];
	A[j]=A[k]; 
	A[k]=temp;

}
void sort(double A[], int n){            //this is selection sort
	for (int i=0; i<n; i++){
  	int m=mini(A,i,n);
  	swap(A,m,i);
 }
}

int search(double A[], int start,int end , double q){
	int mid=(start+end)/2;
	if (q<A[start] || q>A[end] )return -1;
	else if(q==A[mid]) return mid;
	else if(q<A[mid]) return search(A,start,mid-1,q);
	else return search(A,mid+1,end,q);
}
int main(){
	cout<<"no of element in the array is "<<endl;
	int x;
	cin>>x;
    double B[x];
	cout<<"enter the array "<<endl;
 read(B,x);
 //print(B,x);
 sort(B,x);
 print(B,x);
 cout<<"enter a no. for binary search "<<endl;
 double s;
 cin>>s;
 int ans=search(B,0,x-1,s);

 if(ans<0) cout<<s<<" not found in the array "<<endl;
 else cout<<"index of "<<s<<" in the array is "<< ans <<endl;

}