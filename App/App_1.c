/*
 * App_1.c
 *
 *  Created on: Nov 14, 2026
 *      Author: samsung
 */

/*void main()
{
	//7 segment initialization at Group_B
	SSD_Init(1);
	//set counter
	uint8_t Counter =0;
	//define the state of button state
	uint8_t Button_up;
	uint8_t Button_down;
	//Define the pin of Button.
	DIO_DirectionSelectForPin(DIO_GroupB, DIO_Pin0, DIO_Low);
	DIO_DirectionSelectForPin(DIO_GroupB, DIO_Pin1, DIO_Low);
	DIO_InternalPullUpControl(DIO_GroupB, DIO_Pin0,DIO_High);
	DIO_InternalPullUpControl(DIO_GroupB, DIO_Pin1,DIO_High);
	// Display the the intial value for counter
	SSD_DisplayNo(1, Counter);


	while(1)
	{
		 DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_up);
		 DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_down);
		 if (Button_up == DIO_Low)
		 {
			 if(Counter == 9)
			 {
				 Counter = 0;
			 }else
			 {
				 Counter++;
			 }
			 // display the update the counter value
			 SSD_DisplayNo(1, Counter);
			 //wait the button release
			 do
			 {
				 DIO_ReadInputForPin(DIO_GroupB, DIO_Pin0, &Button_up);
			 }while (Button_up == DIO_Low);
		 }

		 if (Button_down==DIO_Low)
		 {
			 if (Counter==0)
			 {
				 Counter=9;
			 }else
			 {
				 Counter--;
			 }
			 SSD_DisplayNo(1, Counter);
			 do
			 {
				 DIO_ReadInputForPin(DIO_GroupB, DIO_Pin1, &Button_up);
			 }while(Button_down==DIO_Low);
		 }


	}
}
 * */
