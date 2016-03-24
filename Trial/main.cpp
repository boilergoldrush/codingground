#include <iostream>
#include <limits>

using namespace std;
//extern print_max;

// Printing the max values of different nativities
void print_max(){
    float ma = std::numeric_limits<float>::max();
    int mai = std::numeric_limits<int>::max();
    double mad = std::numeric_limits<double>::max();
    long mal = std::numeric_limits<long>::max();
    cout << ma << endl << mai << endl << mad << endl << mal << endl;
} 

int main()
{
   cout << "Hello World" << endl; 
   
   float mi = std::numeric_limits<float>::min();
   float inf = std::numeric_limits<float>::infinity();
   print_max();
   
   return 0;
}

