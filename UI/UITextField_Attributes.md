| 이름   | 설명  | 나이 |
| :----- | ----: | :---: |
|UITextField.text : String // 필드에 표시 할 텍스트를 가져 오거나 설정합니다.|
|UITextField.attributedText : NSAttributedString // 필드에 표시된 속성있는 텍스트를 가져 오거나 설정합니다.|
|UITextField.textColor : UIColor // 필드의 텍스트 색상을 가져 오거나 설정합니다.|
|UITextField.font : UIFont // 필드의 텍스트 폰트를 얻거나 설정합니다.|
|UITextField.textAlignment : NSTextAlignment // 기본값은 NSLeftTextAlignment입니다.|
|UITextField.borderStyle : UITextBorderStyle // 기본값은 UITextBorderStyleNone입니다. UITextBorderStyleRoundedRect로 설정하면 사용자 정의 배경 이미지가 무시됩니다.|
|UITextField.placeholder : String // default는 nil입니다. 문자열은 70 % 회색으로 그려진다.|
|UITextField.attributedPlaceholder : NSAttributedString // 필드의 고유 한 자리 표시 자 가져 오기 또는 설정|
|UITextField.clearsOnBeginEditing : Bool // 기본값은 NO입니다. 클릭 한 위치로 커서를 이동합니다. 예이면 모든 텍스트가 지워집니다.|
|UITextField.adjustsFontSizeToFitWidth : Bool // 기본값은 NO입니다. 예인 경우 텍스트는 기준선을 따라 minFontSize로 축소됩니다.|
|UITextField.minimumFontSize : CGFloat // 기본값은 0.0입니다. 실제 최소값은 읽을 수있는 값으로 고정 될 수 있습니다. adjustsFontSizeToFitWidth가 YES 인 경우에 사용됩니다.|
|UITextField.delegate : UITextFieldDelegate? // 기본값은 nil입니다. 약한 참조|
|UITextField.clearButtonMode : UITextFieldViewMode // clear 버튼이 표시되면 설정합니다. 기본값은 UITextFieldViewModeNever입니다.|
|UITextField.leftView : UIView? // 예 : 돋보기|
|UITextField.leftViewMode : UITextFieldViewMode // 왼쪽 뷰가 표시 될 때 설정합니다. 기본값은 UITextFieldViewModeNever입니다.|
|UITextField.rightView : UIView? // 예 : 북마크 버튼|
|UITextField.rightViewMode : UITextFieldViewMode // 오른쪽 뷰가 표시되면 설정합니다. 기본값은 UITextFieldViewModeNever입니다.|
|UITextField.inputView : UIView? // 객체가 첫 번째 응답자가 될 때 표시됩니다. nil로 설정하면 다음 응답 체인으로 되돌립니다. 첫 번째 응답자가 설정되어 있으면 reloadInputViews가 호출 될 때까지 적용되지 않습니다.|
|UITextField.inputAccessoryView : UIView?|
|UITextField.isSecureTextEntry : Bool // 예 : 필드에 암호 또는 카드 번호와 같은 기밀 입력이 포함 된 경우|
