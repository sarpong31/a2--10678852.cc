#include <iostream>
using namespace std ;

int main(){

 int a ;

 cout << "enter a number" << endl ;
 cin >> a ;
 bool isPrime = false;

 for(int i = 2 ; i < a ;i++){
    if(a % i  == 0){
        isPrime = true;
    }
 }
 if(isPrime == false){
    cout<< a  << " is a  prime number" << endl;
 }else{
  cout << a << " is not a prime number" <<endl;
 }

return 0;
}
