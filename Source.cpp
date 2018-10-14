/*
	Don Morton
	10/14/2018
	Skynet-HK Aerial
*/

//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seeds a random number generator

	int target = rand() % 64 + 1; // gives "taget locatoin" on the 8x8 grid
	int found = 0;
	int ping = 1;

		do
		{
			int HKAerial = rand() % 64 + 1; // giver HKAerial prediction of the targets position on the 8x8 grid
			cout << "HK-Aerial drone Radar sending ping #" << ping << "\n";
			cout << "Tagert Location: " << target << "\n";
			cout << "HK-Aerialprediction: " << HKAerial << "\n";
			cout << "==========================================================\n";
			++ping;

			if (target > HKAerial)
			{
				cout << "HK-Aerial prediction was to low.\n Retying search.\n";
				cout << "==========================================================\n";
			}
			else if (target < HKAerial)
			{
				cout << "HK-Aerial prediction was to low.\n Retrying search.\n";
				cout << "==========================================================\n";
			}
			else
			{
				cout << "HK-Aerial drone has located target in grid " << target << "\n";
				cout << "Skynet HK-Aerial Software took " << ping << " predictions to locate the target.\n on a grid size of 8x8 (64).\n";
				cout << "==========================================================\n";
				++found;
			}
		} while (found == 0);

	return 0;
}