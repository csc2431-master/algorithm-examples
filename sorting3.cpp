#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

class Person{
		int number;
		double salary;
		friend bool Compare(const Person& a, const Person& b);
	public:
		Person(int n, double s);
		string ToString()const;
};

Person::Person(int n, double s):number(n), salary(s){
}
string Person::ToString()const{
	stringstream ss;
	ss << '[' << number << ' ' << salary << "] ";
	return ss.str();
}

bool Compare(const Person& a, const Person& b){
    return (a.number < b.number);
}

void PrintVector(vector<Person> v){
	// for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
	// 	std::cout << ' ' << *it;
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i].ToString() << ' ';
	}
	std::cout << endl;

}

int main(int argc, char const *argv[]) {
	  vector<Person> ppl;
	  ppl.push_back(Person(1, 3.22));
	  ppl.push_back(Person(10, 13.22));
	  ppl.push_back(Person(2, 123.22));
	  ppl.push_back(Person(3, 1234.22));
	  ppl.push_back(Person(7, 213.22));
	  ppl.push_back(Person(4, 443.22));
	  ppl.push_back(Person(16, 5563.22));
	  ppl.push_back(Person(99, 333.22));
	  ppl.push_back(Person(5, 33.22));
	  PrintVector(ppl);
	  sort(ppl.begin(), ppl.end(), Compare);
	  PrintVector(ppl);
	  return 0;
}
