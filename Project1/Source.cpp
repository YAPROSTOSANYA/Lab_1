#include <iostream>

using namespace std;

int main() {
	int n, m, a, s1, s2, N;
	bool bn = true, bm = true;
	cin >> n >> m >> a;
	
	//Проверяем, вместится ли плитка в нач. пол.
	if ((n % a) > 0) bn = false;
	if ((m % a) > 0) bm = false;

	//Если не вместится, то ищем новые размеры поля
	if (!(bn == true)) n += a - (n % a);
	if (!(bm == true)) m += a - (m % a);

	//Находим кол-во плиток
	s1 = n * m;
	s2 = a * a;
	//Ломаем ветку комментарием
	N = s1 / s2;
	cout << "Количество плит = " << N;

	return 0;
}