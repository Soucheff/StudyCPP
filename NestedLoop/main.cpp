#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    int result { 0 };
    
    for(int m=0;m<vec.size();m++){
        for(int n=m+1;n<vec.size();n++){
            result += vec.at(m)*vec.at(n);
        }
    }

    return result;
}

int main(){
    cout << "Result: " << calculate_pairs(vector<int>{2,4,6,8}) << endl;
}