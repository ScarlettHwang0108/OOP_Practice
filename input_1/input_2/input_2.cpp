//basic facility
#include<iostream>
#include<string>

const int i=100;

using namespace std;
void input(string(&school)[i], string(&classname)[i], int(&no)[i], string(&name)[i]);
void output(int(&no)[i], string(&name)[i]);
void output(string(&school)[i], string(&classname)[i]);

int n;

int main()
{   
	
	string school[i];
	string classname[i];
	int no[i];
	string name[i];
	cout << "please enter student number:" << endl;
	cin >> n;
	input(school, classname, no, name);
	output(school, classname);
	output(no, name);
	return 0;
}

void input(string(&school)[i], string(&classname)[i], int(&no)[i], string(&name)[i])
{
	int j;
	cout << "¡¾     student all information    ¡¿" << endl;
	cout << "----------------------------------" << endl;
	
	for (j = 0; j < n; j++)
	{
		cout << "please enter student no:" << endl;
		cin >> no[j];
		cout << "please enter student name:" << endl;
		cin >> name[j];
		cout << "please enter student school:" << endl;
		cin >> school[j];
		cout << "please enter student class:" << endl;
		cin >> classname[j];
		cout << "----------------------------------" << endl;
		
	}
}
//º¯ÊýÖØÔØ
void output(int(&no)[i], string(&name)[i])
{
	int j;
	cout << "¡¾     student information      ¡¿" << endl;
	cout << "----------------------------------" << endl;
	for (j = 0; j < n; j++)
	{
		
		cout << "Student no:" << no[j] << endl;
		cout << "student name:" << name[j] << endl;
		cout << "----------------------------------" << endl;
		
	}
}

void output(string(&school)[i], string(&classname)[i])
{
	int j;
	cout << "¡¾    student school and class   ¡¿" << endl;
	cout << "----------------------------------" << endl;
	for (j = 0; j < n; j++)
	{
		
		cout << "Student school:" << school[j] << endl;
		cout << "student class:" << classname[j] << endl;
		cout << "----------------------------------" << endl;
		
	}
}

