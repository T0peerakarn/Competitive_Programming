#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	return (a%b == 0) ? b : gcd(b, a%b);
}

int main()
{
	int a, b;
	scanf(" %d %d",&a,&b);
	printf("%d\n",gcd(a, b));
	return 0;
}
