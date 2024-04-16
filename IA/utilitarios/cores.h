//Autor: 

/*-----------------Cores do DOS-------------------------------------------------
Descri��o: Procedimento para defini��o de Cores do DOS
------------------------------------------------------------------------------*/
enum DOS_COLORS {
    BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
    LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
    LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE };
/*---------------------------------------------------------------------------*/


/*-----------------Cores das letras---------------------------------------------
Descri��o: Procedimento para inserir cores de letras no programa
------------------------------------------------------------------------------*/
void textcolor (enum DOS_COLORS iColor)
{
    HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
    BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
    bufferInfo.wAttributes &= 0x00F0;
    SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}
/*----------------------------------------------------------------------------*/
