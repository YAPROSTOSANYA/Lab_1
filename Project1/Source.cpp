#include <iostream>

using namespace std;

int main() {
	int n, m, a, s1, s2, N;
	bool bn = true, bm = true;
	cin >> n >> m >> a;
	
	//���������, ��������� �� ������ � ���. ���.
	if ((n % a) > 0) bn = false;
	if ((m % a) > 0) bm = false;

	//���� �� ���������, �� ���� ����� ������� ����
	if (!(bn == true)) n += a - (n % a);
	if (!(bm == true)) m += a - (m % a);

	//������� ���-�� ������
	s1 = n * m;
	s2 = a * a;
	//������ ����� ������������
	N = s1 / s2;
	cout << "���������� ���� = " << N;

	return 0;
}