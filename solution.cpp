#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	float dtb;
	cin >> a >> b >> c;
    if ( (a >= 0 && a <= 10) && (b>=0 && b <= 10) && (c >= 0 && c <=10)) {
        dtb = (a + b + c) / 3.0;
	    if (dtb >= 9.0) cout << "Hang A";
	    else if ((dtb >= 7.0) && (dtb < 9.0)) cout << "Hang B";
	    else if ((dtb >= 5.0) && (dtb < 7.0)) cout << "Hang C";
	    else if (dtb < 5.0) cout << "Hang F";
    }
    else cout << "Diem khong hop le";
	return 0;
}
