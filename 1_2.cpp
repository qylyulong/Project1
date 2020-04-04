#include<iostream>
using namespace std;
void sort(float &a,float &b,float &c);
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	sort(a,b,c);
	cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}
void sort(float &a, float &b, float &c)
{
	float t;
	if (a > b)
	{
		t = a; a = b; b = t;
	}
	if (a > c)
	{
		t = a; a = c; c = t;
	}
	if (b > c)
	{
		t = b; b = c; c = t;
	}
	

}
