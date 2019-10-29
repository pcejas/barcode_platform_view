#import <Flutter/Flutter.h>
#import <WebKit/WebKit.h>
#import <MTBBarcodeScanner/MTBBarcodeScanner.h>

@interface ScannerOverlay : UIView
@property(nonatomic) CGRect scanLineRect;

- (void) startAnimating;
- (void) stopAnimating;
@end

@interface FlutterBarcodeScanController : NSObject <FlutterPlatformView>

- (instancetype _Nonnull )initWithWithFrame:(CGRect)frame
                   viewIdentifier:(int64_t)viewId
                        arguments:(id _Nullable)args
                  binaryMessenger:(NSObject<FlutterBinaryMessenger>*_Nonnull)messenger;

- (UIView*_Nonnull)view;
//@property(nonatomic, retain) UIView *mainView;
@property(nonatomic, retain) UIView * _Nonnull previewView;
@property(nonatomic, retain) ScannerOverlay * _Nonnull scanRect;
@property(nonatomic, retain) MTBBarcodeScanner * _Nonnull scanner;
@end

@interface FlutterBarcodeScanFactory : NSObject <FlutterPlatformViewFactory>
- (instancetype _Nonnull )initWithMessenger:(NSObject<FlutterBinaryMessenger>*_Nonnull)messenger;
@end
