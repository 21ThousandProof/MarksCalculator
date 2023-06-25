#include <bits/stdc++.h>
using namespace std;



float percentage(float a, float b) {
	return (a/b) * 100.0;
}

float getMinMarks(float mid1, float cutoff) {
	float mid2 = 0;
	float res = -1;
	while(mid2 <= 30.0) {
		if(mid1 >= mid2) {
			res = (mid1 * 0.7) + (mid2 * 0.3);
		}
		else {
			res = (mid1 * 0.3) + (mid2 * 0.7);
		}
		if(res >= cutoff) {
			cout << "resultant : " << res << endl;
			break;
		}
		mid2 += 0.1;
	}
	return mid2;
}

void Solution() {
	
	float mid1, mid2, cutoff;
	
	cout << "Enter mid1 : ";
	cin >> mid1;
	cout << "Enter Cutoff Marks : ";
	cin >> cutoff;
	
	float res = getMinMarks(mid1, cutoff);
	
	cout << "MID2 : " << res << endl;
	
	cout << "Enter any key to exit\n";
	char c;
	cin >> c;
}                                                    

int main() {
    Solution();
	return 0;
}