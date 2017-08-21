#include <iostream>
#include <cmath>
#include <string>

using std::string;

int main()
{
	int T, N; //test cases, floor
	float V1, V2, time1, time2; //stair velocity, elevator velocity, time

	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> N;
		std::cin >> V1;
		std::cin >> V2;

		time1 = (N*sqrt(2))/V1;
		time2 = (N*2)/V2;

		if (time1 < time2)
			std::cout << "Stairs" << std::endl;
		else
			std::cout << "Elevator" << std::endl;
	}
	
	return 0;
}