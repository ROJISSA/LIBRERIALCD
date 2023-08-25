#include "MKL25Z4.h"
#include "stdio.h"
#include "Libreria_LCD.h"
#define RS 0
#define RW 1
#define DB7 2
#define DB6 3 
#define DB5 4
#define DB4 5
#define DB3 6
#define DB2 7
#define DB1 8
#define DB0 9


void LCD_init (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTD_MASK;
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(0);
}

void Clear_Display(){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(1);
}

void Return_Home(){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(1);
    
}

void Entry_Mode_Set(int ID, int SH){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(ID);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(SH);
}

void Display_ON_OFF_Control(int D, int C, int B){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(D);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(C);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(B)
}

void Cursor_OR_Display_Shift(int SC, int RL){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(SC);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(RL);
}

void Function_Set(int DL, int N, int F){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(DL);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(N);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(F);
}

void Set_CGRAM_Address(int AC5, int AC4, int AC3, int AC2, int AC1, int AC0){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(AC5);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(AC4);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(AC3);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(AC2);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(AC1);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(AC0);

}

void Set_DDRAM_Address(int AC6, int AC5, int AC4, int AC3, int AC2, int AC1, int AC0){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(AC6);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(AC5);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(AC4);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(AC3);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(AC2);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(AC1);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(AC0);

}

void Read_Busy_Flag_And_Address_Counter(int BF,int AC6, int AC5, int AC4, int AC3, int AC2, int AC1, int AC0){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(0);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(BF);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(AC6);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(AC5);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(AC4);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(AC3);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(AC2);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(AC1);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(AC0);
}

void Write_Data_To_RAM(int D7, int D6, int D5, int D4, int D3, int D2, int D1, int D0){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(1);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(0);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(D7);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(D6);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(D5);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(D4);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(D3);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(D2);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(D1);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(D0);
}

void Read_Data_From_RAM(int D7, int D6, int D5, int D4, int D3, int D2, int D1, int D0){
    PORTD -> PCR[RS]= PORTD_PCR_MUX(1);
    PORTD -> PCR[RW]= PORTD_PCR_MUX(1);
    PORTD -> PCR[DB7]= PORTD_PCR_MUX(D7);
    PORTD -> PCR[DB6]= PORTD_PCR_MUX(D6);
    PORTD -> PCR[DB5]= PORTD_PCR_MUX(D5);
    PORTD -> PCR[DB4]= PORTD_PCR_MUX(D4);
    PORTD -> PCR[DB3]= PORTD_PCR_MUX(D3);
    PORTD -> PCR[DB2]= PORTD_PCR_MUX(D2);
    PORTD -> PCR[DB1]= PORTD_PCR_MUX(D1);
    PORTD -> PCR[DB0]= PORTD_PCR_MUX(D0);
}

void setCursor(int fila, int col){
    int row[fila]{0x00,0x40,0x14,0x54};
    
}
void createChar(){

}
