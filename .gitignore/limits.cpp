#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
   cout << "Minimum value for unsigned int          : " << numeric_limits<unsigned int>::min() << endl;
   cout << "Maximum value for unsigned int          : " << numeric_limits<unsigned int>::max() << endl;
   cout << "Minimum value for std::string::size_type: " << numeric_limits<std::string::size_type>::min() << endl;
   cout << "Maximum value for std::string::size_type: " << numeric_limits<std::string::size_type>::max() << endl;
   cout << "Minimum value for unsigned long long    : " << numeric_limits<unsigned long long>::min() << endl;
   cout << "Maximum value for unsigned long long    : " << numeric_limits<unsigned long long>::max() << endl;
   cout << "Minimum value for signed long long      : " << numeric_limits<long long>::min() << endl;
   cout << "Maximum value for signed long long      : " << numeric_limits<long long>::max() << endl;

   return 0;
}
