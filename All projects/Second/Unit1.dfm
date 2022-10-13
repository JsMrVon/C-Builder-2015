object Form1: TForm1
  Left = 192
  Top = 124
  Width = 928
  Height = 480
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 304
    Top = 40
    Width = 113
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 184
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
  end
  object CSpinEdit1: TCSpinEdit
    Left = 184
    Top = 72
    Width = 121
    Height = 22
    TabOrder = 2
    Value = 4
    OnClick = CSpinEdit1Click
  end
  object CSpinEdit2: TCSpinEdit
    Left = 184
    Top = 96
    Width = 121
    Height = 22
    TabOrder = 3
    Value = 7
  end
  object CSpinEdit3: TCSpinEdit
    Left = 184
    Top = 152
    Width = 121
    Height = 22
    MaxValue = 20
    TabOrder = 4
  end
  object Button2: TButton
    Left = 184
    Top = 120
    Width = 121
    Height = 25
    Caption = #1057#1059#1052#1052#1040
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 304
    Top = 72
    Width = 113
    Height = 25
    Caption = 'About'
    TabOrder = 6
    OnClick = Button3Click
  end
end
