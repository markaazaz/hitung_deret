#include <iostream>

int main()
{
    awal:
    int deret;
    char opsi;
    std::cout << "-------------------------------------\n";
    std::cout << "-     Menghitung deret ganjil       -\n";
    std::cout << "-------------------------------------\n";
    
    std::cout << "Input Deret: ";
    std::cin >> deret;
    
    for (int i = 1; i <= deret; i++)
    {
        std::cout << (i * 2) - 1 << " ";
    }
    std::cout << "\n\n";
    std::cout << "Hitung Lagi? (Y/N): ";
    std::cin >> opsi;
    
    while (opsi == 'Y' or opsi == 'y')
    {
        goto awal;
    }
    
    std::cout << "Terima Kasih telah menggunakan Program ini!\n";
}
