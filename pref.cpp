#include <iostream>
using namespace std;
bool isSymmetrical(int number);
main()
{
int number;
bool answer;
cout << " enter number:";
cin >> number;
answer = isSymmetrical(number);
if(answer == true)
 {
cout << " is symmetric";
 }
if(answer =! true)
 {
cout << "non symmetric";
 }
}
bool isSymmetrical(int number)
{
int output1;
int output2;
int output3;

output1 = number%10;
number= number/10;
output2 = number%10;
number = number/10;
output3 = number%10;
number = number/10;
 if(output1==output3)
 {
 return true;
 }
 if(output1!=output3)
 {
return false;
}
return 0;
}






