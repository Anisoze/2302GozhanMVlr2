#include "include.h"
#include <chrono>
#include <time.h>
const int N = 70000;

int main()
{
	std::setlocale(LC_CTYPE, "rus");
	std::fstream g;
	auto begin = std::chrono::steady_clock::now();
	auto end = begin;
	auto time= end - begin;
	auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
	auto elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
	g.open("out.txt", std::ios::out);
	if (g.is_open()) {
		std::cout << " Автор: Гожан Максим Витальевич группа:2302\n АиСД\n Лабораторная работа #2 - Алгоритмы сортировки\n\n";
		g << "Автор: Гожан Максим Витальевич группа:2302\nАиСД\nЛабораторная работа #2 - Алгоритмы сортировки\n\n";
		int len = 0, n, k, res = 0;
		int* A = new int[N];
		if (!Read(A)) {
			std::cout << "\n Ошибка файл не был открыт\n";
		}
		std::cout << "\nRead";

		while (res != 11) {
			Read(A);
			res = Ask();
			if (res == 1) {		
			
				begin = std::chrono::steady_clock::now();
				SelectionSort(A, N);		

				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";	
				std::cout << "\nSelectionSort";	
				g << "\nSelectionSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}

			else if (res == 2) {
				begin = std::chrono::steady_clock::now();
				InsertionSort(A, 0, N);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nInsertionSort";
				g << "\nInsertionSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}



			else if (res == 3) {
				begin = std::chrono::steady_clock::now();
				BubbleSort(A, N);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nBubbleSort";
				g << "\nBubbleSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}


			else if (res == 4) {
				begin = std::chrono::steady_clock::now();
				MergeSort(A, 0, N-1);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nMergeSort";
				g << "\nMergeSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}


			else if (res == 5) {
				begin = std::chrono::steady_clock::now();
				QuickSort(A, 0, N-1);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nQuickSort";
				g << "\nQuickSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}

			else if (res == 6) {
				std::cout << "\n Выберете последовательность для ShellSort:\n 1. Стандартная: d = N/2\n 2. Седжвика: d = 9*(2^i - 2^(i/2))+1 для чётного и d = 8*2^i - 6*2^((i+1)/2)+1 для нечетного\n 3. Хиббарда: 2^i - 1\n 4. Выход из меню\n\n";
		
					Read(A);
					std::cin >> res;

					if (res == 1) {
						begin = std::chrono::steady_clock::now();
						ShellSort1(A, N);
						end = std::chrono::steady_clock::now();
						time = end - begin;
						elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
						elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
						elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
						std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
						std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
						std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
						std::cout << "\nShellSort1";
						g << "\nShellSort1:\n\n";
						Out(g, A, N);
						std::cout << "\nOut\n";
					}
					
					else if (res == 2) {
						begin = std::chrono::steady_clock::now();
						ShellSort2(A, N);
						end = std::chrono::steady_clock::now();
						time = end - begin;
						elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
						elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
						elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
						std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
						std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
						std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
						std::cout << "\nShellSort2";
						g << "\nShellSort2:\n\n";
						Out(g, A, N);
						std::cout << "\nOut\n";
					}
					else if (res == 3) {
						begin = std::chrono::steady_clock::now();
						ShellSort3(A, N);
						end = std::chrono::steady_clock::now();
						time = end - begin;
						elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
						elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
						elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
						std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
						std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
						std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
						std::cout << "\nShellSort3";
						g << "\nShellSort3:\n\n";
						Out(g, A, N);
						std::cout << "\nOut\n";
					}

					else if (res == 4) {
						break;
					}
					
				
			}


			else if (res == 7) {
				begin = std::chrono::steady_clock::now();
				HeapSort(A, N);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nHeapSort";
				g << "\nHeapSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}


			else if (res == 8) {				
				Read(A);
				begin = std::chrono::steady_clock::now();
				TimSort(A, N);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nTimSort";
				g << "\nTimSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
	
			}



			else if (res == 9) {
				begin = std::chrono::steady_clock::now();
				Introsort(A, A, A+N-1);
				end = std::chrono::steady_clock::now();
				time = end - begin;
				elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(time);
				elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(time);
				elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(time);
				std::cout << " Время работы: " << elapsed_s.count() << " секунд \n";
				std::cout << " Время работы: " << elapsed_ms.count() << " миллисекунд \n";
				std::cout << " Время работы: " << elapsed_ns.count() << " наносекунд \n";
				std::cout << "\nIntroSort";
				g << "\nIntroSort:\n\n";
				Out(g, A, N);
				std::cout << "\nOut\n";
			}

			else if (res == 10) {
				std::cout << " Введите количество чисел, которые нужно создать\n";
				std::cin >> n;
				std::cout << " Введите метод:\n 1. Отсортированно\n 2. Почти отсортированно\n 3. Обратно отсортированно\n 4. Случайно\n";
				std::cin >> k;
				Numbers(n, k);
				}


			if (res == 11) {
				break;
			}
		}
		g.close();
	}
	else {
		std::cout << "\n Ошибка файл не был открыт\n";
	}
	
}



