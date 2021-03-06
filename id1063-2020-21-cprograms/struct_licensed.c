/*    Copyright (C) 2020  Saurabh Joshi

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


#include <stdio.h>
#include <stdlib.h>

struct _point_t  
{
	float x;
	float y;
} ;


typedef char name_t[15];

struct _height_in_cm_t
{
    unsigned height;
};

typedef struct _height_in_cm_t height_in_cm_t;

struct _weight_in_kg_t
{
	unsigned weight;
};

typedef struct _weight_in_kg_t weight_in_kg_t;

enum _blood_type_t{APOSITIVE,BPOSITIVE,ABPOSITIVE,OPOSITIVE,ANEGATIVE,BNEGATIVE,ABNEGATIVE,ONEGATIVE} ;

typedef enum _blood_type_t blood_type_t;

struct _student_record_t
{
	name_t name;
	height_in_cm_t h;
	weight_in_kg_t w;
	blood_type_t bt;

};

typedef struct _student_record_t student_record_t;

typedef struct _point_t point_t;

typedef struct _point_t triangle_t[3];


void print_student_record(student_record_t sr)
{
	printf("%s : %u : %u : %d\n", sr.name,sr.h.height,sr.w.weight,sr.bt);
}


int main()
{

	
	student_record_t sr = { .bt=BPOSITIVE, .name="Bob",.w={65},.h={170}};

	height_in_cm_t h1={170};
	weight_in_kg_t w1={70};
//	h1 = w1;

	print_student_record(sr);

	return EXIT_SUCCESS;
}
