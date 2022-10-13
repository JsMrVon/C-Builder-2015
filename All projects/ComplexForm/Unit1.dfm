object Form1: TForm1
  Left = 282
  Top = 124
  Width = 696
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
    Left = 8
    Top = 8
    Width = 169
    Height = 25
    Caption = #1050#1085#1086#1087#1082#1072
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 40
    Width = 169
    Height = 25
    Caption = #1050#1085#1086#1087#1082#1072' 2'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Memo1: TMemo
    Left = 304
    Top = 40
    Width = 233
    Height = 305
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object Button3: TButton
    Left = 8
    Top = 72
    Width = 169
    Height = 25
    Caption = 'About'
    TabOrder = 3
    OnClick = Button3Click
  end
end
