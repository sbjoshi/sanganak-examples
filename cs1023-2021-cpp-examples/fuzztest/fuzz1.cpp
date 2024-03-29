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
#include <utility>
#include <vector>
#include <algorithm>
#include <assert.h>

bool FuzzMe(const uint8_t *Data, size_t DataSize) {
	uint8_t max2= 10;
	for(unsigned i=0;i<DataSize;i++)
	{
		if(max2<Data[i])
		{
			max2=Data[i];
		}
	}
	size_t i=0;
	while(i<1000)
	{
		if(Data[i]==max2) return true;
		i++;
	}

  return false;

}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  FuzzMe(Data, Size);
  return 0;
}
