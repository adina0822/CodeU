#include <iostream>
#include <vector>

void test(std::vector<std::vector<bool>> grid, std::vector<std::vector<bool>> after_grid) {
	if (grid == after_grid)
		std::cout << "test pass\n";
	else
		std::cout << "test fail\n";
}

void update(std::vector<std::vector<bool>> &grid) {
	if (grid[0][1]) grid[0][1] = 0;
}

void Test1() {
	std::vector<std::vector<bool>> grid(2, std::vector<bool>(2, 0));
	update(grid);
	std::vector<std::vector<bool>> after_grid(2, std::vector<bool>(2, 0));

	test(grid, after_grid);
}

void Test2() {
	std::vector<std::vector<bool>> grid(2, std::vector<bool>(2, 0));
	grid[0][1] = 1;
	update(grid);
	std::vector<std::vector<bool>> after_grid(2, std::vector<bool>(2, 0));

	test(grid, after_grid);
}

int main()
{   
	std::vector<std::vector<bool>> grid;
	std::vector<std::vector<bool>> after_grid;

	Test1();
	Test2();
}

