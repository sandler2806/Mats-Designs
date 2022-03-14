#include "mat.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;


int main() {
	string str;
	do
	{
		cout << "welcome to the main program," << endl;
		cout << "insert a input separated by ',' for example '3,5,&,%'" << endl;
		cout << "or write 'example' to see more rags" << endl;
		cout << "write exit for shut down the program" << endl;
		
		cin >> str;
		if(str!="exit"){
			if(str=="example"){
				for (size_t i = 0; i < 10; i++)
				{
					cout << mat((rand() % 18)*2+1, (rand() % 18)*2+1, rand() % 93 + 33, rand() % 93 + 33) << endl;
				}
				
			}

			else{
				int num1=str[0]-'0';
				int num2=str[2]-'0';
				char a=str[4];
				char b=str[6];
				cout << mat(num1, num2, a,b) << endl;
			}

		}
		
	} while (str!="exit");
}
