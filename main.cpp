#include <iostream>
// #include <mitsuba/render/mesh.h>
#include <drjit/math.h>

int main() {
	std::cout << "Test Mitsuba as a subproject: " << drjit::abs(-1) << std::endl;

//	auto t = mitsuba::AffineTransform<mitsuba::Point<float, 3>>();
//	std::cout<< "Test simple Mitsuba:\n" << t << std::endl;

//	auto mesh = mitsuba::Mesh<float, mitsuba::Color<float, 3>>("mesh", 4, 2);
//	std::cout<< "Created mesh with face count: " << mesh.face_count() << std::endl;
	return 0;
}
