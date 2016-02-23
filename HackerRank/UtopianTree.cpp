#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findHeight(int n){
    static int sol[60]={1};
    static int progress=0;
    if(n<progress){
        cout<<sol[n]<<endl;
        return;
    }
    while(progress<=n){
        progress++;
        if(progress%2)  //progress is even
            sol[progress]=2*sol[progress-1];
        else
            sol[progress]=1+sol[progress-1];
    }
    cout<<sol[n]<<endl;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        findHeight(n);
    }
    return 0;
}
