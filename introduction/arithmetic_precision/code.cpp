#include <iostream>
#include <iomanip>

double convertToEuro(double dollars)
{
    const double rate = 0.94;
    double result = dollars * rate;         // (1) Hitung dulu nilai

    // (2) Baru atur format pada cout saat mencetak
    std::cout << std::fixed << std::setprecision(2);
    return result;
}

int main()
{
    double result = convertToEuro(50.0);
    std::cout << result;                    // Output terformat 2 desimal
    return 0;
}
