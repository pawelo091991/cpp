#if !defined(PASCALS_TRIANGLE_H)
#define PASCALS_TRIANGLE_H
#include <vector>
namespace pascals_triangle {
	std::vector<std::vector<int>> generate_rows(int);
	int factorial(int);
}  // namespace pascals_triangle

#endif // PASCALS_TRIANGLE_H