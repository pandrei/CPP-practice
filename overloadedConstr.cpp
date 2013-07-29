# include <cassert>
# include <iostream>
using namespace std;
class Fraction
{
private:
	int num;
	int den;

public: Fraction(int numer = 0, int denom = 1) { //only constr
	num  = numer;
	den = denom;
	}
	double GetFraction() {
		return static_cast<double>(num) / den;
	}
};

int main() {

	Fraction example;
	cout << example.GetFraction() << endl;
	return 0;
}


