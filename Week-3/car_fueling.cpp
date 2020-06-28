#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops)
{
    
    int numRefills = 0, curReffils = 0, lastRefill = 0;
    int n = stops.size() - 2;
    
    while(curReffils <= n)
    {
        lastRefill = curReffils;
        
        //farthest reachable gas station from current position
        while((curReffils <= n) && (stops[curReffils + 1] - stops[lastRefill] <= tank))
            curReffils += 1;
        
        //couldn't reach the next gas station, returns impossible
        if(curReffils == lastRefill)
            return -1;
        
        //if still to left of destination, update the fuel count by 1
        if(curReffils <= n)
            numRefills += 1;
    }
    
    return numRefills;
}


int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n + 2);
    stops[0] = 0;
    stops[n + 1] = d;
    
    for (size_t i = 1; i <= n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
