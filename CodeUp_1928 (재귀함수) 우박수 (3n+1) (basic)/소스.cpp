#include <iostream>
using namespace std;

void f(int n)
{
	cout << n << endl;
	if (n == 1)
		return;
	if (n % 2)
		f(n * 3 + 1);
	else
		f(n / 2);
}
int main()
{
	int n;
	cin >> n;
	f(n);
	return 0;
}