#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
    int e = ar.back();
    int curr=ar.size()-2;
    while(curr>=0 && e<ar[curr]){
        ar[curr+1]=ar[curr];
        curr--;
    
        for (int i: ar)
            std::cout << i << ' ';
        cout<<endl;
    }
    ar[curr+1]=e;
    for (int i: ar)
        std::cout << i << ' ';
    cout<<endl;

}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}

