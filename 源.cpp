#include <iostream>
using namespace std;
int max(int a, int b, int c)           //��3�������е������
{
    if (b > a) a = b;
    if (c > a) a = c;
    return a;
}
float max(float a, float b, float c)  //��3��ʵ���е������
{
    if (b > a) a = b;
    if (c > a) a = c;
    return a;
}
long max(long a, long b, long c)  //��3���������е������
{
    if (b > a) a = b;
    if (c > a) a = c;
    return a;

}
int main()
{
    int a, b, c;  float d, e, f;  long g, h, i;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    cin >> g >> h >> i;
    int m;
    m = max(a, b, c);                        //����ֵΪ����
    cout << "max_i=" << m << endl;
    float n;
    n = max(d, e, f);                          //����ֵΪʵ��
    cout << "max_f=" << n << endl;
    long int p;
    p = max(g, h, i);                          //����ֵΪ������
    cout << "max_l=" << p << endl;
    return 0;
}


