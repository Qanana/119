#include <iostream>
#include <string>
#include "Client.h"
#include "Dogovor.h"
#include "Accountant.h"
#include "Entry.h"
#include "MedicaCard.h"
#include "Servise.h"
#include "Specialist.h"
using namespace std;

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.

int main() {
	setlocale(LC_ALL, "Russian");
	// Создание объекта бухгалтера
	Accountant accountant("Иванов Иван", "Прием у врача", 1500.0);
	// Выписка квитанции на оплату медицинских услуг
	accountant.print_invoice();

	Client client("Иванов Иван Иванович", "8-900-000-00-00", "ул. Ленина, д.1, кв. 5");
	cout << "ФИО: " << client.getFio() << endl;
	cout << "Телефон: " << client.getPhone() << endl;
	cout << "Адрес: " << client.getAddress() << endl;

	Dogovor dogovor(1, "01.01.2022", "Условия договора");
	cout << "Номер: " << dogovor.getId() << endl;
	cout << "Дата: " << dogovor.getData() << endl;
	cout << "Условия: " << dogovor.getConditions() << endl;
	return 0;
}
