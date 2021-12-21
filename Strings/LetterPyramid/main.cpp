#include <iostream>
#include <string>

using namespace std;

void reverseStr(string &str){
    string r;
    int str_length = str.length();

    for(int i = 0; i<(str_length/2); i++){
        swap(str[i],str[str_length-1-i]);
    } 
}

string addWhiteSpace(string &str,int size){
    string s;
    for(int i =0 ; i < size-str.size(); i++)
            s.append(" ");
    s.append(str);
    return s;
}

int main(){
    
    string letterPyramid;
    string left;
    string right;
    string leftWhiteSpace;

    cin >> letterPyramid;
    
    for(int i=0 ; i<letterPyramid.size(); i++){
        leftWhiteSpace.erase();
        if(i>0){
            right = left = letterPyramid.substr(0,i);
            reverseStr(right);
        }

        while(leftWhiteSpace.size()+left.size() < letterPyramid.size() )
            leftWhiteSpace.append(" ");
   
        cout<<leftWhiteSpace<<left<<letterPyramid.at(i)<<right<<endl;
        
   
    }

}