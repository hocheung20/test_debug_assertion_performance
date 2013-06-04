#include "itkTimeProbe.h"
#include "itkArray.h"

int main()
{
	typedef itk::Array< unsigned char > ArrayType;
	itk::TimeProbe clock;  

	ArrayType array(4*1024*1024*1024); //Create 1 GB array
	
	clock.Start();
	for (unsigned int k = 0; k < 1000000000; ++k)
		array.fill(0);
	clock.Stop();

	std::cout << "Allocation took " << clock.GetTotal() << " seconds" << std::endl;

	return 0;
}