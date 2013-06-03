#include "itkVector.h"
#include "itkImage.h"
#include "itkTimeProbe.h"

int main()
{
  itk::TimeProbe clock;
  typedef itk::Vector< unsigned char, 1 > VectorType;
  typedef itk::Image< VectorType, 3 > ImageType;
  ImageType::Pointer image = ImageType::New();
  
  ImageType::IndexType start;
  start.Fill(0);
  
  ImageType::SizeType size;
  size[0] = 10 * 1024;
  size[1] = 1024;
  size[2] = 1024;
  
  ImageType::RegionType region(start, size);
  
  image->SetRegions(region);
  clock.Start();
  image->Allocate();
  clock.Stop();
  
  std::cout << "Allocation took " << clock.GetTotal() << " seconds" << std::endl;
  
  return 0;
}