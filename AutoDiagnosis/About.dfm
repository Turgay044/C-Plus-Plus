object AboutBox: TAboutBox
  Left = 200
  Top = 108
  BorderStyle = bsDialog
  Caption = 'About AutoDiagnosis'
  ClientHeight = 423
  ClientWidth = 524
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object cxHyperLinkEdit1: TcxHyperLinkEdit
    Left = 40
    Top = 379
    AutoSize = False
    ParentColor = True
    ParentFont = False
    Properties.Alignment.Horz = taCenter
    Properties.Alignment.Vert = taVCenter
    Properties.ReadOnly = True
    Properties.SingleClick = True
    Style.BorderStyle = ebsNone
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.LookAndFeel.NativeStyle = True
    Style.IsFontAssigned = True
    StyleDisabled.LookAndFeel.NativeStyle = True
    StyleFocused.LookAndFeel.NativeStyle = True
    StyleHot.LookAndFeel.NativeStyle = True
    TabOrder = 0
    Text = 'www.AutoDiagnosis.com'
    Height = 21
    Width = 129
  end
  object cxImage1: TcxImage
    Left = 8
    Top = 16
    TabOrder = 1
    Height = 353
    Width = 193
  end
  object cxLabel1: TcxLabel
    Left = 216
    Top = 16
    Caption = 
      'FirmaAd'#305#8482' AutoDiagnosis'#174' 2009  Version 12.0.3197.17370 Copyright' +
      ' '#169' 2009 All Rights Reserved.'
    ParentFont = False
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
    Properties.WordWrap = True
    Width = 298
  end
  object cxLabel2: TcxLabel
    Left = 216
    Top = 64
    Caption = 'This product is licensed to:'
    ParentFont = False
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
  end
  object cxLabel3: TcxLabel
    Left = 216
    Top = 196
    Caption = 'Developers :'
    ParentFont = False
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
  end
  object cxLabel4: TcxLabel
    Left = 287
    Top = 196
    AutoSize = False
    Caption = 'ERKAL Turgay Turgut, M.D.'
    ParentFont = False
    Style.BorderStyle = ebsOffice11
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.HotTrack = False
    Style.Shadow = False
    Style.TextStyle = []
    Style.IsFontAssigned = True
    Properties.Alignment.Horz = taCenter
    Properties.Alignment.Vert = taVCenter
    Properties.WordWrap = True
    Height = 21
    Width = 218
    AnchorX = 396
    AnchorY = 207
  end
  object cxLabel5: TcxLabel
    Left = 287
    Top = 224
    AutoSize = False
    Caption = 'HASAN Mustafa, M.D.'
    ParentFont = False
    Style.BorderStyle = ebsOffice11
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
    Properties.Alignment.Horz = taCenter
    Properties.Alignment.Vert = taVCenter
    Height = 21
    Width = 218
    AnchorX = 396
    AnchorY = 235
  end
  object cxLabel6: TcxLabel
    Left = 216
    Top = 127
    Caption = 'Registration Code:'
    ParentFont = False
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
  end
  object cxMemo1: TcxMemo
    Left = 216
    Top = 87
    Properties.ReadOnly = True
    TabOrder = 8
    Height = 27
    Width = 289
  end
  object cxMemo2: TcxMemo
    Left = 218
    Top = 267
    Lines.Strings = (
      'Warning : This program is protected by copyright law and '
      'international treaties. Unauthorized reproduction or '
      'distribution may result in severe civil and criminal '
      'penalities, and will be prosecuted to the maximum extent '
      'possible under the law.')
    ParentFont = False
    Properties.Alignment = taLeftJustify
    Properties.ReadOnly = True
    Style.Color = clGradientActiveCaption
    Style.Font.Charset = TURKISH_CHARSET
    Style.Font.Color = clWindowText
    Style.Font.Height = -11
    Style.Font.Name = 'Tahoma'
    Style.Font.Style = []
    Style.IsFontAssigned = True
    TabOrder = 9
    Height = 78
    Width = 287
  end
  object cxMemo3: TcxMemo
    Left = 218
    Top = 150
    TabOrder = 10
    Height = 27
    Width = 287
  end
  object OKButton: TButton
    Left = 430
    Top = 375
    Width = 75
    Height = 25
    Caption = 'OK'
    Default = True
    ModalResult = 1
    TabOrder = 11
    OnClick = OKButtonClick
  end
  object Panel1: TPanel
    Left = 207
    Top = 367
    Width = 298
    Height = 2
    TabOrder = 12
  end
end
