#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

struct dest{
	int dest;
	int danger;
};
struct road{
	int a;
	int b;
	int danger;
};
int dijkstra(map<int,vector<dest>> roads,int num_cities, int start, int end){
	vector<int> visited;
	queue<int> prospective;
	vector<unsigned int> cities(num_cities+1,-1);
	
	int curr;
	cities[start]=0;
	prospective.push(start);
	while(!prospective.empty()){
		curr=prospective.front();
		prospective.pop();
		for(dest d :roads[curr]){
			if(cities[curr]+d.danger<cities[d.dest]){
				cities[d.dest]=cities[curr]+d.danger;
				prospective.push(d.dest);
			}
			
		}
		
	}
	
	//for (dest d : roadsp*	
	return cities[end];
}
int main(){


	int num_cities;
	cin>>num_cities;
	while(!cin.eof()){	
		int num_roads;
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
			cout<< dijkstra(roads,num_cities,start,end)<< endl;	
		
		}
		cout<<endl;
		cin>>num_cities;
	}
//	for( road : roads){	//DO THIS LAST
//		cout<< road[0]<<" "<<road[1]<<" "<<road[2]<<endl;
//		delete[] road;

//	}

}
