#include <iostream>
using namespace std;
int add (int number1, int number2);
float divide ( int number1 , int number2);
int isGreater (int number1 , int number2);
main()
{
 int number1;
 int number2;
 int total;
 float result;
 int big;
 cout << " enter number 1:";
 cin >> number1;
 cout << " enter number 2:";
 cin >> number2;
 total = isGreater( number1 ,  number2);
 cout << "greater is" << total << endl;
 cout << "program end";
}
int add (int number1, int number2)
{
int sum;
sum = number1+ number2;
return sum;
}
float divide (int number1 , int number2)
{
float divide;
divide = number1 / number2;
return divide;
}
int isGreater (int number1 , int number2)
{
if(number1>number2)
 {
return number1;
}
if(number1<number2)
{
return number2;
}
return 0;
}