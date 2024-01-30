#include <iostream>

using namespace std;

int main() {
				double x,y;
				int oper;
				
				cout << "Type first number: ";
				cin >> x;

				cout << "Type second number: ";
				cin >> y;

				cout << endl;

				cout << "1) +\n2) -\n3) *\n4) /" << endl;
				cout << "Type operation: ";
				cin >> oper;

				cout << "\n";

				if (oper == 1) {
								cout << x + y << endl;
				} else if (oper == 2) {
								cout << x - y << endl;
				} else if (oper == 3) {
								cout << x * y << endl;
				} else if (oper == 4) {
								cout << x / y << endl;
				} else {
								cout << "Program has an problem." << endl;
				}
}
