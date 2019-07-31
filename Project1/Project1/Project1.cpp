#include <iostream>
#include <vector>

bool test(std::vector<std::vector<bool>> grid, std::vector<std::vector<bool>> after_grid) {
	return grid == after_grid;
}

void update(std::vector<std::vector<bool>> &grid) {

}

bool Test1() {
	std::vector<std::vector<bool>> grid(2, std::vector<bool>(2, 0));
	update(grid);
	std::vector<std::vector<bool>> after_grid(2, std::vector<bool>(2, 0));

	if (test(grid, after_grid))
		std::cout << "test1 pass";
	else
		std::cout << "test1 fail";
}

int main()
{   
	std::vector<std::vector<bool>> grid;
	std::vector<std::vector<bool>> after_grid;

	Test1();
}

