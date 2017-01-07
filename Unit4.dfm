object Form4: TForm4
  Left = 283
  Top = 415
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'About'
  ClientHeight = 194
  ClientWidth = 317
  Color = clBtnHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 104
    Top = 32
    Width = 111
    Height = 29
    Caption = 'Stand up!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 80
    Top = 72
    Width = 74
    Height = 13
    Caption = 'Version: 1.0.0.0'
  end
  object Label3: TLabel
    Left = 80
    Top = 152
    Width = 14
    Height = 13
    Caption = 'by:'
  end
  object Label4: TLabel
    Left = 104
    Top = 152
    Width = 121
    Height = 13
    Caption = 'Mateusz Staszczyk, 2016'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsUnderline]
    ParentFont = False
    OnClick = Label4Click
  end
end
