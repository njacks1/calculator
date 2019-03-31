#include "library.h"

void drawButton(const int x, const int y, const int radius, const char c, const int fontSize, const int color){
	set_heading_degrees(0);
	move_to(x, y);
	set_pen_width(radius);
	set_pen_color(color);
	draw_point();
	set_font_size(fontSize);
	set_pen_color(color::black);
	write_char(c, direction::center);
}

void button(){
	drawButton(x, y, radius, c, fontSize, color);
}

void main(){
	make_window(200, 200);
	drawButton(100, 100, 100, '@', 20, color::blue);
}

const char calculatorSymbols[][5] = { { 7, 8, 9, +, L'\u263C' }, { 4, 5, 6, -, L'\u2191' }, { 1, 2, 3, x, l }, { C, 0, = , L'÷', % } }

