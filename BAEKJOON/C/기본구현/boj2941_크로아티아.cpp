#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string str;
    cin >> str;
    for(int i = 0; i < croatian.size(); i++){
        while(true){
            idx = str.find(croatian[i]);
            if(idx == string::npos) break;
            str.replace(idx,croatian[i].length(),"1");
        }
    }
    cout << str.length();
}