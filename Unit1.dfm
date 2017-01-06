object Form1: TForm1
  Left = 548
  Top = 129
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Stand up!'
  ClientHeight = 185
  ClientWidth = 524
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 56
    Top = 77
    Width = 129
    Height = 37
    Alignment = taCenter
    AutoSize = False
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 21
    Top = 16
    Width = 104
    Height = 46
    Caption = 'Stand'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 21
    Top = 89
    Width = 20
    Height = 20
    Caption = 'for'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 416
    Top = 8
    Width = 46
    Height = 13
    Caption = 'Total time'
  end
  object Label5: TLabel
    Left = 416
    Top = 56
    Width = 92
    Height = 13
    Caption = 'Total standing time '
  end
  object Label6: TLabel
    Left = 416
    Top = 104
    Width = 79
    Height = 13
    Caption = 'Total sitting time '
  end
  object Label7: TLabel
    Left = 416
    Top = 24
    Width = 32
    Height = 13
    Caption = 'Label7'
  end
  object Label8: TLabel
    Left = 416
    Top = 72
    Width = 32
    Height = 13
    Caption = 'Label7'
  end
  object Label9: TLabel
    Left = 416
    Top = 120
    Width = 32
    Height = 13
    Caption = 'Label7'
  end
  object BitBtn1: TBitBtn
    Left = 131
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Set time'
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object Button1: TButton
    Left = 21
    Top = 144
    Width = 25
    Height = 25
    Caption = '| |'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 51
    Top = 144
    Width = 75
    Height = 25
    Caption = 'Sit down'
    TabOrder = 2
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 312
    Top = 8
  end
  object TrayIcon1: TTrayIcon
    Visible = True
    Hide = True
    RestoreOn = imLeftClickUp
    PopupMenuOn = imNone
    OnClick = TrayIcon1Click
    Left = 352
    Top = 8
  end
end
