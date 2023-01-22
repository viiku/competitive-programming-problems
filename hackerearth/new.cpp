// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function that return the coordinates 
// of the fourth vertex of the rectangle 
pair<int, int> findFourthVertex(int n, int m, string s[]) 
{ 
	map<int, int> row, col; 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 

			// Save the coordinates of the given 
			// vertices of the rectangle 
			if (s[i][j] == '*') { 
				row[i]++; 
				col[j]++; 
			} 
	int x, y; 
	for (auto tm : row) 
		if (tm.second == 1) 
			x = tm.first; 
	for (auto tm : col) 
		if (tm.second == 1) 
			y = tm.first; 

	// 1-based indexing 
	return make_pair(x + 1, y + 1); 
} 

// Driver code 
int main() 
{ 
	string s[] = { "*.*", "*..", "..." }; 
	int n = sizeof(s) / sizeof(s[0]); 
	int m = s[0].length(); 

	auto rs = findFourthVertex(n, m, s); 
	cout << rs.first << " " << rs.second; 
} 
