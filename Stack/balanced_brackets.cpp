#include<bits/stdc++.h>
using namespace std;


bool areBracketsBalanced(string str)
{
	stack<char> temp;
	for(int i = 0;i < str.length();i++){
		if(temp.empty()){
			//If the stack is empty
			temp.push(str[i]);
		}else if((temp.top() == '(' && str[i] == ')') ||  (temp.top() == '[' && str[i] == ']') || (temp.top() == '{' && str[i] == '}')){
			//If we found any complete pair of bracket
			//then pop

			temp.pop();
		}else{
			temp.push(str[i]);

		}
	}
	if(temp.empty()){
		//If stack is empty return true
		return true;
	}
	return false;

}
int main(){
	string str = "{}([])";
	if(areBracketsBalanced(str) == true ){
		cout << "Are balanced Brackets" << endl;
	}else{
		cout << "Not balanced" << endl;
	}


}
