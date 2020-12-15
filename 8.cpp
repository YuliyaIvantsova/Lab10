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
		out << s << " | длина: " << s.length() << endl;
	}
	in.close();
	out.close();
	system("pause");
}