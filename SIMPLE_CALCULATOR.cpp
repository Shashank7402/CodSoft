# include <iostream>
using namespace std;

int main() {

  char operator;
  float a, b;

  cout << "Choose operation: +, -, *, /: ";
  cin >> operator;

  cout << "Enter two values: ";
  cin >> a >> b;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      cout << "Error!";
      break;
  }

  return 0;
}