#include "lungu.h"

int main(int argc, char *argv[])
{
	if (!lungu::validateArguments(argc, argv))
	{
		return 1;
	}
	int taskNumber = std::stoi(argv[1]);
	std::string inputFilename = argv[2];
	std::string outputFilename = argv[3];


	return 0;
}
