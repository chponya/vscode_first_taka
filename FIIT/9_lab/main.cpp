#include <iostream>
#include <cstdint>

int main() {
    setlocale(LC_ALL, "Russian"); 
    int16_t num = 0x1234; // пример числа

    // Используем указатель на unsigned char для доступа к байтам
    unsigned char* ptr = reinterpret_cast<unsigned char*>(&num);

    std::cout << "Число: 0x" << std::hex << num << std::dec << std::endl;
    // std::cout << std::hex  << ptr << std::dec  << std::endl;
    std::cout << "Байты (без учёта порядка байтов):" << std::endl;
    std::cout << "Байт 1: 0x" << std::hex << static_cast<int>(ptr[0]) << std::dec << std::endl;
    std::cout << "Байт 2: 0x" << std::hex << static_cast<int>(ptr[1]) << std::dec << std::endl;




  return 0;
}

// Результат выполнения программы зависит от порядка байтов (endianness) на системе:
// • Little-endian: младший байт находится по меньшему адресу. (мой случай)
// • Big-endian: старший байт находится по меньшему адресу.









/*
Тип short определён в C++ как имеющий как минимум 16 бит, но  его фактический размер может варьироваться в зависимости от компилятора и архитектуры целевой системы.
Тип int16_t из заголовочного файла <cstdint>  всегда имеет ровно 16 бит, обеспечивая переносимость кода.
*/