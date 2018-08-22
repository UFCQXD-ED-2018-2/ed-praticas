/************************************************************************
 **
 **  @file   analise.c
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


#include "analise.h"

#include <time.h>

double mark_time() {
    static clock_t mark = 0;
    clock_t new_mark = clock();
    double elapsed = 0.0;

    if(mark != 0) { // OBS Por conta da primeira execução
        elapsed = (new_mark - mark)*1000.0/CLOCKS_PER_SEC;
    }

    mark = new_mark;

    return elapsed;
}
