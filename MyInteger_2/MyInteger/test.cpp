//²âÊÔ
#include "MyInteger.h"
int main()
{
	    MyInteger int1, int2(100);
		cout << int1.get() <<"  "<< int2.get() << endl;
		int1.addition(int2);
		string str;
		cout << "ÇëÊäÈëÒ»´®Êı×Ö:" << endl;
		cin >> str;
		int1.parseInt(str);
		return 0;
	

}