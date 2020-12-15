#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	string s;
	string s1;
	int d = 0;
	while (in.peek() != EOF)
	{
		getline(in, s);
		for (int i = 0; i < s.length(); i++)
		{
			if (s.length() > d)
			{
				d = s.length();
				s1 = s;
			}
		}

	}
	out << "Самая длинна строка содержит: " << d << " символа" << endl;
	out << "строка: " << s1 << endl;
	in.close();
	out.close();
	system("pause");
}