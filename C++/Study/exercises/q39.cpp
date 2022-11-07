#include <iostream>
using namespace std;
#include <cmath>

int countOnes(int num){
   int binary[] = {}; 
   int res, rem, count=0;
   while (num > 0)
   {
        cout << count << endl;
        rem = num%2;
        binary[count] = rem;
        num = floor(num/2);
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
