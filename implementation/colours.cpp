// C++ code for the above approach
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{

	// Given array
	vector<int> lst= {1, 2 ,1,1,2};
    int count1=0;
	bool flag1 = true;
	bool flag_adj = false;
	int count_color = 0;
	int colour=0;
     int count=0;
	for (int i = 0; i < lst.size() - 1; i++) {
		if (lst[i] != lst[i + 1])
			flag1 = false;
		else
			count += 1;
	}

	if (flag1 == true) {
		count_color = 1;
	}
	else {
		if (( lst.size() - count) % 2 != 0)
			count_color = 3;
		else
			count_color = 2;
	}

	// Printing the answer
	cout << count_color << "\n";
	return 0;
}

// This code is contributed by Taranpreet
