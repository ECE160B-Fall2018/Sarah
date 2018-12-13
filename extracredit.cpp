#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <set>

using namespace std;



int main() {
	//space holder
	vector<int> intVec;

	for(int i = 0; i < (rand()%10 + 10); i++){
		intVec.push_back( rand()%50 + 1 );
	}

	for(auto i : intVec){
		cout << i << endl;
	}

	cout << "\n\n\n";

	//another vector array
	vector<int> intVec2;

        for(int i = 0; i < (rand()%10 + 10); i++){
                intVec2.push_back( rand()%50 + 1 );
        }

        for(auto i : intVec2){
                cout << i << endl;
        }

	cout << "\n\n\n";

	//check?
	set<int> set1;
	
	for(auto i : intVec){
		set1.insert(i);
	}

	for(auto i : intVec2){
		if(set1.find(i) != set1.end()){
			cout << i << endl;
		}
	}
	


	

	return 0;
}
