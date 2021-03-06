/*    Copyright (C) 2021  Saurabh Joshi

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>

template <typename T>
T max(const T& a, const T& b)  
{
	if(a>b) return a;
	else return b;
}

/*
 * int max(const int& a,const int &b)
 * {
 *     int (a>b) return a;
 *     else return b;
 * }
 *
 */



int main()
{
	long a=10;
	long *p = &a; // p points to a
	long &r =a;

	std::cout << a << ":" << p << ":" << r << std::endl;
	long b=5;
	p = &b; // p now points to b
	std::cout << a << ":" << p << ":" << r <<":" <<b << std::endl;
	r = b; // a=b;

	std::cout << a << ":" << p << ":" << r <<":" <<b << std::endl;
	

	return 0;


}
