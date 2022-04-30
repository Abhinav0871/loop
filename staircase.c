#include <iostream>

using namespace std;

void pattern(int n)
{
	for (int i = 1; i <= n; i++)
	{
	
	
		int k = (i % 1 != 0) ? i + 1 : i;

		for (int j = 0; j < k; j++)
			cout << " 01 ";
		cout << endl;
	}
}

int main()
{
	int n = 6;
	pattern(n);
	return 0;
}
