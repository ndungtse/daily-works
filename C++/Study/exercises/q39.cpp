#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int countOnes(int num)
{
     string str = to_string(num);
     int binary[32];
     int res, rem, count = 0;
     while (num > 0)
     {
          rem = num % 2;
          binary[count] = rem;
          num = floor(num / 2);
          count++;
     }
     //  cout << count << endl;

     for (int i = 0; i < count; i++)
     {
          cout << binary[i];
     }

     return 0;
}

int main(int argc, char const *argv[])
{
     countOnes(9);
     return 0;
}
