#include <iostream>

using namespace std;

double* extend(double p[10], double q[10] )
{
static double a[10];
for (int i(0); i < 10; i++)
{
a[i] = p[i] * q[i];

}
return a;
}

int main()
{
double *amount;
double price[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98},
quantity[10] = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
amount = extend(price, quantity);
for(int i = 0;i<10;i++)
{
cout<<"amount ["<<i+1<<"] = "<<amount[i]<<endl;
}
}
