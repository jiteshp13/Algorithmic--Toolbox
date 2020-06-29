#include <algorithm>             // Dot-Product
#include <iostream>
#include <vector>

using std::vector;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
  int temp=0;
	for(int i=0; i<a.size(); i++) {
		for(int j=i+1; j<a.size(); j++) {            // Sorting the array in reverse order
			if(a[i] < a[j] ) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	temp=0;
	for(int i=0; i<b.size(); i++) {
		for(int j=i+1; j<b.size(); j++) {
			if(b[i] < b[j]) {
				temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}

  for (size_t i = 0; i < a.size(); i++) {          // Finding the dot product
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {      // Taking input
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl; // Printing the maximum sum of dot product
}
