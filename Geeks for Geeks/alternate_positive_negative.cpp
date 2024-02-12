#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector <int> negative,positive;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0) negative.push_back(arr[i]);
	        else positive.push_back(arr[i]);
	    }
	    int i=0,j=0,k=0;
	    while(i<negative.size() && j<positive.size()){
	        arr[k++]=positive[j++];
	        arr[k++]=negative[i++];
	    }
	    while(j<positive.size()){
	        arr[k++]=positive[j++];
	    }
	    while(i<negative.size()){
	        arr[k++]=negative[i++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
