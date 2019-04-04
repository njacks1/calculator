#include "library.h"

double acc1 = 0;
double acc2 = 0;
double op = 0;

void drawButton(double const diameter){
	set_pen_color(0);
	set_pen_width(diameter);
	draw_point();
	set_pen_color(1, 1, 1);
	set_pen_width(diameter - 4);
	draw_point();
}

void posButton(double const diameter, double const gapBut1, double const gapBut2, double const spaceMar, int const x, int const y){
	char const buttonSymbols[][5] = { { '7', '8', '9', '+', L'\u0373' }, { '4', '5', '6', '-', L'\u2191' }, { '1', '2', '3', L'X', L'\u00b1' }, { 'C', '0', '=', L'fix', '%' } };
	for (int ii = 0; ii < 4; ii++){
		for (int i = 0; i < 5; i++){
			move_to(x + (i*gapBut1), y + (ii*gapBut2));
			drawButton(diameter);
			set_pen_color(0);
			set_font_size(diameter / 1.5);
			write_char(buttonSymbols[ii][i], direction::center);
		}
	}
}

int whichButton(int click_x, int click_y, double const gapBut1, double const gapBut2, double const radius, double const x, double const y){
	if (click_x <= x + 0 * gapBut1 + radius && click_x >= x + 0 * gapBut1 - radius && click_y >= y - radius + 0 * gapBut2 && click_y <= y + radius + 0 * gapBut2){
		return(7);
	}
	else if (click_x <= x + 1 * gapBut1 + radius && click_x >= x + 1 * gapBut1 - radius && click_y >= y - radius + 0 * gapBut2 && click_y <= y + radius + 0 * gapBut2){
		return(8);
	}
	else if (click_x <= x + 2 * gapBut1 + radius && click_x >= x + 2 * gapBut1 - radius && click_y >= y - radius + 0 * gapBut2 && click_y <= y + radius + 0 * gapBut2){
		return(9);
	}
	else if (click_x <= x + 3 * gapBut1 + radius && click_x >= x + 3 * gapBut1 - radius && click_y >= y - radius + 0 * gapBut2 && click_y <= y + radius + 0 * gapBut2){
		return(10);
	}
	else if (click_x <= x + 4 * gapBut1 + radius && click_x >= x + 4 * gapBut1 - radius && click_y >= y - radius + 0 * gapBut2 && click_y <= y + radius + 0 * gapBut2){
		return(11);
	}
	else if (click_x <= x + 0 * gapBut1 + radius && click_x >= x + 0 * gapBut1 - radius && click_y >= y - radius + 1 * gapBut2 && click_y <= y + radius + 1 * gapBut2){
		return(4);
	}
	else if (click_x <= x + 1 * gapBut1 + radius && click_x >= x + 1 * gapBut1 - radius && click_y >= y - radius + 1 * gapBut2 && click_y <= y + radius + 1 * gapBut2){
		return(5);
	}
	else if (click_x <= x + 2 * gapBut1 + radius && click_x >= x + 2 * gapBut1 - radius && click_y >= y - radius + 1 * gapBut2 && click_y <= y + radius + 1 * gapBut2){
		return(6);
	}
	else if (click_x <= x + 3 * gapBut1 + radius && click_x >= x + 3 * gapBut1 - radius && click_y >= y - radius + 1 * gapBut2 && click_y <= y + radius + 1 * gapBut2){
		return(12);
	}
	else if (click_x <= x + 4 * gapBut1 + radius && click_x >= x + 4 * gapBut1 - radius && click_y >= y - radius + 1 * gapBut2 && click_y <= y + radius + 1 * gapBut2){
		return(13);
	}
	else if (click_x <= x + 0 * gapBut1 + radius && click_x >= x + 0 * gapBut1 - radius && click_y >= y - radius + 2 * gapBut2 && click_y <= y + radius + 2 * gapBut2){
		return(1);
	}
	else if (click_x <= x + 1 * gapBut1 + radius && click_x >= x + 1 * gapBut1 - radius && click_y >= y - radius + 2 * gapBut2 && click_y <= y + radius + 2 * gapBut2){
		return(2);
	}
	else if (click_x <= x + 2 * gapBut1 + radius && click_x >= x + 2 * gapBut1 - radius && click_y >= y - radius + 2 * gapBut2 && click_y <= y + radius + 2 * gapBut2){
		return(3);
	}
	else if (click_x <= x + 3 * gapBut1 + radius && click_x >= x + 3 * gapBut1 - radius && click_y >= y - radius + 2 * gapBut2 && click_y <= y + radius + 2 * gapBut2){
		return(14);
	}
	else if (click_x <= x + 4 * gapBut1 + radius && click_x >= x + 4 * gapBut1 - radius && click_y >= y - radius + 2 * gapBut2 && click_y <= y + radius + 2 * gapBut2){
		return(15);
	}
	else if (click_x <= x + 0 * gapBut1 + radius && click_x >= x + 0 * gapBut1 - radius && click_y >= y - radius + 3 * gapBut2 && click_y <= y + radius + 3 * gapBut2){
		return(19);
	}
	else if (click_x <= x + 1 * gapBut1 + radius && click_x >= x + 1 * gapBut1 - radius && click_y >= y - radius + 3 * gapBut2 && click_y <= y + radius + 3 * gapBut2){
		return(0);
	}
	else if (click_x <= x + 2 * gapBut1 + radius && click_x >= x + 2 * gapBut1 - radius && click_y >= y - radius + 3 * gapBut2 && click_y <= y + radius + 3 * gapBut2){
		return(16);
	}
	else if (click_x <= x + 3 * gapBut1 + radius && click_x >= x + 3 * gapBut1 - radius && click_y >= y - radius + 3 * gapBut2 && click_y <= y + radius + 3 * gapBut2){
		return(17);
	}
	else if (click_x <= x + 4 * gapBut1 + radius && click_x >= x + 4 * gapBut1 - radius && click_y >= y - radius + 3 * gapBut2 && click_y <= y + radius + 3 * gapBut2){
		return(18);
	}
	else return(100);
}

