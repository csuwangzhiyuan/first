#include<iostream>

int main()
{
	
	int n,m=-2;
	int*a=&m;
	std::cin >> n;
	for (int i = 1; i < n; i++)
	{
		if ((i - *a) == 3)
		{
			std::cout << i << std::endl;
			a = &i;
			
		}
	}
	return 0;
}