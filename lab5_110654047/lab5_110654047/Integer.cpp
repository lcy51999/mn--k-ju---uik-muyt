#include "Integer.h"

Integer::Integer(string number) 
{
	//TODO: read the string and construct the huge integer
	for (int i = 0; i < number.size(); i++) {
		if (number[i] == 'a')
			num.push_back(10);
		else if (number[i] == 'b')
			num.push_back(11);
		else if (number[i] == 'c')
			num.push_back(12);
		else if (number[i] == 'd')
			num.push_back(13);
		else if (number[i] == 'e')
			num.push_back(14);
		else if (number[i] == 'f')
			num.push_back(15);
		else
			num.push_back((int)number[i]);
		for (int i = 0; i < num.size(); i++)
			cout << num[i] << " ";
		cout << endl;
	}
}

/*Integer Integer::operator +(const Integer& b) {
	//TODO: perform + opearion overloading
}
Integer Integer::operator -(const Integer& b) {
	//TODO: perform - opearion overloading
}

ostream& operator << (ostream& out, const Integer& i) {
	//TODO: perform output overloading
}
*/