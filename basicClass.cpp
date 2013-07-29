# include <cassert>
# include <iostream>
using namespace std;
class Fraction
{
private:
	int num;
	int den;

public: Fraction() { //default
	num = 0;
	den = 1;
	}
	Fraction(int numer, int denom = 1) { //with params
	num  = numer;
	den = denom;
	}
	double GetFraction() {
		return static_cast<double>(num) / den;
	}
};

int main() {

	Fraction example(5,3);
	cout << example.GetFraction() << endl;
	return 0;
}


