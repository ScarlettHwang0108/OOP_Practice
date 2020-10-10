//函数
#include "MyInteger.h"

MyInteger::MyInteger(int v)
{
	value = v;
}
int MyInteger::get()const
{
	return value;
}
 MyInteger MyInteger::addition(MyInteger myint)
{
	 MyInteger temp;
	 temp.value = this->value + myint.value;
	 return temp;
}
int MyInteger :: parseInt(const string&str)
{
	int i;
	const char* k;
	k = str.c_str();
	int m = 0;
	
	if (k[0] == '-')
	{
		for (int i = 1; i < str.length(); i++)
		{
			if (k[i] <= '9' && k[i] >= '0')
			{
				m = 1;
				value = value * 10 + k[i] - '0';
			}
			else
			{
				m = 0; break;
			}
		}
		if (m == 1)
		{
			cout << '-' << value << endl;
			return 0;
		}
		if (m == 0)
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}
	else
	{

		for (int i = 0; i < str.length(); i++)
		{
			if (k[i] <= '9' && k[i] >= '0')
			{
				m = 1;
				value = value * 10 + k[i] - '0';
			}
			else
			{
				m = 0;
				break;
			}
		}
		if (m == 1)
		{
			cout << value << endl;
		}
		if (m == 0)
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}

}

		

