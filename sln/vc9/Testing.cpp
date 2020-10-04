#include"utmatrix.h"
#include <iostream>
template <class T>

void print(TVector<T>& v)

{
	std::cout << "Заполним вектор значениями" << std::endl;

	std::cin >> v;
}
template <class T>
void print(TMatrix<T> m)
{
	std::cout << "Заполним матрицу значениями" << std::endl;

	std::cin >> m;

}

template <class T>

void work_m(TMatrix<T>& m, int type)

{
		int temp;

		print(m);

		while (true)

		{

			std::cout << "Выберите, какую операцию с матрицей вы хотите осуществить" << std::endl << "1-Cложение" << std::endl << "2-Вычитание" << std::endl << "3-Сравниние" << std::endl << "4-Вывести на экран исходную матрицу" << std::endl  << "0-Продолжить работу с другим типом данных" << std::endl;

			std::cin >> temp;

			if (temp == 1)

			{

				std::cout << "1-Сложение с матрицей" << std::endl << "2-Сложение с числом" << std::endl;

				int oper;

				std::cin >> oper;
				if (oper == 1)
				{

					std::cout << "Введите размер второй матрицы (размер текущей равен" << " " << m.GetSize() << ")" << std::endl;

					int size_m1;

					std::cin >> size_m1;

					TMatrix <T> m1(size_m1), res;

					print(m1);

					try

					{

						res = m + m1;

						if (m.GetSize() <= 5)

						{

							std::cout << "______" << std::endl << m << "+" << std::endl << m1 << "=" << std::endl << res << std::endl;

						}

					}

					catch (int size)

					{

						std::cout << "Sizeof(v1) =" << " " << m.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "Нельзя выполнить операцию с векторами разных размеров." << std::endl;

					}

				}

				else

				{

					TMatrix<T> res;

					T m1;

					std::cout << "Введите число" << std::endl;

					std::cin >> m1;

					res = m + m1;

					if (m.GetSize() <= 5)

					{

						std::cout << "______" << std::endl << m << "+" << std::endl << m1 << std::endl << "=" << std::endl << res << std::endl;

					}

				}

			}
			if (temp == 2)

			{

				std::cout << "1-Вычитание матрицы" << std::endl << "2-Вычитание числа" << std::endl;

				int oper;

				std::cin >> oper;
				if (oper == 1)
				{

					std::cout << "Введите размер второй матрицы (размер текущей равен" << " " << m.GetSize() << ")" << std::endl;

					int size_m1;

					std::cin >> size_m1;

					TMatrix <T> m1(size_m1), res;

					print(m1);

					try

					{

						res = m - m1;

						if (m.GetSize() <= 5)

						{

							std::cout << "______" << std::endl << m << "-" << std::endl << m1 << "=" << std::endl << res << std::endl;

						}

					}

					catch (int size)

					{

						std::cout << "Sizeof(v1) =" << " " << m.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "Нельзя выполнить операцию с векторами разных размеров." << std::endl;

					}

				}

				else

				{

					TMatrix<T> res;

					T m1;

					std::cout << "Введите число" << std::endl;

					std::cin >> m1;

					res = m - m1;

					if (m.GetSize() <= 5)

					{

						std::cout << "______" << std::endl << m << "-" << std::endl << m1 << std::endl << "=" << std::endl << res << std::endl;

					}

				}

			}
			if (temp == 3)

			{

				std::cout << "Введите размер второго вектора (размер текущего равен" << " " <<m.GetSize() << ")" << std::endl;

				int size_m1;

				std::cin >> size_m1;

				TMatrix<T> m1(size_m1);

				print(m1);

				if (m == m1)

				{

					std::cout << "______" << std::endl << "Матрицы равны" << std::endl;

				}

				else

				{

					std::cout << "______" << std::endl << "Матрицы не равны" << std::endl;

				}

			}

			if (temp == 4)

			{

				std::cout << "Матрица:" << std::endl << m << std::endl;

			}
			if (temp == 0)

			{

				break;

			}
		}
}
template <class T>

