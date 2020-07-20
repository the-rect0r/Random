const int dx_KNIGHT[] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy_KNIGHT[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dx4[] = {1, 0, -1, 0};
const int dy4[] = {0, 1, 0, -1};
const int dx8[] = {1, 1, 1, 0, -1, -1, -1, 0};
const int dy8[] = { -1, 0, 1, 1, 1, 0, -1, -1};

bool isValidCell(int r, int c, int n, int m) {
	return r >= 0 && c >= 0 && r < n && c < m;
}
