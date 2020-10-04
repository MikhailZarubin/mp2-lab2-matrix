#include"utmatrix.h"
#include <iostream>
template <class T>

void print(TVector<T>& v)

{
	std::cout << "�������� ������ ����������" << std::endl;

	std::cin >> v;
}
template <class T>
void print(TMatrix<T> m)
{
	std::cout << "�������� ������� ����������" << std::endl;

	std::cin >> m;

}

template <class T>

void work_m(TMatrix<T>& m, int type)

{
		int temp;

		print(m);

		while (true)

		{

			std::cout << "��������, ����� �������� � �������� �� ������ �����������" << std::endl << "1-C�������" << std::endl << "2-���������" << std::endl << "3-���������" << std::endl << "4-������� �� ����� �������� �������" << std::endl  << "0-���������� ������ � ������ ����� ������" << std::endl;

			std::cin >> temp;

			if (temp == 1)

			{

				std::cout << "1-�������� � ��������" << std::endl << "2-�������� � ������" << std::endl;

				int oper;

				std::cin >> oper;
				if (oper == 1)
				{

					std::cout << "������� ������ ������ ������� (������ ������� �����" << " " << m.GetSize() << ")" << std::endl;

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

						std::cout << "Sizeof(v1) =" << " " << m.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "������ ��������� �������� � ��������� ������ ��������." << std::endl;

					}

				}

				else

				{

					TMatrix<T> res;

					T m1;

					std::cout << "������� �����" << std::endl;

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

				std::cout << "1-��������� �������" << std::endl << "2-��������� �����" << std::endl;

				int oper;

				std::cin >> oper;
				if (oper == 1)
				{

					std::cout << "������� ������ ������ ������� (������ ������� �����" << " " << m.GetSize() << ")" << std::endl;

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

						std::cout << "Sizeof(v1) =" << " " << m.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "������ ��������� �������� � ��������� ������ ��������." << std::endl;

					}

				}

				else

				{

					TMatrix<T> res;

					T m1;

					std::cout << "������� �����" << std::endl;

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

				std::cout << "������� ������ ������� ������� (������ �������� �����" << " " <<m.GetSize() << ")" << std::endl;

				int size_m1;

				std::cin >> size_m1;

				TMatrix<T> m1(size_m1);

				print(m1);

				if (m == m1)

				{

					std::cout << "______" << std::endl << "������� �����" << std::endl;

				}

				else

				{

					std::cout << "______" << std::endl << "������� �� �����" << std::endl;

				}

			}

			if (temp == 4)

			{

				std::cout << "�������:" << std::endl << m << std::endl;

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

		std::cout << "��������, ����� �������� � �������� �� ������ �����������" << std::endl << "1-C�������" << std::endl << "2-���������" << std::endl << "3-��������� ������������" << std::endl << "4-���������" << std::endl << "5-������� �� ����� �������� ������" << std::endl << "6-������� �� ����� ���� �� ��������� �������" << std::endl << "0-���������� ������ � ������ ����� ������" << std::endl;

		std::cin >> temp;

		if (temp == 1)

		{

			std::cout << "1-�������� � ��������" << std::endl << "2-�������� � ������" << std::endl;

			int oper;

			std::cin >> oper;
			if (oper == 1)
			{

				std::cout << "������� ������ ������� ������� (������ �������� �����" << " " << v.GetSize() << ")" << std::endl;

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

					std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "������ ��������� �������� � ��������� ������ ��������." << std::endl;

				}

			}

			else

			{

				TVector<T> res;

				T v1;

				std::cout << "������� �����" << std::endl;

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

			std::cout << "1-������� ������" << std::endl << "2-������� �����" << std::endl;

			int oper;

			std::cin >> oper;
			if (oper == 1)
			{

				std::cout << "������� ������ ������� ������� (������ �������� �����" << " " << v.GetSize() << ")" << std::endl;

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

					std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "������ ��������� �������� � ��������� ������ ��������." << std::endl;

				}

			}

			else

			{

				TVector<T> res;

				T v1;

				std::cout << "������� �����" << std::endl;

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

			std::cout << "������� ������ ������� ������� (������ �������� �����" << " " << v.GetSize() << ")" << std::endl;

			int size_v1;

			std::cin >> size_v1;

			TVector<T> v1(size_v1);

			print(v1);

			T res;

			try

			{

				res = v * v1;

				std::cout << "______" << std::endl << "��������� ������������";

				if (v.GetSize() <= 5)

				{

					std::cout << std::endl << v << "�" << std::endl << v1 << "�����" << " " << res << std::endl;

				}

				else

				{

					std::cout << " " << "�����" << " " << res << std::endl;

				}

			}

			catch (int size)

			{

				std::cout << "Sizeof(v1) =" << " " << v.GetSize() << std::endl << "Sizeof(v2) =" << " " << size << std::endl << "������ ��������� �������� � ��������� ������ ��������." << std::endl;

			}

		}
		if (temp == 4)

		{

			std::cout << "������� ������ ������� ������� (������ �������� �����" << " " << v.GetSize() << ")" << std::endl;

			int size_v1;

			std::cin >> size_v1;

			TVector<T> v1(size_v1);

			print(v1);

			if (v == v1)

			{

				std::cout << "______" << std::endl << "������� �����" << std::endl;

			}

			else

			{

				std::cout << "______" << std::endl << "������� �� �����" << std::endl;

			}

		}

		if (temp == 5)

		{

			std::cout << "������:" << std::endl << v << std::endl;

		}

		if (temp == 6)

		{

			std::cout << "������� ����� ��������, ������� �� ������ ������� �� �����" << std::endl;

			try

			{

				int number;

				std::cin >> number;

				std::cout << "Vector [" << number << "] =" << " " << v[number] << std::endl;

			}

			catch (int pos)

			{

				std::cout << "�� ��������� ��������, ������������ ��" << " " << pos << " " << "�������, ��� ��� ������ ������� �����" << " " << v.GetSize() << std::endl;

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
		std::cout << "��� ����, ����� ������� ������, ������� 1. ��� ����, ����� ������� �������, ������� 2." << std::endl;
		std::cin >> c;
		if (c == 1)
		{

			std::cout << "�������� ������, � ������� ����� �������� � ����������" << std::endl << "��������, �������� ������ ���� ������ ����� � �������" << std::endl << "1-int" << std::endl << "2-double" << std::endl << "0-��������� ������ ���������" << std::endl;
			int type;

			std::cin >> type;

			if (type == 0)

			{

				break;

			}

			std::cout << "������� ������ �������" << std::endl;

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

					std::cout << "������ ������� �� ����� ���� �����" << i;

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

					std::cout << "������ ������� �� ����� ���� �����" << " " << i;

				}

			}

		}
		if (c == 2)
		{
			std::cout << "�������� �������, � ������� ����� �������� � ����������" << std::endl << "��������, �������� ������ ���� ������ ����� � �������" << std::endl << "1-int" << std::endl << "2-double" << std::endl << "0-��������� ������ ���������" << std::endl; int type;

			std::cin >> type;

			if (type == 0)

			{
				break;
			}

			std::cout << "������� ������ �������" << std::endl;

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

					std::cout << "������ ������� �� ����� ���� �����" << i;

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

					std::cout << "������ ������� �� ����� ���� �����" << " " << i;

				}

			}
		}
	}
}