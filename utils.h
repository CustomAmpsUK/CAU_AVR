// ==============
// GENERAL UTILS
// ==============

#define TRUE 1
#define FALSE 0

/*
	Display a number in the range 0-9 on the single digit display
	@return void;
	
	e.g. int scaled_result = convert_range_255_to_9( 235 );
*/
int convert_range_255_to_9( unsigned char num ) {

	int old_min = 0;
	int old_max = 254;
	int old_range = ( old_max - old_min );

	int new_min = 0;
	int new_max = 9;
	int new_range = ( new_max - new_min );
	
	return ((( num - old_min ) * new_range ) / old_range ) + new_min;

}