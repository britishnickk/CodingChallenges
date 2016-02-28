#include <iostream>
#include <vector>
using namespace std;

int dijkstra(vector<int*>* roadsp, int start, int end){
	
	return -1;
}

int main(){

	int num_cities;
	int num_roads;
	cin>>num_cities;
	cin>>num_roads;

	//int roads[num_roads][3];
	vector<int*> roads;

	for(int i=0; i<num_roads; i++){
		int a;
		int b;
		int danger;
		cin>>a;
		cin>>b;
		cin>>danger;
		int* road = new int(3);
		road[0]=a;
		road[1]=b;
		road[2]=danger;
		roads.push_back(road);

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

	for(int* road : roads){	//DO THIS LAST
//		cout<< road[0]<<" "<<road[1]<<" "<<road[2]<<endl;
		delete[] road;

	}

}
