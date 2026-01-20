#include<iostream>
#include<algorithm>
using std::cin; using std::cout; using std::string; using std::max;
int max(int a, int b, int c);
int max(int a, int b, int c, int d);
int max(int a, int b, int c, int d, int e);
int max(int a, int b, int c, int d, int e, int f);
int main()
{
	cout << max(4, 6, 10) << "\n";
	cout << max(4, 6, 10,5) << "\n";
	cout << max(4, 6, 10,20,7) << "\n";
	cout << max(4, 6, 10,50,8,9) << "\n";

	return 0;
}
int max(int a, int b, int c)
{
	return(max(a, b) > c)?max(a, b) :c;
}
int max(int a, int b, int c, int d)
{
	return (max(a, b, c) > d) ? max(a, b, c) : d;
}
int max(int a, int b, int c, int d, int e)
{
	return (max(a, b, c,d) > e)? max(a, b, c, d):e;
}
int max(int a, int b, int c, int d, int e, int f)
{
	return (max(a, b, c, d,e) > f)? max(a, b, c, d,e):f;
}