// SOM_work.cpp Simple test file to make sure that the SOM is getting intialized correctly.

#include "pch.h"

int main()
{
	SOM newSom = SOM(15, 15, false, 3);
	double **newData = new double*[3];
	for (int i = 0; i < 5; i++)
	{
		newData[i] = new double[3];
	}
	newData[0][0] = 255.0; //Red
	newData[0][1] = 0.0;
	newData[0][2] = 0.0;
	
	newData[1][0] = 0.0; // Green.
	newData[1][1] = 255.0;
	newData[1][2] = 0.0;

	newData[2][0] = 0.0; //Blue.
	newData[2][1] = 0.0;
	newData[2][2] = 255.0;

	newSom.train_data(newData, 3, 1000, .1);
	printf("%s\n","Finished Training");
	newSom.save_weights("outfile.txt");
	printf("%s","Finished Writing to File");

}