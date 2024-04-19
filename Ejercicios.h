//---------------------------------------------------------------------------

#ifndef EjerciciosH
#define EjerciciosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *Numeros1;
	TMenuItem *Numeros2;
	TMenuItem *Sumadedigitosimpares1;
	TMenuItem *Sumadedigitosdeunnumero1;
	TMenuItem *Facotrial1;
	TMenuItem *Cargarnumeros1;
	TStringGrid *StringGrid1;
	TMenuItem *ContarCantidaddigitosparesantesdeunimpar1;
	TMenuItem *Vectores1;
	TMenuItem *Vectores2;
	void __fastcall Sumadedigitosimpares1Click(TObject *Sender);
	void __fastcall Sumadedigitosdeunnumero1Click(TObject *Sender);
	void __fastcall Facotrial1Click(TObject *Sender);
	void __fastcall Cargarnumeros1Click(TObject *Sender);
	void __fastcall ContarCantidaddigitosparesantesdeunimpar1Click(TObject *Sender);
	void __fastcall Vectores2Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
