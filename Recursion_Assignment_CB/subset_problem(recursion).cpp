
#include <iostream>
#include <vector>
using namespace std;

// Recursive function to print subsets that sum to target
void printSubsets(vector<int>& arr, int index, vector<int>& subset, int target, int & count) {
    if (target == 0) {
		count++;
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "  "; // Two spaces between subsets
        return;
    }
    
    if (index == arr.size() || target < 0) {
        return;
    }
    
    // Include current element
    subset.push_back(arr[index]);
    printSubsets(arr, index + 1, subset, target - arr[index], count );
    
    // Exclude current element
    subset.pop_back();
    printSubsets(arr, index + 1, subset, target, count );
}



int main() {
    int N, target;
    cin >> N; // Input array size
    vector<int> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // Input array elements
    }
    
    cin >> target; // Input target sum
    
    vector<int> subset;
	int count =0;
    
    printSubsets(arr, 0, subset, target, count);
    cout << endl;
	
    cout << count << endl;
    
    return 0;
}
