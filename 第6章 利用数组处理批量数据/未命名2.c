#include <stdio.h>
#include <climits.h>
using namespace std;
 
int main() 
{
    int max_int = INT_MAX;
    int min_int = INT_MIN;
    printf("The maximum value that can be stored in an int variable is: %d" , max_int); 
    // 2147483647
    printf("The maximum value that can be stored in an int variable is: %d" , min_int); 
    // -2147483648
    
    return 0;
