#include<bits/stdc++.h>
using namespace std;


int main()
{	
	//Declaring umap
	//<string,int> typekey
	//will be of String value
	//and mapped Value will be of int type
	unordered_map<string,int> umap;
	//Inserting values by using [] operator

	umap["Nguyen_thanh_lam"] = 10;
	umap["Practise"] = 20;
	umap["Commit"] = 30;
	for(auto x : umap){
	 cout << x.first << " " << x.second << endl;

	}
	
}
