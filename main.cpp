#include "itkTimeProbe.h"
#include "itkArray.h"

int main()
{
	typedef itk::Array< unsigned char > ArrayType;
	itk::TimeProbe clock;  

	ArrayType array(6); //Create array of 6 elements
	
	clock.Start();
	for (unsigned int k = 0; k < 1024*1024*1024; ++k)
		array.fill(0);
	clock.Stop();

	std::cout << "Allocation took " << clock.GetTotal() << " seconds" << std::endl;

	return 0;
}