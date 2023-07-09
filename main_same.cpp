#include <iostream>
#include <string>
use namespace std;

void change_variable(int a, const int b) {
    a = b;
}

int main()
{
  cout << "Hello World and ChatGPT" << endl;
  
  int a = 5;
  change_variable(a, 8);
}