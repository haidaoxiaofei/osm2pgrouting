/*PGR
Copyright (c) 2015 (your full name)
(your main e mail address)


This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef _prog_options_h
#define _prog_options_h

#include <boost/config.hpp>
// #include <string>
#include <boost/program_options.hpp>
namespace po = boost::program_options;


// #include <iostream>
// #include <fstream>
// #include <iterator>
using namespace std;

void get_option_description(po::options_description &od_desc);
int process_command_line(po::variables_map &vm,po::options_description &od_desc);

#endif