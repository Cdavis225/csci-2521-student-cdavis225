#include <iostream> 
#include <string> 
using namespace std;

class School {
public:
	School();
	static int getNextId();
private:
	int id = 0;
	static int nextId;
};


School::School() {
	id = nextId;
	nextId += 1;
}

int School::getNextId() {
	return nextId;
}

int School::nextId = 0;


int main() {
	School();
	cout << School::getNextId() << " ";
	School();
	cout << School::getNextId() << " ";
	School();
	cout << School::getNextId() << " ";
	School();
	cout << School::getNextId() << " ";

	return 0;
}