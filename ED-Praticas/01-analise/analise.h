/************************************************************************
 **
 **  @file   analise.h
 **  @date   2018-8-22
 **  @author Arthur Rodrigues Araruna <ararunaufc(at)gmail.com>
 **
 **  @brief
 **
 **  @copyright
 **  This source code is part of an educational project, associated with
 **  a undergraduate course or extension project, that is hosted at
 **  Universidade Federal do Ceará, Campus Quixadá.
 **  Copyright (C) 2018 UFC Quixadá, All Rights Reserved.
 **
 **  This project is free software: you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation, either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  This project is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with the source code of this project. If not, see
 **  <http://www.gnu.org/licenses/>.
 **
 *************************************************************************/


#ifndef ANALISE_H
#define ANALISE_H

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief mark_time Cada chamada estabelece um marco de contagem de tempo.
 * @return Tempo em \a milisegundos desde o último marco estabelecido. Na
 *         primeira chamada retorna 0.
 */
double mark_time(void); // retorno em milisegundos

/**
 * @brief fill_with_insertion_wc Preenche o array \a V com uma entrada de pior
 *                               caso para o algoritmo \b InsertionSort.
 * @param V Array a preencher.
 * @param num_elems Número de posições a preencher.
 */
void fill_with_insertion_wc(int V[], int num_elems);
/**
 * @brief fill_with_selection_wc Preenche o array \a V com uma entrada de pior
 *                               caso para o algoritmo \b SelectionSort.
 * @param V Array a preencher.
 * @param num_elems Número de posições a preencher.
 */
void fill_with_selection_wc(int V[], int num_elems);

/**
 * @brief fill_with_rand Preenche o array \a V com elementos gerados aleatoriamente.
 * @param V Array a preencher.
 * @param num_elems Número de posições a preencher.
 */
void fill_with_rand(int V[], int num_elems);

/**
 * @brief check_sorted_asc Verifica se o array \a está ordenado de forma não-decrescente.
 * @param V Array a verificar.
 * @param n Quantidade de posições a verificar.
 * @return \c true se estiver ordenado, \c false caso contrário.
 */
bool check_sorted_asc(int V[], int n);

/**
 * @brief insertion_sort Ordena o array \a V de forma não-decrescente seguindo a
 *                       lógica de ordenação por inserção, do algoritmo \b InsertionSort.
 * @param V Array a ordenar.
 * @param n Quantidade de posições a considerar.
 */
void insertion_sort(int V[], int n);
/**
 * @brief insertion_sort Ordena o array \a V de forma não-decrescente seguindo a
 *                       lógica de ordenação por seleção, do algoritmo \b SelectionSort.
 * @param V Array a ordenar.
 * @param n Quantidade de posições a considerar.
 */
void selection_sort(int V[], int n);

#endif // ANALISE_H
