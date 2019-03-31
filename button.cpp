#include "library.h"

void drawButton(double const diameter){
	set_pen_color(0);
	set_pen_width(diameter);
	draw_point();
	set_pen_color(1, 1, 1);
	set_pen_width(diameter - 4);
	draw_point();
}

void posButton(double const diameter, double const gapBut1, double const gapBut2, double const spaceMar){
	char const buttonSymbols[][5] = { { '7', '8', '9', '+', L'\u0373' }, { '4', '5', '6', '-', L'\u2191' }, { '1', '2', '3', L'X', L'\u00b1' }, {'C', '0', '=', L'fix', '%'} };
	int const radius = diameter / 2;
	int const x = spaceMar + radius;
	int const y = 200 + spaceMar + radius;
	for (int ii = 0; ii < 4; ii++){
		for (int i = 0; i < 5; i++){
			move_to(x + (i*gapBut1), y + (ii*gapBut2));
			drawButton(diameter);
			set_pen_color(0);
			set_font_size(diameter/1.5);
			write_char(buttonSymbols[ii][i],direction::center);
		}
	}
}

void main(){
	make_window(500, 700);
	double const diameter = 68;
	double const spaceMar = 20;
	double const gapBut1 = 30+diameter;
	double const gapBut2 = 62+diameter;
	posButton(diameter, gapBut1, gapBut2, spaceMar);
}
