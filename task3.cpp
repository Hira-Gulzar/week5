#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight( float base, float angle);
main()
{
float perpenpendicular;
float base;
float angle;
float radian;
float total;
cout << " enter base:";
cin >> base;
cout << " enter angle:";
cin >> angle;
total = calculateHeight(base , angle);
cout << " total is " << total;
}
float calculateHeight( float base, float angle)
{
float radian;
radian = angle / 57.2958;
float perpendicular;
perpendicular = base * tan(radian);
return perpendicular;
}