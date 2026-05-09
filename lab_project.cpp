#include <iostream>
using namespace std;
int main() {
	int MONTHS = 12;
	double thisYear[12];
	double lastYear[12];
	cout << "Input Yearly Rainfall statistics in pair (current year previous year) for the 12 months:\n";
	for (int i = 0; i < MONTHS; ++i) {
		cout << "Month " << i + 1 << ": ";
		cin >> thisYear[i] >> lastYear[i];
	}

	cout << "\nTable of monthly rainfall is as follows:\n";
	cout << "Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n";
	cout << "------------------------------------------------------------\n";
	for (int i = 0; i < MONTHS; ++i) {
		cout << thisYear[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < MONTHS; ++i) {
		cout << lastYear[i] << "\t";
	}
	cout << "\n";

	double totalThisYear = 0, totalLastYear = 0, highestThisYear = 0, highestLastYear = 0;
	int noRainThisYear = 0, noRainLastYear = 0;

	for (int i = 0; i < MONTHS; ++i) {
		totalThisYear += thisYear[i];
		totalLastYear += lastYear[i];

		if (thisYear[i] > highestThisYear) {
			highestThisYear = thisYear[i];
		}

		if (lastYear[i] > highestLastYear) {
			highestLastYear = lastYear[i];
		}

		if (thisYear[i] == 0) {
			noRainThisYear++;
		}

		if (lastYear[i] == 0) {
			noRainLastYear++;
		}
	}

	double averageThisYear = totalThisYear / MONTHS;
	double averageLastYear = totalLastYear / MONTHS;

	cout << "\nTotal rainfall this year: " << totalThisYear << "\n";
	cout << "Total rainfall last year: " << totalLastYear << "\n";
	cout << "Average monthly rainfall for this year: " << averageThisYear << "\n";
	cout << "Average monthly rainfall for last year: " << averageLastYear << "\n";
	cout << "Highest Rainfall this year: " << highestThisYear << " in ";

	for (int i = 0; i < MONTHS; ++i) {
		if (thisYear[i] == highestThisYear) {
			cout << "Month " << i + 1 << " ";
		}
	}

	cout << "\nHighest Rainfall last year: " << highestLastYear << " in ";

	for (int i = 0; i < MONTHS; ++i) {
		if (lastYear[i] == highestLastYear) {
			cout << "Month " << i + 1 << " ";
		}
	}

	cout << "\nMonth having no rain this year: ";

	for (int i = 0; i < MONTHS; ++i) {
		if (thisYear[i] == 0) {
			cout << "Month " << i + 1 << " ";
		}
	}

	cout << "\nMonth having no rain last year: ";

	for (int i = 0; i < MONTHS; ++i) {
		if (lastYear[i] == 0) {
			cout << "Month " << i + 1 << " ";
		}
	}

	cout << endl;

	cout << "\nRainfall Chart:\n";
	for (int i = 0; i < MONTHS; ++i) {
		cout << "Month " << i + 1 << ": ";
		for (int j = 0; j < thisYear[i]; ++j) {
			cout << "*";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}
