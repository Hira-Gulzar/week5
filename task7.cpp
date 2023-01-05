#include <iostream>
using namespace std;
main()
{
int hour;
int minutes;
int result;
int final;
int final1;
int final2;
cout << " enter hours:";
cin >> hour;
cout << " enter minutes:";
cin >> minutes;
result = minutes+15;
if(result >=59)
{
final=result-60;
final2=hour+1;
if(final2==24)
{
 final2=0;
}
 cout << final2;
 cout << ":";
 cout << final1;
}
}