//м╥нд╪Ч
#pragma once
#include<iostream>
#include<string>
using namespace std;

class MyInteger
{
private:
	int value;
public:
	//A constructor with a default parameter.
	MyInteger(int = 0);
	int get()const;
	MyInteger addition(const MyInteger);
	int parseInt(const string&);
}; 
