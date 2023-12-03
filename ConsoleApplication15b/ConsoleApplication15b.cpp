#include <iostream>
int main()
{
	unsigned a, b, c;
	unsigned a1, b1, c1;
	std::cin >> a >> b >> c;
	std::cin >> a1 >> b1 >> c1;
	if(a/a1==b/b1 && b/b1==c/c1 && a/a1==c/c1)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}