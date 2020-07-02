

#include <iostream>
using namespace std;
#pragma once

struct arrow
{
	
	int number;
	int first;
	int second;
};
class blok
{
	
public:
	int nom;
	int to;
	int i;
	int x;
	arrow *mas= new mas[x];
	void add(int nom, int to)
	{
		arrow struckt1; 
		struckt1.number = i;
		struckt1.first = nom;
		struckt1.second = to;
	}
	void del(int nom, int to)
	{
		for (int j = 0; j < i; i++)
		{
			if (mas[j].first == nom and mas[j].second == to)
			{
			
				for (int k = j + 1; k < i; k++)
					mas[k - 1] = mas[k];
			}
		
		}
	
	
	}
};

int main()
{
    
}

