#include<iostream>
using namespace std;
int main()
{
	int max1(int a = 0, int b = 0, int c = 0);
	int max2(int x = 0, int y = 0);
	int a, b, c, x, y;
	cin >> a >> b >> c;
	cout << "max1(a,b,c)=" << max1(a, b, c) << endl;
	cin >> x >> y;
	cout << "max2(x,y)=" << max2(x, y) << endl;
	return 0;
}
int max1(int a=0, int b=0, int c=0)
{
	if (b > a) a = b;
	if (c > a) a = c;
	return a;
}
int max2(int x=0, int y=0)
{
	return(x>y ? x:y);
}