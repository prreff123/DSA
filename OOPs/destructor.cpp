#include <iostream>
using namespace std;

int count = 0;

class Test {
public:
	Test(){
		count++;
		cout << "\n No. of Object created:\t" << count;
	}
    // destructor
	~Test(){
		cout << "\n No. of Object destroyed:\t" << count;
		--count;
	}
};

int main(){
	Test t, t1, t2, t3;
	return 0;
}
