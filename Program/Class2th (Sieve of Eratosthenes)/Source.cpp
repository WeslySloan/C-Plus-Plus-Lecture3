#include <iostream>
#include <math.h>

using namespace std;

int list[101];

bool IsPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

void Sieve(int n)
{
	for (int i = 0; i <= n; i++)
	{
		list[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (list[i] == 0)
		{
			continue;
		}

		for (int j = i * 2; j <= n; j += i)
		{
			list[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (list[i] != 0)
		{
			cout << list[i] << " ";
		}
	}
}


int main()
{
	// cout << IsPrime(5) << endl;
	// cout << IsPrime(10) << endl;

	Sieve(50);


	return 0;
}