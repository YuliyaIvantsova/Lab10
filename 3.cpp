#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	ifstream in("f.txt");
	ofstream out("g.txt");
	char symbol;
	cout << "Введите букву: ";
	cin >> symbol;
	char s[100];
	int n = 0;
	while (in.peek() != EOF)
	{
		in.getline(s, sizeof(s));
		if (s[0] == symbol)
			n++;
	}
	out << n;
	in.close();
	out.close();
	system("pause");
}