#include <iostream>

/**
 * N = sum_i(a_i*2^i) where i = 0..k
 * N = X..X10..0, number of zeros = 0..m
 * N & N = N, N & (N - 1) = X..X10..0 & X..X01..1 = X..X00..0,
 * so all X stay the same, and last 1 is reduced.
 * then iterate until 0 and count number of iterations
 */

int main(int argc, char* argv[]) {
	int n = 8;
	int answer = 0;
	for (;n;++answer,n &= (n-1));
	std::cout << answer << std::endl;
	return 0;
}