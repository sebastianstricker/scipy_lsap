#include "rectangular_lsap.h"
#include <iostream>
#include <vector>

int main() {

    int nr_rows = 4;
    int nr_cols = 4;
    std::vector<double> cost = {0,  0,  -1, 0,
                                -1, 0,  0,  0,
                                0,  0,  0,  -1,
                                0,  -1, 0,  0};

    int64_t sol_rows[] = {0,0,0,0};
    int64_t sol_cols[] = {0,0,0,0};

    int res = solve_rectangular_linear_sum_assignment(nr_rows, nr_cols, cost.data(), false, &sol_rows[0], &sol_cols[0]);

    std::cout << "Result: " << res << std::endl;
    std::cout << "Rows: ";
    for (auto& i : sol_rows) {
        std::cout << i;
    }
    std::cout << std::endl;
    std::cout << "Cols: ";
    for (auto& i : sol_cols) {
        std::cout << i;
    }
    std::cout << std::endl;

    return 0;
}