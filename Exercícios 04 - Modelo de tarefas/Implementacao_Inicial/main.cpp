#include <iostream>
using namespace std;

int main() {
  int T = 10;
  float S = 0;
	
	for(float i = 1; i <= T; i++)
	{
		cout << "S = " << S << " + " << (1/i) << " = " << (S + (1/i)) << endl;
		S += (1/i);
	}
	cout << "Serie de Taylor(" << T  << "): " << S;
	return 0;
}
