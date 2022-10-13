object Form1: TForm1
  Left = 192
  Top = 124
  Width = 696
  Height = 375
  Caption = #1055#1086#1087#1099#1090#1082#1080' '#1088#1080#1089#1086#1074#1072#1090#1100
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnMouseUp = FormMouseUp
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 528
    Top = 144
    Width = 111
    Height = 13
    Caption = #1056#1072#1079#1084#1077#1088' '#1086#1082#1088#1091#1078#1085#1086#1089#1090#1077#1081':'
  end
  object Button1: TButton
    Left = 560
    Top = 0
    Width = 75
    Height = 25
    Caption = #1054#1082#1088#1091#1078#1085#1086#1089#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object ColorBox1: TColorBox
    Left = 528
    Top = 56
    Width = 145
    Height = 22
    ItemHeight = 16
    TabOrder = 1
  end
  object Button2: TButton
    Left = 560
    Top = 32
    Width = 75
    Height = 25
    Caption = #1050#1074#1072#1076#1088#1072#1090
    TabOrder = 2
    OnClick = Button2Click
  end
  object ColorBox2: TColorBox
    Left = 528
    Top = 88
    Width = 145
    Height = 22
    ItemHeight = 16
    TabOrder = 3
    OnChange = ColorBox2Change
  end
  object CSpinEdit1: TCSpinEdit
    Left = 528
    Top = 160
    Width = 121
    Height = 22
    TabOrder = 4
    Value = 15
  end
  object MainMenu1: TMainMenu
    Top = 32
    object File: TMenuItem
      Caption = 'File'
      object Exit: TMenuItem
        Caption = 'Exit'
        OnClick = ExitClick
      end
    end
    object Help: TMenuItem
      Caption = 'Help'
      object About: TMenuItem
        Caption = 'About'
        OnClick = AboutClick
      end
    end
  end
end
