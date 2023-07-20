#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int a[], int size)
{
	int max_current = INT_MIN, max_last = 0;

	for (int i = 0; i < size; i++) {
		max_last = max_last + a[i];
		if (max_current < max_last)
			max_current = max_last;

		if (max_last < 0)
			max_last = 0;
	}
	return max_current;
}

// Driver Code
int main()
{
	int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);

	// Function Call
	int max_sum = maxSubArray(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
