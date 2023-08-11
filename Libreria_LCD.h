#ifdef Libreria_LCD.h
uint8_t I/D
void LCD_init();
void Clear_Display();
void Return_Home();
void Entry_Mode_Set(int ID, int SH);
void Display_ON_OFF_Control(int D, int C, int B);
void Cursor_OR_Display_Shift(int SC, int RL);
void Function_set(int DL, int N, int F);
void Set_CGRAM_Address(int AC5, int AC4, int AC3, int AC2, int AC1, int AC0);
void Set_DDRAM_Address(int AC6, int AC5, int AC4, int AC3, int AC2, int AC1, int AC0);
void Read_Busy_Flag_And_Address_Counter(int BF, int AC6, int AC5, int AC4, int AC3, int AC2, int AC1, int AC0);
void Write_Data_To_RAM(int D7, int D6, int D5, int D4, int D3, int D2, int D1, int D0);
void Read_Data_From_RAM(int D7, int D6, int D5, int D4, int D3, int D2, int D1, int D0);
#endif