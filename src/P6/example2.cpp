#include <iostream>

using namespace std;

template<class Type>
class Stack {
    public:
        Stack() : _size(10), _index(0) { // another way to initialize variables
            _data = new Type[_size];
        }
        void push(Type data);
        Type pop();

    private:
        int _size, _index; // stack size
        Type *_data;
};

template<class Type>
void Stack<Type>::push(Type data) {
	if(_index == _size) {
		cout << "Full stack" << endl;
	}
	else {
		this->_index++;
		this->_data[this->_index] = data;
	}
}

template<class Type>
Type Stack<Type>::pop() {
	if(this->_index == 0) {
		cout << "Empty stack" << endl;
		return 0;
	}
	this->_index--;
	return this->_data[this->_index];
}

int main() {
	Stack<char> S;
	S.pop();
	S.push('z');
	S.push("q");
	S.push(2.1);
}
