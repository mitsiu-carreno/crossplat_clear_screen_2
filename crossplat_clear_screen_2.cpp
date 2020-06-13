// crossplat_clear_screen_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "clear_screen.h"
#include <iostream>
#include <Windows.h>
int main()
{
    std::cout << "Hello friend... hello friend, that's lame\n";
    Sleep(1000);
    ClearScreen();

    std::cout << "Maybe i should give you a name, but that's a slippery slope\n";
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
