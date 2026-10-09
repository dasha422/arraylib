#include <iostream>
#include <cstddef>
#include <algorithm>

using namespace std;
int arr_sum(const int* arr, size_t n) { // const означает,что через указатель arr нельзя менять массив;
 int s = 0;                             // принимаем указатель на массив, принимаем  количество чисел в массиве
 for (size_t i = 0; i < n; ++i) {
 s += arr[i];
 }
 return s;
}
int arr_max(const int *arr, size_t n) {
    int max= *arr;
    for (size_t u=0; u<n; u++) {
        if (max<*(arr+u)) {
            max=*(arr+u);
        }
    }
    return max;
}
int arr_min( const int *arr, size_t n){
    int min=*arr;
    for (size_t i=0; i<n;i++){
        if (min> *(arr+i)){
            min=*(arr+i);
        }
    }
    return min;
}
double arr_average(const int *arr, size_t n){
    double sa;
    double sum=0;
    for (size_t i=0; i<n; i++ ) {
       sum+=*(arr+i);
    }
    sa=sum/n;
    return sa;
}
int arr_count_positive(const int *arr, size_t n){
    int count_positive=0;
    for (size_t i=0; i<n; i++) {
        if (*(arr+i)>0){
            count_positive+=1;
        }
    }
    return count_positive;
}
int arr_count_negative(const int *arr, size_t n){
    int count_negative=0;
    for (size_t i=0; i<n; i++) {
        if (*(arr+i)<0){
            count_negative+=1;
        }
    }
    return count_negative;
}
int arr_count_zero(const int *arr, size_t n){
    int count_zero=0;
    for (size_t i=0; i<n; i++) {
        if (*(arr+i)==0){
            count_zero+=1;
        }
    }
    return count_zero;
}
int arr_product(const int *arr, size_t n){
    int proz=1;
    for (size_t i=0; i<n;i++){
        proz*=*(arr+i);
    }
    return proz;
}
double arr_median(const int *arr, size_t n) {
    double median;
    int* copy=new int[n]; // new создает место в памяти и говорим сколько памяти надо через тип данных;
    for (int i=0; i<n; i++){
        copy[i]=arr[i];
    }
    sort(copy, copy+n);
    if (n%2!=0){
        median=copy[n/2];
    }
    if (n%2==0) {
        median= (copy[n/2 -1]+copy[n/2])/2.0; // лучше делить на 2.0 чтобы при делениии int на 2 не было округления
    }
    delete[] copy;
    return median;
}