void processClick(){
	if(whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y)<10){
		acc2 = (acc2 * 10) + acc1;
		acc1 = whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y);
		cout << (acc2 * 10) + acc1 << endl;		//should be the write_string
	}
	else if(whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y)>=10 && whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y)<17){
		double acc3 = (acc2 * 10) + acc1;
		op = whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y);
	}
	else if(whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y)==17){
		//plus/minus and power
	}
	else if(whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y)==18){
		
	}
	else //clear function
}

void clickCoords(double const gapBut1, double const gapBut2, double const diameter, double const x, double const y){
	while (true){
		double const radius = diameter / 2;
		wait_for_mouse_click();
		//acc2 = (acc2 * 10) + acc1;							//this sets acc2 to be whatever acc1 was before the new mouseclick
		int click_x = get_click_x();
		int click_y = get_click_y();
		processClick();
		//cout << whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y) << endl;
		//cout << "X-CLICK: " << click_x << "  Y-CLICK: " << click_y << endl;
		//acc1 = whichButton(click_x, click_y, gapBut1, gapBut2, radius, x, y);				//attains the new value for acc1
		//cout << (acc2 * 10) + acc1 << endl;

	}
}

void main(){
	make_window(500, 625);
	double const diameter = 68;
	double const spaceMar = 20;
	double const gapBut1 = 30 + diameter;
	double const gapBut2 = 62 + diameter;
	int const x = spaceMar + (diameter / 2);
	int const y = 125 + spaceMar + (diameter / 2);
	posButton(diameter, gapBut1, gapBut2, spaceMar, x, y);		//dont need spacemar
	clickCoords(gapBut1, gapBut2, diameter, x, y);
}
