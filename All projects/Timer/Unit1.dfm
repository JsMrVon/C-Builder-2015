object Form1: TForm1
  Left = 204
  Top = 124
  Width = 409
  Height = 220
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
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = #1042' '#1079#1072#1075#1086#1083#1086#1074#1086#1082
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 88
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object CSE1: TCSpinEdit
    Left = 8
    Top = 64
    Width = 121
    Height = 22
    TabOrder = 2
  end
  object CSE2: TCSpinEdit
    Left = 136
    Top = 64
    Width = 121
    Height = 22
    TabOrder = 3
  end
  object CSE3: TCSpinEdit
    Left = 264
    Top = 64
    Width = 121
    Height = 22
    TabOrder = 4
  end
  object CSE4: TCSpinEdit
    Left = 0
    Top = 120
    Width = 121
    Height = 22
    TabOrder = 5
  end
  object Button2: TButton
    Left = 152
    Top = 88
    Width = 89
    Height = 25
    Caption = #1057#1091#1084#1084#1072
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 152
    Top = 144
    Width = 75
    Height = 25
    Caption = #1044#1074#1080#1075#1072#1090#1100
    TabOrder = 7
    OnClick = Button3Click
  end
  object BitBtn1: TBitBtn
    Left = 288
    Top = 152
    Width = 75
    Height = 25
    TabOrder = 8
    OnClick = BitBtn1Click
    Kind = bkHelp
  end
  object Timer1: TTimer
    Interval = 5
    OnTimer = Timer1Timer
    Top = 88
  end
end
