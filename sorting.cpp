#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintVector(vector<int> v){
	// for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
	// 	std::cout << ' ' << *it;
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	std::cout << endl;

}

int main(int argc, char const *argv[]) {
	  int myints[] = {32,71,12,45,26,80,53,33};
	  std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33
	  PrintVector(myvector);
	  // using default comparison (operator <):
	  std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33
	  PrintVector(myvector);
	  std::sort (myvector.begin(), myvector.end());
	  PrintVector(myvector);
	  
	  return 0;
}
