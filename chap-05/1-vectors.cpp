#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int                 array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector<int>    vector ( &array[2], &array[5] );
    std::vector<int>    full(array, array + 6);

    auto it = full.begin();
    auto it2 = it + 4;

    

    return 0;
}