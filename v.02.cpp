#include <iostream>
#include <string>

int main()
{
    std::string vardas = "";                    // sukuriamas kintamasis vardui saugoti
    std::cout << "Iveskite varda:" << std::endl;
    std::cin >> vardas;                         //vardas ivedamas
    std::string pasisveikinimas;            //deklaruojama

    if(vardas.back() == 's'){pasisveikinimas = "Sveikas, " + vardas + "!";}     //atpazistama gimine
        else {pasisveikinimas = "Sveika, " + vardas + "!";}

    std::string tarpai(pasisveikinimas.size(), ' ');
    std::string antra = "* " + tarpai + " *";
    std::string pirma(antra.size(), '*');
    std::cout << pirma << std::endl;
    std::cout << antra << std::endl;
    std::cout << "* " << pasisveikinimas << " *" << std::endl;  //isvedamas pasisveikinimas
    std::cout << antra << std::endl;
    std::cout << pirma << std::endl;

    return 0;
}
