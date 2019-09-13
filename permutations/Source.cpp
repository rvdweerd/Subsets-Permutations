#include "PermuteString.h"
#include "PermuteBinary.h"

int main()
{
	//std::cout << "Non-exclusive permutations: " << std::endl;
	//PermuteString("AABB");
	//std::cout << "Exclusive permutations: " << std::endl;
	//PermuteStringEXCLUSIVE("AABB");
	
	printAllBinary(3);
	Permutations perm;
	perm.printAllBinary(3);

	std::cin.get();
	return 0;
}