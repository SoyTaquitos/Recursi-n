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
void CargarNumeros( int x, TStringGrid *grid, int columna = 0)
{
	if (x <10)
	{
		grid->Cells[columna][0] = IntToStr(x);
	}else
	{
		grid->Cells[columna][0] = IntToStr(x%10);
        CargarNumeros(x/10,grid,columna+1);
	}
}


void __fastcall TForm1::Cargarnumeros1Click(TObject *Sender)
{
	StringGrid1->ColCount = Edit1->Text.Length();
	CargarNumeros(StrToInt(Edit1->Text),StringGrid1);
}
//---------------------------------------------------------------------------
byte CantidadDigPares(Cardinal n)
{
	byte r;
	r = 0;
	if (n < 10) //Caso base
	{
		r = 0;
	}else
	{
		r = CantidadDigPares(n/10);
		byte a = (n/10) %10;
		byte b = (n%10);
		if ((a % 2 == 0)&&(b % 2 == 1))
		{
		 r = r + 1;
		}
	}
	return r ;
}


void __fastcall TForm1::ContarCantidaddigitosparesantesdeunimpar1Click(TObject *Sender)

{
	Edit2->Text = CantidadDigPares(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
void CargarNumDescente(byte x, TStringGrid *grid ,int col = 0)
{
	Cardinal aux = 1;
	byte num = 1;
	Cardinal v = 0;
	byte aux2 = 1;
	if (x <= 1)
	{
		grid ->Cells[col][0] = IntToStr(x);

	}else
	{
		v = (num*aux) + v ;
		num = num + 1;
		aux = 1*10;
		grid->Cells[col][0] = IntToStr(x);
		CargarNumDescente(x-1,grid,col+1);
	}
}
void __fastcall TForm1::Vectores2Click(TObject *Sender)
{
	CargarNumDescente(StrToInt(Edit1->Text),StringGrid1);
}
//---------------------------------------------------------------------------


