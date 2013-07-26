//Follow these instructions to enable Debug symbols in Release mode for Visual studio
//http://msdn.microsoft.com/en-us/library/fsk896zz%28v=vs.110%29.aspx

#include "itkTimeProbe.h"

int main(int argc, char* argv[])
{
	itk::TimeProbe clock;
	clock.Start();

	double dummy = 0.0;
	for (unsigned long long k = 0; k < 1000 * 1000 * 1000 * 1000; ++k)
	{
		dummy += std::pow(123456.0, 2);
	}
	clock.Stop();
	std::cout << dummy << std::endl;
	std::cout << clock.GetTotal() << std::endl;

	itk::TimeProbe clock2;
	clock2.Start();

	double dummy2 = 0.0;
	for (unsigned long long k = 0; k < 1000 * 1000 * 1000 * 1000; ++k)
	{
		dummy2 += 123456.0 * 123456.0;
	}
	clock2.Stop();
	std::cout << dummy2 << std::endl;
	std::cout << clock2.GetTotal() << std::endl;

	
}