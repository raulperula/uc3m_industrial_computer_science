#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// creating vector with size 10
    unsigned int i;
	vector<char> myvector(10);
	cout << "size = " << myvector.size() << endl;

	// assign elements and showing
	for(i=0;i<10;i++) {
		myvector[i] = 'z' - i;
	}
	for(i=0;i<myvector.size();i++) {
		cout << myvector[i] << ' ';
	}
	cout << endl << endl;

	// add new elements if necessary
	for(i=0;i<10;i++) {
		myvector.push_back('z'-i-10);
	}
	for(i=0;i<myvector.size();i++) {
		cout << myvector[i] << ' ';
	}
	cout << endl << endl;
	
	// using an iterator
	vector<char>::iterator it;
	it = myvector.begin();
	while(it != myvector.end()) {
		*it = toupper(*it);
		it++;
	}
	for(i=0;i<myvector.size();i++) {
		cout << myvector[i] << ' ';
	}
	cout << endl <<endl;

	// sorting the vector
	sort(myvector.begin(), myvector.end());
	for(i=0;i<myvector.size();i++) {
		cout << myvector[i] << ' ';
	}
	cout << endl << endl;

	cin.get(); // wait an INTRO

	return 0;
}
