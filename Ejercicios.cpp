//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ejercicios.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
byte SumaDigImpares(Cardinal x)
{
	byte s;
	if (x < 10) //Caso base n=1
	{
		if (x % 2 == 1)

			 s = x;
		else
			s = 0;
	}else
		{
			s = SumaDigImpares(x/10);
			if (x % 2 == 1) 
				s = s +  x%10;
		}
	return s;
}
void __fastcall TForm1::Sumadedigitosimpares1Click(TObject *Sender)
{
	Edit2->Text = SumaDigImpares(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

