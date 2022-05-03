#include "Complex.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int k;
	complex first, second;
	first.Init();
	second.Init();
	cout << "1) +; 2) -; 3) *; 4) /" << endl;
	cin >> k;
	switch (k) {
	case (1):
		first.sum(second);
		break;
	case (2):
		first.min(second);
		break;
	case (3):
		first.mult(second);
		break;
	case (4):
		first.div(second);
		break;
	}
}