/*
 * Copyright (C) 2014, Siemens AG
 * Author: Daniele Fognini
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "copyrightMatch.hpp"

CopyrightMatch::CopyrightMatch(rx::smatch sm, const char* type, int regexIndex) : sm(sm), regexIndex(regexIndex), type(type)
{
}

CopyrightMatch::~CopyrightMatch(){};

unsigned int CopyrightMatch::start() const
{
  return 0; //TODO return correct value
}

unsigned int CopyrightMatch::length() const
{
  return sm.length(regexIndex);
}


const std::string CopyrightMatch::content() const
{
  return sm.str(regexIndex);
}


const char* CopyrightMatch::getType() const
{
  return type;
}
