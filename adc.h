// ==========
// ADC UTILS
// ==========

/*
	Function to initialise the ADC feature
	@returns void
	
	e.g. adc_init( );
	
*/
void adc_init(void) {

	ADCSRA=0X00; // Clear previous ADC results and status flags

	ADMUX=0X60; // 0x40 for 10 bits

	ADCSRA=0X87; // We have set the ADSC bit to start a conversion, and the

	// ADPS bits are set so that the prescaler is 128

	ADCSRA=0X80; // ADEN is set, to enable the ADC

}

/*
	Function to perform an ADC conversion, Takes 0-8 as input to select which input to convert
	@returns reading (char)
	
	e.g. unsigned char result=adc_read(0);
	
*/
unsigned char adc_read(unsigned char channel) {

	unsigned char i;

	ADCH=0x00; // Clear the previous result

	i=channel&0x07; // Decide which line to perform ADC conversion on

	ADMUX=i|0x60; // Enter which line to perform in the ADC control register

	ADCSRA|=1<<ADSC;

	while(ADCSRA & (1<<ADSC));  // wait for conv. to complete

	unsigned char temp=ADCH; //unsigned int temp=ADC;   for 10 bits

	return temp;

}