#include <iostream>
#include <fstream>
#include "Integer.h"

using namespace std;

//read the data from the file
void readFile(const char *fileName);


int main()
{
	readFile("input1.txt");
	return 0;
}

void readFile(const char *fileName) {
	ifstream inputFile;

	//TODO: Read the input file here.
	//int lines = ...

	inputFile.open(fileName);
	int lines;
	inputFile >> lines;
	while (!(inputFile.eof())) {
		for (size_t i = 0; i < lines; i++) {
			Integer answer;
			string s1, s2;
			char c;
			int flag = 1;
			inputFile >> c;
			if (c == '-')
				flag = -1;
			else
				s1 += c;
			while (inputFile >> c) {
				if (c == '-') {
					if (flag == 1) {
						flag = -1;
						break;
					}
					else if (flag == -1) {
						flag = 1;
						break;
					}
				}
				else if (c == '+')
					break;
				else
					s1 += c;
			}
			Integer a(s1);
			while (inputFile >> c) {
				if (c == ' ')
					break;
				else
					s2 += c;
			}
			Integer b(s2);

			/*cout << i + 1 << endl;
			cout << "num1: " << a << endl;
			cout << "num2: " << b << endl;
			cout << "result: " << answer << endl << endl;*/
		}

		inputFile.close();
	}
}