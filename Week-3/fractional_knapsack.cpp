#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//sorts the 2-D vector on basis of a 0th column in descending order
bool sortcol(const vector<double>& v1, const vector<double>& v2)
{ 
    return v1[0] > v2[0]; 
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
    double value = 0.0;
    
    int n = weights.size();
    vector<vector<double> > perunit( n , vector<double> (2));
    
    //2-D vector, the 0th col contains the per unit value of each item, 
    //1st col tells that to which weights[] the per unit value belongs
    for(int i = 0; i < n; i++)
    {
        perunit[i][0] = (double) values[i] / weights[i];
        perunit[i][1] = i;
    }
    
    //sorting on basis of per unit value
    sort(perunit.begin(), perunit.end(), sortcol);
    
    for(int i = 0; i < n; i++)
    {
        if(capacity > 0)
        {
            int index = perunit[i][1];          //gives the index to which the per unit value belongs in the weights[]
            
            int a = (weights[index] < capacity) ? weights[index] : capacity;
            
            value = value + (a * perunit[i][0]);
            
            weights[index] = weights[index] - a;
            
            capacity = capacity - a;
        }
    }

    return value;
}

int main()
{
    int n;
    int capacity;
    cin >> n >> capacity;
    
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i] >> weights[i];
    }
  
    double optimal_value = get_optimal_value(capacity, weights, values);
    
    cout << fixed << setprecision(4);
    cout << optimal_value << endl;
  
    return 0;
}
