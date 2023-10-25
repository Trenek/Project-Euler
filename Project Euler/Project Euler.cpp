// Project Euler.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <chrono>

#include "100.hpp"

#define ZADANIE 15
#define NR(x, y) case (x): (y); break

int main() {
	auto start = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> time;

	switch (ZADANIE) {
		NR(1, one(1000));
		NR(2, two(4000000));
		NR(3, three(600851475143));
		NR(4, four(3));
		NR(5, five(20));
		NR(6, six(100));
		NR(7, seven(10001));
		NR(8, eight(13));
		NR(9, nine());
		NR(10, ten(2000000));
		NR(11, eleven());
		NR(12, twelfth(500));
		NR(13, thirteen());
		NR(14, fourteen());
		NR(15, fifteen(20, 20));
		NR(16, sixteen(1000));
		NR(17, seventeen(1000));
		NR(18, eighteen());
		NR(19, nineteen());
		NR(20, twenty(100));
		NR(21, twentyOne(10000));
		NR(22, twentyTwo());
		NR(23, twentyThree(28124));
		NR(24, twentyFour(1000000));
		NR(25, twentyFive(1000));
		NR(26, twentySix(1000));
		NR(27, twentySeven(1000));
		NR(28, twentyEight(1001));
		NR(29, twentyNine(100));
		NR(30, thirty(5));
		NR(31, thirtyOne());
		NR(32, thirtyTwo());
		NR(33, thirtyThree());
		NR(34, thirtyFour());
		NR(35, thirtyFive());
		NR(36, thirtySix());
		NR(37, thirtySeven());
		NR(38, thirtyEight());
		NR(39, thirtyNine());
		NR(40, fourty());
		NR(41, fourtyOne());
		NR(42, fourtyTwo());
		NR(43, fourtyThree());
		NR(44, fourtyFour());
		NR(45, fourtyFive());
		NR(46, fourtySix());
	}

	time = std::chrono::high_resolution_clock::now() - start;
	std::cout << std::endl << "TIME: " << time.count() << std::endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
