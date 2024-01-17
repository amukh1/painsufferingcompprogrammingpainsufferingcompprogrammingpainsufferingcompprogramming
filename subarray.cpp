#include "bits/stdc++.h"

int maxSubarr(int arr[], int n);

int main() {
    int n;
    std::cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++) {
        std::cin >> arr[i];
    }

    for(auto x : arr) {
        std::cout << x << " ";
    }

    std::cout << maxSubarr(arr, n) << std::endl;
}

int maxSubarr(int arr[], int n) {
    int best,sum = 0;
    for(int i = 0; i<n; i++) {
        sum = std::max(arr[i],sum+arr[i]);
        best = std::max(best,sum);
    }
    return best;
}