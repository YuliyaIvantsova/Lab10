#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	ifstream fin("f.txt");
	ofstream hout("h.txt");
	int n;

	while (fin.peek() != EOF)
	{
		fin >> n;
		hout << n;
	}
	fin.close();
	hout.close();
	ifstream gin("g.txt");
	ofstream fout("f.txt");

	while (gin.peek() != EOF)
	{
		gin >> n;
		fout << n;
	}
	gin.close();
	hout.close();
	ifstream hin("h.txt");
	ofstream gout("g.txt");

	while (hin.peek() != EOF)
	{
		hin >> n;
		gout << n;
	}
	hin.close();
	hout.close();
	system("pause");
}