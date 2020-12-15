#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	char s;

	while (in.peek() != EOF)
	{
		in.get(s);
		if (s == 'C')
			out << "C++";
		else
			out << s;
	}

	in.close();
	out.close();
	system("pause");
}