#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        unsigned int num;
        cin>>num;
        num=~num;
        cout<<num<<endl;
    }
    return 0;
}
