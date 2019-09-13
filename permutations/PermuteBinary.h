#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <set>
#include <sstream>

class Permutations
{
public:
	void permuteBinHelper(int n, std::string remainer)
	{
		if (n == 0)
		{
			std::cout << remainer << std::endl;
			vec.push_back(remainer);
			count++;
		}
		else
		{
			permuteBinHelper(n - 1, remainer + std::to_string(0) ); 
			permuteBinHelper(n - 1, remainer + std::to_string(1) );
		}
	}
	void printAllBinary(int n)
	{
		permuteBinHelper(n, "");
		std::cout << count;
	}

private:
	int count=0;
	std::vector<std::string> vec;
};



void permuteBinHelper(int n, std::string remainer)
{
	if (n == 0)
	{
		std::cout<<remainer<<std::endl;
	}
	else
	{
		for (int i = 0; i < 2; i++)
		{
			//std::ostringstream stream;
			//stream << i;
			//permuteBinHelper(n-1, remainer + stream.str() );
			permuteBinHelper(n - 1, remainer + std::to_string(i) );
		}
	}
}

void printAllBinary(int n)
{
	permuteBinHelper(n, "");
}