#include <iostream>
using namespace std;

// test(7.9 , + , 6.2 )    
// test(7.9 , - , 6.2 )    
// test(7.9 , * , 6.2 )    
// test(7.9 , / , 6.2 )
// test(7.9 , = , 6.2 )

double calc(double number1, char operate, double number2){
  double result;
  
  switch(operate){
    case '+':
    result = number1 + number2;
    break;
    case '-':
    result = number1 - number2;
    break;
    case '*':
    result = number1 * number2;
    break;
    case '/':
    result = number1 / number2;
    break;
    default:
    result = -1.000000;
  }

  return result;
}


int main() {

  cout<<calc(7.9, '+', 6.2);
//  calc(7.9 , "+" , 6.2 );
}


