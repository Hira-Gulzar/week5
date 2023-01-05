#include <iostream>
#include <cmath>
using namespace std;
bool fun(int number);
main()
{
int number;
bool answer;
string even;
cout << " Enter number:";
cin >> number;
answer = fun(number);
if(answer == true)
 {
cout << " it is evenish";
 }
if(answer != true)
 {
cout << "it is oddish";
 }
}
bool fun(int number)
{
int output1;
int output2;
int output3;
int output4;
int output5;
int result;
string even;
string odd;
output1 = number %10;
number = number /10;
output2 = number %10;
number = number/10;
output3 = number%10;
number = number/10;
output4= number%10;
number = number /10;
output5 = number %10;
number = number/10;
result = output1 + output2 + output3 + output4 + output5;
 if(result %2==0)
 {
 return true;
 }
 if(result %2!=0)
 {
 return false;
 }
return 0;
}
