#include <iostream>

using namespace std;

template <class Type>
void swaping(Type & a, Type & b){
	Type aux = a;
	a = b;
	b = aux;
};

int main(int argc, char *argv[]) {
	int i = 10, j = 20;
	double x = 10.2, y = 43.11;
	char a = 'v', b = 's';

	cout << "Original i, j: " << i << ' ' << j << '\n';
	cout << "Original x, y: " << x << ' ' << y << '\n';
	cout << "Original a, b: " << a << ' ' << b << '\n';

	swaping<int>(i,j);
	swaping<double>(x,y);
	swaping<char>(a,b);

	cout << "Swaped i, j: " << i << ' ' << j << '\n';
	cout << "Swaped x, y: " << x << ' ' << y << '\n';
	cout << "Swaped a, b: " << a << ' ' << b << '\n';

	return 0;
}
