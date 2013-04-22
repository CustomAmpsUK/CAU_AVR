// =====================
// SINGLE DIGIT DISPLAY 
// =====================

/*
	Display a number in the range 0-9 on the single digit display
	@return void;
	
	e.g. display_digit_sdd( 5 );
*/
void display_digit_sdd( int num, volatile uint8_t *port ) {

	if ( num == 0 ) {
		*port = 0b11000000;
	} else if ( num == 1 ) {
		*port = 0b1111001;
	} else if ( num == 2 ) {
		*port = 0b0100100;
	} else if ( num == 3 ) {
		*port = 0b0110000;
	} else if ( num == 4 ) {
		*port = 0b0011001;
	} else if ( num == 5 ) {
		*port = 0b0010010;
	} else if ( num == 6 ) {
		*port = 0b00000010;
	} else if ( num == 7 ) {
		*port = 0b1111000;
	} else if ( num == 8 ) {
		*port = 0x00;
	}  else if ( num == 9 ) {
		*port = 0b0011000;
	} else {
		*port = 0xFF; // turn that shit off
	}

}