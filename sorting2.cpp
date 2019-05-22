#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person{
		int number;
		double salary;
};

bool Compare(const Person& a, const Person& b){
    return (a.number < b.number);
}

void PrintVector(vector<Person> v){
	// for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
	// 	std::cout << ' ' << *it;
	for (size_t i = 0; i < v.size(); i++) {
		cout << '[' <<v[i].number << ' ' << v[i].salary << "] ";
	}
	std::cout << endl;

}

int main(int argc, char const *argv[]) {
	  vector<Person> ppl;
	  ppl.push_back({1, 3.22});
	  ppl.push_back({10, 13.22});
	  ppl.push_back({2, 123.22});
	  ppl.push_back({3, 1234.22});
	  ppl.push_back({7, 213.22});
	  ppl.push_back({4, 443.22});
	  ppl.push_back({16, 5563.22});
	  ppl.push_back({99, 333.22});
	  ppl.push_back({5, 33.22});
	  PrintVector(ppl);
	  sort(ppl.begin(), ppl.end(), Compare);
	  PrintVector(ppl);
	  return 0;
}
