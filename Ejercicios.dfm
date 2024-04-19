object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 615
  ClientWidth = 911
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Button1: TButton
    Left = 48
    Top = 352
    Width = 75
    Height = 25
    Caption = 'Resolver'
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 168
    Top = 297
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 168
    Top = 353
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'Edit2'
  end
  object StringGrid1: TStringGrid
    Left = 48
    Top = 209
    Width = 673
    Height = 33
    ColCount = 10
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 3
    ColWidths = (
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64)
  end
  object MainMenu1: TMainMenu
    Left = 56
    Top = 80
    object Numeros1: TMenuItem
      Caption = 'Numeros'
      object Sumadedigitosimpares1: TMenuItem
        Caption = 'Suma de digitos impares'
        OnClick = Sumadedigitosimpares1Click
      end
      object Sumadedigitosdeunnumero1: TMenuItem
        Caption = 'Suma de digitos de un numero'
        OnClick = Sumadedigitosdeunnumero1Click
      end
      object Facotrial1: TMenuItem
        Caption = 'Factorial'
        OnClick = Facotrial1Click
      end
      object ContarCantidaddigitosparesantesdeunimpar1: TMenuItem
        Caption = 'Contar Cantidad digitos pares antes de un impar'
        OnClick = ContarCantidaddigitosparesantesdeunimpar1Click
      end
    end
    object Numeros2: TMenuItem
      Caption = 'Cadenas'
      object Cargarnumeros1: TMenuItem
        Caption = 'Cargar numeros'
        OnClick = Cargarnumeros1Click
      end
    end
    object Vectores1: TMenuItem
      Caption = 'Vectores'
      object Vectores2: TMenuItem
        Caption = 'Cargar numeros descentes'
        OnClick = Vectores2Click
      end
    end
  end
end
