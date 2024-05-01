#include <iostream>
using namespace std;

template<typename T, size_t N>
T findMin(const T (&arr)[N]){
  T minVal = arr[0];
  for(size_t i = 1; i<N; ++i){
    if (arr[i]<minVal){
      minVal = arr[i];
    }
  }
  return minVal;
}

int main(){
  int intArr[] = {10, 5, 8, 3, 12};
  double doubleArr[] = {3.5, 2.1, 6.7, 1.8, 4.9};

  cout<<"Minimum value in intArr: "<<findMin(intArr)<<endl;
  cout<<"Minimum value in doubleArr: "<<findMin(doubleArr)<<endl;

  return 0;
}
