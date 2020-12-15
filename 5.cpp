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
	string s2 = "";
	int k = 0;
	while (in.peek() != EOF)
	{
		in.getline(s, sizeof(s));
		if (s[0] == toupper(symbol))
		{
			s2 = s;
		}
	}
	if (s2 != "")
		out << "Строка, начинающаяся с буквы " << '"' << symbol << '"' << ':' << s2;
	else
		out << "Строка, начинающаяся с буквы " << '"' << symbol << '"' << " не существует";
	in.close();
	out.close();
	return 0;
}