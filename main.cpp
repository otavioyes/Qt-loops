#include <iostream>
#include <limits>

int main()
{
    float nota1 = 0, nota2, media;

    std::cout << "Enter your fist gradel: ";
    std::cin >> nota1;

    if(std::cin.fail()){
        std::cin.clear(); //limpa os flags de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpa o buffet
        std::cout << "Invalid input!\n";
    }


    std::cout << "Enter your second gradel: ";
    std::cin >> nota2;

    if(std::cin.fail()){
        std::cin.clear(); //limpa os flags de erro
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpa o buffet
        std::cout << "Invalid input!\n";
    }

    media = (nota1 + nota2) / 2;

    if(media >= 6){
        std::cout << "Congratulations, you passed! \n";
    }else{
        std::cout << "Sorry, you failed" << std::endl;
    }


}
