#include <iostream>
using namespace std;

int main() {
  int amount = 70;
  int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
  int n = sizeof(notes) / sizeof(notes[0]);

  for (int i = 0; i < n; i++) {
    if (amount >= notes[i]) {
      int count = amount / notes[i];
      cout << count << " notes of " << notes[i] << " Taka" << endl;
      amount = amount - count * notes[i];
    }
  }
  return 0;
}
