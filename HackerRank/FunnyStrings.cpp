#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string t;
    getline(cin,t);//get rid of that newline
    
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        string::iterator rev=s.end();
        rev--;
        string::iterator it=s.begin();
        for(int j=0;j<s.length()-1;j++){
            //cout<<it[1]<<" "<<it[0]<<"   "<<rev[-1]<<" "<<rev[0]<<"        ";
            if(abs(it[1]-it[0])!=abs(rev[-1]-rev[0])){
                cout<<"Not ";
                break;
            }
            it++;
            rev--;
        }
        cout<<"Funny"<<endl;
    }
    return 0;
}