void work(TVector<T>& v, int type)
{
	int temp;

	print(v);

	while (true)

	{

		std::cout << "Выберите, какую операцию с вектором вы хотите осуществить" << std::endl << "1-Cложение" << std::endl << "2-Вычитание" << std::endl << "3-Скалярное произведение" << std::endl << "4-Сравнение" << std::endl << "5-Вывести на экран исходный вектор" << std::endl << "6-Вывести на экран один из элементов вектора" << std::endl << "0-Продолжить работу с другим типом данных" << std::endl;

		std::cin >> temp;

		if (temp == 1)

		{

			std::cout << "1-Сложение с вектором" << std::endl << "2-Сложение с числом" << std::endl;

			int oper;

			std::cin >> oper;
			if (oper == 1)
			{

				std::cout << "Введите размер второго вектора (размер текущего равен" << " " << v.GetSize() << ")" << std::endl;

				int size_v1;

				std::cin >> size_v1;

			TVector<T> v1(size_v1), res;

				print(v1);

				try

				{

					res = v + v1;

					if (v.GetSize() <= 5)

					{

						std::cout << "______" << std::endl << v << "+" << std::endl << v1 << "=" << std::endl << res << std::endl;

					}

				}

				catch (int size)

				{

					std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "Нельзя выполнить операцию с векторами разных размеров." << std::endl;

				}

			}

			else

			{

				TVector<T> res;

				T v1;

				std::cout << "Введите число" << std::endl;

				std::cin >> v1;

				res = v + v1;

				if (v.GetSize() <= 5)

				{

					std::cout << "______" << std::endl << v << "+" << std::endl << v1 << std::endl << "=" << std::endl << res << std::endl;

				}

			}

		}

		if (temp == 2)

		{

			std::cout << "1-Вычесть вектор" << std::endl << "2-Вычесть число" << std::endl;

			int oper;

			std::cin >> oper;
			if (oper == 1)
			{

				std::cout << "Введите размер второго вектора (размер текущего равен" << " " << v.GetSize() << ")" << std::endl;

				int size_v1;

				std::cin >> size_v1;

				TVector<T> v1(size_v1), res;

				print(v1);

				try

				{

					res = v - v1;

					if (v.GetSize() <= 5)

					{

						std::cout << "______" << std::endl << v << "-" << std::endl << v1 << "=" << std::endl << res << std::endl;

					}

				}

				catch (int size)

				{

					std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "Нельзя выполнить операцию с векторами разных размеров." << std::endl;

				}

			}

			else

			{

				TVector<T> res;

				T v1;

				std::cout << "Введите число" << std::endl;

				std::cin >> v1;

				res = v - v1;

				if (v.GetSize() <= 5)

				{

					std::cout << "______" << std::endl << v << "-" << std::endl << v1 << std::endl << "=" << std::endl << res << std::endl;

				}

			}

		}
		if (temp == 3)

		{

			std::cout << "Введите размер второго вектора (размер текущего равен" << " " << v.GetSize() << ")" << std::endl;

			int size_v1;

			std::cin >> size_v1;

			TVector<T> v1(size_v1);

			print(v1);

			T res;

			try

			{

				res = v * v1;

				std::cout << "______" << std::endl << "Скалярное произведение";

				if (v.GetSize() <= 5)

				{

					std::cout << std::endl << v << "и" << std::endl << v1 << "равно" << " " << res << std::endl;

				}

				else

				{

					std::cout << " " << "равно" << " " << res << std::endl;

				}

			}

			catch (int size)

			{

				std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "Нельзя выполнить операцию с векторами разных размеров." << std::endl;

			}

		}
		if (temp == 4)

		{

			std::cout << "Введите размер второго вектора (размер текущего равен" << " " << v.GetSize() << ")" << std::endl;

			int size_v1;

			std::cin >> size_v1;

			TVector<T> v1(size_v1);

			print(v1);

			if (v == v1)

			{

				std::cout << "______" << std::endl << "Вектора равны" << std::endl;

			}

			else

			{

				std::cout << "______" << std::endl << "Вектора не равны" << std::endl;

			}

		}

		if (temp == 5)

		{

			std::cout << "Вектор:" << std::endl << v << std::endl;

		}

		if (temp == 6)

		{

			std::cout << "Введите номер элемента, который вы хотите вывести на экран" << std::endl;

			try

			{

				int number;

				std::cin >> number;

				std::cout << "Vector [" << number << "] =" << " " << v[number] << std::endl;

			}

			catch (int pos)

			{

				std::cout << "Не сущесвует элемента, находящегося на" << " " << pos << " " << "позиции, так как размер вектора равен" << " " << v.GetSize() << std::endl;

			}

		}

		if (temp == 0)

		{

			break;

		}

	}
}

void main()

{

	setlocale(LC_CTYPE, "Russian");
	int c;
	while (true)
	{
		std::cout << "Для того, чтобы создать вектор, нажмите 1. Для того, чтобы создать матрицу, нажмите 2." << std::endl;
		std::cin >> c;
		if (c == 1)
		{

			std::cout << "Создадим вектор, с которым будем работать в дальнейшем" << std::endl << "Выберите, значения какого типа данных будут в векторе" << std::endl << "1-int" << std::endl << "2-double" << std::endl << "0-Завершить работу программы" << std::endl;
			int type;

			std::cin >> type;

			if (type == 0)

			{

				break;

			}

			std::cout << "Укажите размер вектора" << std::endl;

			int size;
			std::cin >> size;

			if (type == 1)

			{

				try

				{

					TVector<int> v(size);

					work(v, type);

				}

				catch (int i)

				{

					std::cout << "Размер вектора не может быть равен" << i;

				}

			}

			if (type == 2)

			{

				try

				{

					TVector<double>v(size);

					work(v, type);

				}

				catch (int i)

				{

					std::cout << "Размер вектора не может быть равен" << " " << i;

				}

			}

		}
		if (c == 2)
		{
			std::cout << "Создадим матрицу, с которой будем работать в дальнейшем" << std::endl << "Выберите, значения какого типа данных будут в матрице" << std::endl << "1-int" << std::endl << "2-double" << std::endl << "0-Завершить работу программы" << std::endl; int type;

			std::cin >> type;

			if (type == 0)

			{
				break;
			}

			std::cout << "Укажите размер матрицы" << std::endl;

			int size;

			std::cin >> size;

			if (type == 1)

			{

				try

				{

					TMatrix<int> m(size);

					work_m(m, type);

				}

				catch (int i)

				{

					std::cout << "Размер матрицы не может быть равен" << i;

				}

			}

			if (type == 2)

			{

				try

				{

					TMatrix<double>m(size);

					work_m(m, type);

				}

				catch (int i)

				{

					std::cout << "Размер матрицы не может быть равен" << " " << i;

				}

			}
		}
	}
}