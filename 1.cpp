#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	int n;

	while (in.peek() != EOF)
	{
		in >> n;
		if (n > 0 && n % 3 == 0)
		{
			out << n << "\n";
		}
	}

	in.close();
	out.close();
	system("pause");
}