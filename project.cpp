#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
const int size1 = 23;
string FirstAndLast(string str)
{
	string ch = str;
	for (int i = 0; i < ch.length(); i++)
	{
		
		int k = i;
		while (i < ch.length() && ch[i] != ' ')
			i++;

		ch[k] = (char)(ch[k] >= 'a' && ch[k] <= 'z'
			? ((int)ch[k] - 32) : (int)ch[k]);
		ch[i - 1] = (char)(ch[i - 1] >= 'a' && ch[i - 1] <= 'z'
			? ((int)ch[i - 1] - 32) : (int)ch[i - 1]);
	}

	return ch;
}

// Driver code
int main(int argc, char* argv[])
{
	string str;
	cout << "You have entired:" << argc << "\n";
	ofstream MyFile("t.txt");
	for (int i = 0; i <argc; ++i) {
		cin >> str;
		string p = FirstAndLast(str);
		MyFile << ' ' << p << ' ' << ' ';
	
		cin.get();
	}
		return 0;
}
