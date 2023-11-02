#include <iostream>
#include <vector>

std::vector<std::vector<long long>> shrinkedMatrix(std::vector<std::vector<long long>>& m, int column) {
	std::vector<std::vector<long long>> temp;

	for (int i = 0; i < m.size() - 1; i++)
		temp.push_back(std::vector<long long>(m.size() - 1));

	for (long long i = 1, l = 0; i < m.size(); i++, l++) {
		for (long long j = 0, k = 0; j < m.size(); j++, k++) {
			if (j == column) {
				k--;
				continue;
			}
			else
				temp[l][k] = m[i][j];
		}
	}

	return temp;
}

long long determinant(std::vector< std::vector<long long> > m) {
	if (m.size() == 1) {
		return m[0][0];
	}
	if (m.size() == 2) {
		return m[0][0] * m[1][1] - m[0][1] * m[1][0];
	}

	long long det = 0;
	for (int i = 0; i < m.size(); i++) {
		if (i % 2 == 0) {
			det = det + (m[0][i] * determinant(shrinkedMatrix(m, i)));
		}
		else {
			det = det + (-m[0][i] * determinant(shrinkedMatrix(m, i)));
		}
	}

	return det;
}