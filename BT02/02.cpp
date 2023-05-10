#include <iostream>
using namespace std;
int main () {
   int n = 5, k;
  for (k = 1; k <= 50; k++) {
  	if ( (k%n)) continue;
      cout << k << '\t';
  }
}
