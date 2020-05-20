## 1. Speak

```objective-c
#import <AVFoundation/AVFoundation.h>
```

`first, you should to include avfoundation header file`

```objective-c
AVSpeechSynthesizer *synthesizer = [[AVSpeechSynthesizer alloc]init];
AVSpeechUtterance *utterance = [AVSpeechUtterance speechUtteranceWithString:@"Some text"];
[utterance setRate:0.2f];
[synthesizer speakUtterance:utterance];
```
