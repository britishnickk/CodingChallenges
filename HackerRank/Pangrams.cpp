#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int letters[26]={0};
    string s;
    getline(cin,s);
    for(std::string::iterator it=s.begin();it!=s.end(); it++){
        letters[(int)(tolower(*it)-'a')]=1;
    }
    for(int i=0;i<26;i++){
        if(!letters[i]){
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;
}

