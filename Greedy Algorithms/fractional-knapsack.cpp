/*
Given weights and values of ‘N’ items and a knapsack of size ‘W’.
Put the items in the knapsack such that the total value of items in the knapsack is maximum.

Note:
You are allowed to break the items.

Problem link - https://www.codingninjas.com/studio/problems/fractional-knapsack_975286
*/

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // ITEMS contains {weight, value} pairs.

    double ans = 0;
    vector<pair<float, int>>ratio;

    for(int i=0; i<n; i++) {
        ratio.push_back(pair<float,int>((float)items[i].first/items[i].second, i));
    }
    sort(ratio.begin(), ratio.end());

    int i=0;
    while(w>0 and i<n) {
        int ind = ratio[i].second;

        if(items[ind].first <= w) {
            w -= items[ind].first;
            ans += items[ind].second;
        }
        else
            break;
        i++;    
    }
    if(w>0 and i<n) {
        int ind = ratio[i].second;

        ans += w/ratio[i].first; 
    }

    return ans;
}


/*
Approach:

We first find out the value by weight ratio to know which element to choose first.
For that we make a ratio vector that stores weight by value ratio along with i as a pair.
This will be easier to sort for further calculation. Then we iterate over this vector to find 
index i of hightest ratio element and add it up to ans.
*/