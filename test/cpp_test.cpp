#include <iostream>
#include <math3d.h>

int main(void)
{
    std::cout << "\nC++ Tests\n";

    m3::vec4 v(0, 0, 0, 1);
    m3::mat4 scale = m3::mat4::gen_scale(2, 2, 2);
    m3::mat4 translation = m3::mat4::gen_translation(2, 3, 4);
    m3::quat rotation(180, m3::vec4(0, 0, 1, 0));
    m3::mat4 transform = scale * rotation * translation;

    m3::vec4 r = transform * v;

    std::cout << r.x() << ", " << r.y() << ", " << r.z() << ", " << r.w() << "\n";

    return 0;
}
