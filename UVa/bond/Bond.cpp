#include <iostream>
#include <vector>
using namespace std;
int main(){

	int num_cities;
	int num_roads;
	int garbage;
	cin>>num_cities;
	cin>>num_roads;
	//get rid of endl
	cin>>garbage;

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

	for(int* road : roads){	//DO THIS LAST
		cout<< road[0]<<" "<<road[1]<<" "<<road[2]<<endl;
		delete[] road;

	}

}
