#include "itkVector.h"
#include "itkImage.h"

int main()
{
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
  image->Allocate();
  
  return 0;
}