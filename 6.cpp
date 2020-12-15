#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream in("f.txt");
	ofstream gout("g.txt"), hout("h.txt");
	int k;
	while (in.peek() != EOF)
	{
		in >> k;
		if (k % 2 == 0)
		{
			gout << k << " ";
		}
		else
		{
			hout << k << " ";
		}
	}
	in.close();
	gout.close();
	hout.close();
	system("pause");
}