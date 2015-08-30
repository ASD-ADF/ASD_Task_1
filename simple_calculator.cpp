#include <iostream>
using namespace std;

int main
{
int num, x0, y0,x1,y1,x2,y2;
while (true){
		int num;
		cout << "to add press 1, to subtract press 2, to times press 3, to divide press 4: ";
		cin >> num;
		switch(num) {
			case 1:
				int x0;
				int y0;
				cout << "Adding\n";
				cout << "enter your first number: ";
				cin >> x0;
				cout << "enter your second number: ";
				cin >> y0;
				cout << "your answer is ";
				cout << x0 + y0;
				break;
			case 2:
				int x1;
				int y1;
				cout << "Subtracting\n";
				cout << "1st #: ";
				cin >> x1;
				cout << "2nd #: ";
				cin >> y1;
				cout << x1 - y1;
				break;
			case 3:
				int x2;
				int y2;
				cout << "Multiplying\n";
				cout << "1st #: ";
				cin >> x2;
				cout << "2nd #: ";
				cin >> y2;
				cout << x2 * y2;
				break;
			case 4:
				break;
		}
		system ("pause");
	}return (0);
}
