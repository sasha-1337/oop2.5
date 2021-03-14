#include "Pair.h"
#include "Long.h"

int main()
{	
	Pair pair1(1,1), pair2(1,1), q;
	cout << " pair (a,b) - ?"; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - ?"; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Pair a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;
	
	Long l;
	l.Init(q);
	l.Display(pair1, pair2);

	Pair z(1, 1);
	cout << endl << endl;
	cout << " a  " << z << endl;
	cout << " a++  " << z++;
	cout << " a--  " << z--;
	cout << " ++a  " << ++z;
	cout << " --a  " << --z;

	return 0;
}

// (a,b) + (c,d) = (a + c), (b + d)