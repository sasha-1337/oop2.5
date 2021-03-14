#include "Long.h"

void Long::Display(Pair pair1, Pair pair2)
{
	Long l;
	cout << "(a, b) * (c, d) = (a * c), (b * d)" << endl;
	cout << " ( " << l.Multiply_1(pair1, pair2) << " , " << l.Multiply_2(pair1, pair2) << " )" << endl << endl;

	cout << "(a, b) - (c, d) = (a - c), (b - d)" << endl;
	cout << " ( " << l.Diff_1(pair1, pair2) << " , " << l.Diff_2(pair1.GetSecond(), pair2.GetSecond()) << " )" << endl;
}

int Long::Multiply_1(Pair a, Pair b) { return a.GetFirst() * b.GetFirst(); }

int Long::Multiply_2(Pair a, Pair b) { return a.GetSecond() * b.GetSecond(); }

int Long::Diff_1(Pair a, Pair b) { return a.GetFirst() - b.GetFirst(); }

int Long::Diff_2(int a, int b) { return a - b; }

void Long::Init(Pair pair) { SetPair(pair); }