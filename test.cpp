#include <iostream>
using namespace std;
#include "source.h"

// Driver Code
int main()
{
    string str = "ABC";
    int n = str.size();
    allAnagram(str, 0, n-1);
    return 0;
}
 