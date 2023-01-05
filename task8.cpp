#include <iostream>
using namespace std;
int multiply(int number);
main()
{
int number;
int total;
cout << " enter number";
cin >> number;
 total = multiply(number);
cout << "result is:" << total << endl;
}
int multiply(int number)
 {
  int result;
 result = number * 5;
 return result;
 }


