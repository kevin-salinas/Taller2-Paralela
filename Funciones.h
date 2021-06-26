#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include "Venta.h"

/**
 * Despliega los participantes del equipo de trabajo
 */
void Participantes(); //Función que muestra los participantes del grupo

/**
 * @param fila una línea del archivo
 * @return vector con los datos del archivo csv
 */
std::vector<std::string> ObtenerDatos(std::string fila);

std::vector<std::string> fecha(std::string, char);

std::vector<Venta> dia(std::vector<Venta>);
std::vector<Venta> mes(std::vector<Venta>);

int promVentas(std::vector<Venta>);
int SuavizanteExponencial(std::vector<Venta>);
#endif // FUNCIONES_H_INCLUDED
