#include <vector>
#include <iostream>

using namespace std;
const int mod = 1000000000

int main()
{
	long long int n, d;
	cin >> n;
	cin >> d;
	
	// vec[i] mówi na jakie węzły rozgałęzia się węzeł i + 1, jest to 
	// pierwszy i drugi rząd z przykładowej tabeli w pliku readme tylko,
	// że tu mamy pary zamiast dwóch wierszy.
	vector<pair<long int, long int>> vec;

	for (long long int a = 0; a < n; a++) {
		long int g, h;
		cin >> g;
		cin >> h;

		pair<long int, long int> para = make_pair(g, h);
		vec.push_back(para);
	}

	vector<long long int> pierwszy(n, 0);
	vector<long long int> drugi(n, 0);

	pierwszy[0] = 1;

	for (long long int i = 1; i < pierwszy.size(); i++) {
		pierwszy[i] = (pierwszy[vec[i - 1].first] + pierwszy[vec[i - 1].second] + 1) % mod;
	}

	long long int rozmiar2 = n;
	for (long long int i = 1; i <= d; i++) {
		for (long long int k = 0; k < rozmiar2; k++) {
			long long int lewy;
			long long int prawy;

			lewy = vec[k + i - 1].first - i + 1;
			prawy = vec[k + i - 1].second - i + 1;

			if (lewy < 0)
				lewy = 0;
			else
				lewy = pierwszy[vec[k + i - 1].first - i + 1];

			if (prawy < 0)
				prawy = 0;
			else
				prawy = pierwszy[vec[k + i - 1].second - i + 1];

			drugi[k] = (lewy + prawy) % mod;
		}
		pierwszy.resize(rozmiar2);
		pierwszy = drugi;
		rozmiar2--;
		drugi.resize(rozmiar2, -1);
	}
	cout << pierwszy[rozmiar2] % mod << endl;
}
