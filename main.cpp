#include <iostream>
using namespace std;

int main(){
  int numar;

  cout << "Introduceti nr dumneavoastra: ";
  cin >> numar;

  if(numar < 0)
    cout << "Numarul este negativ.";
    else 
      cout << "Numarul este pozitiv sau egal cu 0.";

  return 0;
}