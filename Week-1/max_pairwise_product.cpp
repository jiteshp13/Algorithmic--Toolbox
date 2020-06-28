#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long MaxPairwiseProduct(const std::vector<int>& numbers)
{
	
    int n = numbers.size();

	int max1 = -1, max2 = -1;
	
    //Finds the largest number
	for(int i = 0; i < n; i++){
		if((max1 == -1)  || (numbers[i] > numbers[max1]))
			max1 = i;
	}
	
    //Finds the second largest number
	for(int i = 0; i < n; i++){
		if((max1 != i) && ((max2 == -1) || (numbers[i] > numbers[max2])))
			max2 = i;
	}

    return ((long long) numbers[max1] * numbers[max2]);
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
