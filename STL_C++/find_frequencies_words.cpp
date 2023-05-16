#include<bits/stdc++.h>

using namespace std;


void printFrequencies(const string &str)
{
	unordered_map<string,int> wordFreq;
	//breaking input word using string stream

	stringstream ss(str);

	//Store individual word
	string word;
	while(ss >> word){
		wordFreq[word]++;

	}

	unordered_map<string,int>:: iterator p = wordFreq.begin();
	for(p;p != wordFreq.end();p++){
		cout <<"(" << p->first << ", " <<p->second << ")\n";
	}

}
//Driver code
int main(){
	string str = "Linux for Linux distribution prac for exam";
	printFrequencies(str);




}
