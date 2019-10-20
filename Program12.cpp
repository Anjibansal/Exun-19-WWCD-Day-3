// Binary to Decimal conversion
// Complexity= M

#include <iostream>
using namespace std;

int b2d(int n) { 
    int temp = n,value = 0, c = 1; 
    int r = 0;
    while (temp > 10) { 
        r = temp % 10; 
        temp = temp/10;
        value += r * c; 
        c *= 2; 
    } 
    r = temp%10;
    value += r * c; 
    return value; 
}

int o2d(int n)
{
    
}

int main() {
	//code
	int n = 01100;
	if(n%10 != 0 && n%10 != 1)
	{
	    cout<<"oct";
	    int res = o2d(n);
	}
	else
	{
	    cout<<"binary";
	    int res = b2d(n);
	}
	cout<<res;
	return 0;
}

