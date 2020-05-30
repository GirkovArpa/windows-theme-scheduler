object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 366
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
    Width = 153
    Height = 73
    Center = True
    Proportional = True
    Stretch = True
  end
  object hourLabel: TLabel
    Left = 8
    Top = 201
    Width = 27
    Height = 13
    Caption = 'Hour:'
  end
  object minuteLabel: TLabel
    Left = 84
    Top = 201
    Width = 36
    Height = 13
    Caption = 'Minute:'
  end
  object nameLabel: TLabel
    Left = 8
    Top = 275
    Width = 31
    Height = 13
    Caption = 'Name:'
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 123
    Height = 25
    Caption = 'Pick Color'
    TabOrder = 0
    OnClick = Button1Click
  end
  object colorPanel: TPanel
    Left = 137
    Top = 8
    Width = 24
    Height = 25
    Color = clHighlight
    ParentBackground = False
    TabOrder = 1
  end
  object wallpaperButton: TButton
    Left = 8
    Top = 88
    Width = 153
    Height = 25
    Caption = 'Pick Wallpaper'
    TabOrder = 3
    OnClick = wallpaperButtonClick
  end
  object hourBox: TSpinEdit
    Left = 41
    Top = 198
    Width = 34
    Height = 22
    MaxValue = 12
    MinValue = 1
    TabOrder = 4
    Value = 1
  end
  object minuteBox: TSpinEdit
    Left = 126
    Top = 198
    Width = 35
    Height = 22
    MaxValue = 59
    MinValue = 0
    TabOrder = 5
    Value = 0
  end
  object scheduleButton: TButton
    Left = 8
    Top = 299
    Width = 153
    Height = 25
    Caption = 'Schedule'
    TabOrder = 6
    OnClick = scheduleButtonClick
  end
  object ListBox1: TListBox
    Left = 167
    Top = 8
    Width = 154
    Height = 316
    ItemHeight = 13
    TabOrder = 7
    OnClick = ListBox1Click
  end
  object nameBox: TEdit
    Left = 45
    Top = 272
    Width = 116
    Height = 21
    TabOrder = 8
  end
  object buttonPreview: TButton
    Left = 8
    Top = 330
    Width = 153
    Height = 25
    Caption = 'Preview'
    TabOrder = 9
    OnClick = buttonPreviewClick
  end
  object modeGroup: TGroupBox
    Left = 8
    Top = 39
    Width = 153
    Height = 43
    Caption = 'Mode'
    TabOrder = 10
    object RadioButton1: TRadioButton
      Left = 16
      Top = 24
      Width = 113
      Height = 17
      Caption = 'RadioButton1'
      TabOrder = 0
    end
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
    Left = 408
    Top = 120
  end
end
