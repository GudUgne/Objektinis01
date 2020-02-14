#include <iostream>
#include <string>

int main()
{
    int plotis, ilgis, t = 0;
    std::string vardas = "";                    // sukuriamas kintamasis vardui saugoti
    std::cout << "Iveskite varda:" << std::endl;




    std::cin >> vardas;                         //vardas ivedamas
    std::string pasisveikinimas;            //deklaruojama



    std::cout << "Iveskite remelio ploti:" << std::endl;
    std::cin >> plotis;

    if (plotis < 3){std::cout << "Spausdinti negaliu, remelio plotis per mazas" << std::endl;}
        else {
            if(vardas.back() == 's'){pasisveikinimas = "Sveikas, " + vardas + "!";}     //atpazistama gimine
            else {pasisveikinimas = "Sveika, " + vardas + "!";}
            ilgis = pasisveikinimas.length() + 2;
            for(int i = 0; i < ilgis+2;i++){
                std::cout << "*";
            }
            std::cout << std::endl;
            if(plotis %2 != 1){
            plotis = plotis/2;
            t = 1;
            }
            for(int y = 0; y < plotis; y++)
            {
                std::cout << "*";
                for(int i = 0; i < ilgis; i++)
                {
                    std::cout << " ";
                }
                std::cout << "*" << std::endl;
            }
            std::cout << "* " << pasisveikinimas << " *";
            std::cout << std::endl;
            if(t == 0) plotis++;
            for(int y = 0; y < plotis; y++)
            {
                std::cout << "*";
                for(int i = 0; i < ilgis; i++)
                {
                    std::cout << " ";
                }
                std::cout << "*" << std::endl;
            }
            for(int i = 0; i < ilgis+2;i++){
                std::cout << "*";
            }
        }
    return 0;
}
