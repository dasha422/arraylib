
#include <iostream>
#include "arraylib.h"

using namespace std;

int main()
{
    const int N = 30;
    int temperatures[N];

    cout << "Enter temperatures for 30 days:" << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> temperatures[i];
    }

    cout << "Average temperature: "
         << arr_average(temperatures, N) << endl;

    cout << "Maximum temperature: "
         << arr_max(temperatures, N) << endl;

    cout << "Minimum temperature: "
         << arr_min(temperatures, N) << endl;

    cout << "Frosty days: "
         << arr_count_negative(temperatures, N) << endl;

    cout << "Median temperature: "
         << arr_median(temperatures, N) << endl;

    return 0;
}
