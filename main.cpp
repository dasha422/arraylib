#include <iostream>
#include "arraylib.h" // здесь "" а не < > так как эту библиотеку создали сами,она не стандартная.

using namespace std;

int  main() {
    int  data[4]={1,2,5,3};
    cout << "Sum: " << arr_sum(data, 4) << endl;
    cout << "Max: " << arr_max(data, 4) << endl;
    cout << "Min: " << arr_min(data, 4) << endl;
    cout << "Average: " << arr_average(data, 4) << endl;
    cout << "Positive: " << arr_count_positive(data, 4) << endl;
    cout << "Negative: " << arr_count_negative(data, 4) << endl;
    cout << "Zero: " << arr_count_zero(data, 4) << endl;
    cout << "Product: " << arr_product(data, 4) << endl;
    cout << "Median: " << arr_median(data, 4) << endl;
   
    return 0;
}






