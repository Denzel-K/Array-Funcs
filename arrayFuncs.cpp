#include <iostream>
using namespace std;

double calcTotal(double prices[], int size);
int searchArray (int numbers[], int size, int element);

int main(){
  
  double prices[] = {120.00, 389.05, 35.89, 467.45, 100.00, 250.50};
  int price_size = sizeof(prices)/sizeof(double);
  
  double total = calcTotal(prices, price_size);
  cout << "Total amount of prices: KSH " << total << '\n';
  
  int numbers[] = {1,2,3,4,5,6,7,8,9,10};
  int num_size = sizeof(numbers)/sizeof(int);
  int index;
  int myNum;
  
  cout << "Enter number to search for:" << '\n';
  cin >> myNum;
  
  index = searchArray (numbers, num_size, myNum);
  
  if (index != -1){
    cout << myNum << " is in the index " << index <<'\n';
  }
  else {
    cout <<myNum<< " has not been found !" << '\n';
  }
 
 
  return 0;
}

double calcTotal(double prices[], int size){
  double total = 0;
  
  for (int i = 0; i < size; i++){
    total += prices[i];
  }
  
  return total;
}

int searchArray (int numbers[], int size, int element){
  for (int i = 0; i < size; i++ ){
    if (numbers[i] == element) {
      return i;
    }
  }
  return -1;
}