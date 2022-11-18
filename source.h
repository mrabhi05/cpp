#include <iostream>
using namespace std;
#include <assert.h>

bool leapYear(int year) {   

    if (year % 400 == 0 || year % 100 != 0 || year % 4 == 0){
        return true;
    }
    else {
        return false;
    }

}

bool primeNum( int number){
    
    if (number <= 1)
        return false;
    
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
 
    return true;
}

void allAnagram(string &a, int l, int r)
{
    // Base case
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            allAnagram(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
 

 

// void permute(string &a, int l, int r){
//     // Base case
//     if (l == r)
//         cout<<a<<endl;
//     else
//     {
//         // Permutations made
//         for (int i = l; i <= r; i++)
//         {
 
//             // Swapping done
//             swap(a[l], a[i]);
 
//             // Recursion called
//             permute(a, l+1, r);
 
//             //backtrack
//             swap(a[l], a[i]);
//         }w
//     };
// }
 
// Driver Code

