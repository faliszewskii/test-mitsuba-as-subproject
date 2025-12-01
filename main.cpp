#include <iostream>
#include <drjit/math.h>
#include <mitsuba/render/mesh.h>

int main() {
	std::cout << "Test Mitsuba as a subproject: " << drjit::abs(-1) << std::endl;
	auto scene = mitsuba::Mesh<float, mitsuba::Color<float, 3>>("lol", 1, 10);
	std::cout<< "Created mesh with face count: " << scene.face_count() << std::endl;
	return 0;
}
