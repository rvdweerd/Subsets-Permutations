#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <set>

std::set<std::string> generatePermutations(std::string string) {
	std::set<std::string> result;
	if (string == "")
	{
		result.emplace("");
	}
	else
	{
		for (int i = 0; i < (int)string.size(); i++)
		{
			char ch = string[i];
			std::string rest = string.substr(0, i) + string.substr(i + 1);
			for (std::string str : generatePermutations(rest))
			{
				result.emplace(ch + str);
				std::cout << "ch+str inside function = " << (ch + str) << std::endl;
			}
		}
	}
	return result;
}


void PermuteString(std::string remainer, std::string string)
{
	if (string.size() == 0)
	{
		std::cout << remainer << std::endl;
		return;
	}
	else
	{
		for (char c : string)
		{
			std::size_t pos = string.find(c);
			PermuteString(remainer + c, string.substr(0, pos) + string.substr(pos + 1));
		}
	}
}
void PermuteString(std::string string)
{
	std::string remainer = "";
	PermuteString(remainer, string);
}
void PermuteStringEXCLUSIVE(std::string string)
{
	for (std::string str : generatePermutations("AABB"))
	{
		std::cout << str << std::endl;
	}
}