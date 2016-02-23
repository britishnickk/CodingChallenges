#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_in =0;
    cin >> num_in;
    vector<int>v;
    for(int i=0;i<num_in;i++){
        int in;
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<num_in;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
