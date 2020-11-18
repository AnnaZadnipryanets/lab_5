// Caesar1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"
#include <string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str1[] = "ыцжхеоыф╡кдегхчхяеудегхяюдегхч╙фэ╙фесжужддчцяхжцяхэкдэисэабяуеассеуэхнгп╙едпххпцдеьэдэпаяджцчгхэхньеудетежбжцждхяхяаяцдеьэдядяыэсявхнгп╙ефеьднеоцдеьэдеоч╙еыдякявхнгпыдяаец╙жфжафжгбжддетеаебядя╙фэабяупамеуегбчуь╡вхнгпцдеьэдяервахчспач╙есэддчыяуесебндпхэ╙жсдчюсбягхэсегхччс╙еуябнлец╡ыпгес╡вхнгпмехяаэиервахчсджчгд╡вхеыф╡кдчлжгаяыяхэмел╡аядяцдеьэдя╙ефеьдпдчьетебегэхэъъджчгд╡окео╙ефеьдоцдеьэд╡цеьдяеыдякяхэыяуе╙ецетеор╡унпаеъг╡╙жфжкбэсеъсбягхэсегхчфяыецчыхэцхсжфуьжддпццдеьэдядж╙ефеьдпцеьдяыяцчдосяхэфчсдегэбнджюец╡хсжфуьжддпчгд╡охнжбжцждхэпачдябжьяхнцдеьэдч";
    int a;
    for (a = 0; a < strlen(str1); a++)
        if (str1[a] == 'ы')
            str1[a] = 'г';
        else if (str1[a] == 'ц')
            str1[a] = 'л';
        else if (str1[a] == 'ж')
            str1[a] = 'е';
        else if (str1[a] == 'х')
            str1[a] = 'р';
        else if (str1[a] == 'е')
            str1[a] = 'н';
        else if (str1[a] == 'ю')
            str1[a] = 'и';
        else if (str1[a] == 'а')
            str1[a] = 'й';
        else if (str1[a] == 'б')
            str1[a] = 'к';
        else if (str1[a] == 'д')
            str1[a] = 'м';
        else if (str1[a] == '╙')
            str1[a] = 'о';
        else if (str1[a] == 'ф')
            str1[a] = 'п';
        else if (str1[a] == 'г')
            str1[a] = 'я';
        else if (str1[a] == '╡')
            str1[a] = 'с';
        else if (str1[a] == '╞')
            str1[a] = '0';
        else if (str1[a] == 'и')
            str1[a] = 'у';
        else if (str1[a] == 'й')
            str1[a] = '0';
        else if (str1[a] == 'к')
            str1[a] = 'в';
        else if (str1[a] == 'л')
            str1[a] = 'ь';
        else if (str1[a] == 'м')
            str1[a] = 'ы';
        else if (str1[a] == 'н')
            str1[a] = 'э';
        else if (str1[a] == 'о')
            str1[a] = 'ч';
        else if (str1[a] == 'п')
            str1[a] = 'ъ';
        else if (str1[a] == 'ж')
            str1[a] = 'е';
        else if (str1[a] == 'я')
            str1[a] = 'ю';
        else if (str1[a] == 'р')
            str1[a] = 'а';
        else if (str1[a] == 'с')
            str1[a] = 'б';
        else if (str1[a] == 'т')
            str1[a] = 'ц';
        else if (str1[a] == 'у')
            str1[a] = 'д';
        else if (str1[a] == 'в')
            str1[a] = '╙';
        else if (str1[a] == 'ь')
            str1[a] = 'ф';
        else if (str1[a] == 'э')
            str1[a] = 'х';
        else if (str1[a] == 'ч')
            str1[a] = '╡';
        else if (str1[a] == 'ъ')
            str1[a] = '╞';
    cout << str1;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
