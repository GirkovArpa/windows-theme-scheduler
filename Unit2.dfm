object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 201
  ClientWidth = 447
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 8
    Top = 119
    Width = 105
    Height = 73
    Center = True
    Proportional = True
    Stretch = True
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Pick Color'
    TabOrder = 0
    OnClick = Button1Click
  end
  object colorPanel: TPanel
    Left = 89
    Top = 8
    Width = 24
    Height = 25
    Color = clHighlight
    ParentBackground = False
    TabOrder = 1
  end
  object RadioGroup1: TRadioGroup
    Left = 8
    Top = 39
    Width = 105
    Height = 43
    Caption = 'Mode'
    TabOrder = 2
  end
  object RadioButton1: TRadioButton
    Left = 16
    Top = 56
    Width = 41
    Height = 17
    Caption = 'Light'
    Checked = True
    TabOrder = 3
    TabStop = True
  end
  object RadioButton2: TRadioButton
    Left = 63
    Top = 56
    Width = 41
    Height = 17
    Caption = 'Dark'
    TabOrder = 4
  end
  object wallpaperButton: TButton
    Left = 8
    Top = 88
    Width = 105
    Height = 25
    Caption = 'Pick Wallpaper'
    TabOrder = 5
    OnClick = wallpaperButtonClick
  end
  object ColorDialog1: TColorDialog
    Left = 408
    Top = 168
  end
  object OpenPictureDialog1: TOpenPictureDialog
    DefaultExt = '*.png'
    FilterIndex = 0
    Options = [ofAllowMultiSelect, ofPathMustExist, ofFileMustExist, ofEnableSizing]
    Title = 'Select a wallpaper'
    Left = 240
    Top = 40
  end
end
