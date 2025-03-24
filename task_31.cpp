//  ���. ���������� � ������������. ������� 1. ������
#include <iostream>

// ���������� ������ Address
class Address
{
	private:
		std::string town{};          // �������� ������
		std::string street{};        // �������� �����
		std::string home{};          // ����� ����
		std::string flat{};          // ����� ��������

	public:
	
		// ����������� � �����������
		Address(std::string setTown, std::string setStreet, std::string setHome, std::string setFlat) : town{ setTown }, street{ setStreet }, home{ setHome }, flat{ setFlat }
		{};
		// ����������� ��� ����������
		Address() {};

		// ����� �� ����� ������ ������
		std::string get_output_address()
		{
			return town + ", " + street + ", " + home + ", " + flat;
		}
};

int main()
{
	return EXIT_SUCCESS;
}