#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct dest{
	int dest;
	int danger;
};
int dijkstra(map<int,vector<dest>>* roadsp, int start, int end){
	
	return -1;
}
int main(){

	int num_cities;
	int num_roads;
	cin>>num_cities;
	cin>>num_roads;

	map<int,vector<dest>> roads;

	for(int i=0; i<num_roads; i++){
		int a;
		int b;
		int danger;
		cin>>a;
		cin>>b;
		cin>>danger;
		
		
		
		roads[a].push_back(dest{b,danger});
		roads[b].push_back(dest{a,danger});
	}

	int num_tests;
	cin>>num_tests;

	for(int i=0; i<num_tests; i++){
		int start;
		int end;
		cin>>start;
		cin>>end;
		cout<< dijkstra(&roads,start,end)<< endl;	
	
	}

//	for( road : roads){	//DO THIS LAST
//		cout<< road[0]<<" "<<road[1]<<" "<<road[2]<<endl;
//		delete[] road;

//	}

}
