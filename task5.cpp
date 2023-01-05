#include <iostream>
using namespace std;
bool isSymmetrical(int number);
main()
{
int number1;
int number2;
int number3;
bool answer;

cout << "enter first number:";
cin >> number;
bool isSymmetrical(number);
if(answer == true)
{
cout << " is symmetric";
}
if(answer == false)
{
cout << "non symmetric";
}
bool isSymmetrical(int number)
{
int output1;
int output2;
int output3;
int number1;
int number2;
int number3;
output1 = number%10;
number1= number/10;
cout << " enter number:";
output2 = number%10;
number2 = number/10;
cout << " enter number:";
output3 = number%10;
number3 = number/10;
if(number1==number2)
{
return true;
}
if(number1!=number2)
{
return false;
}
return 0;
}






