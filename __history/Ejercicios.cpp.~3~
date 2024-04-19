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
	}else   //Caso general
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

byte Suma(Cardinal x)            //Suma de digitos de un numero
{
	byte s;
	if (x <10)
		s = x;
	else
		s = Suma(x/10) + x%10;
 return s;
// return s = (x < 10) ? x : Suma(x/10) + x%10;  "Ternario"
}

void __fastcall TForm1::Sumadedigitosdeunnumero1Click(TObject *Sender)
{
    Edit2->Text = Suma(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
byte Factorial(Cardinal n)
{
	Cardinal s;
	return s = (n < 1) ?  1 : n * Factorial(n-1);
	// Se esta usando el operador "Ternario" == if "Simplificado"
	//return variable = "Condicion" ? Valor1 : Valor2
}
void __fastcall TForm1::Facotrial1Click(TObject *Sender)
{
	Edit2->Text = Factorial(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

