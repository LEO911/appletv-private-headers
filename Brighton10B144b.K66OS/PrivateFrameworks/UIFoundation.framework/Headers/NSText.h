/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <UIView.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSText : UIView {
}
@property(assign) int alignment;	// G=0x35ac2279; S=0x35ac22b5; converted property
@property(retain) id backgroundColor;	// G=0x35ac21c5; S=0x35ac2189; converted property
@property(assign) int baseWritingDirection;	// G=0x35ac22f1; S=0x35ac2331; converted property
@property(assign) id delegate;	// G=0x35ac2021; S=0x35ac205d; converted property
@property(assign) BOOL drawsBackground;	// G=0x35ac223d; S=0x35ac2201; converted property
@property(assign, getter=isEditable) BOOL editable;	// G=0x35ac1e41; S=0x35ac1e7d; converted property
@property(assign, getter=isFieldEditor) BOOL fieldEditor;	// G=0x35ac23a9; S=0x35ac236d; converted property
@property(retain) id font;	// G=0x35ac20d5; S=0x35ac2099; converted property
@property(assign, getter=isHorizontallyResizable) BOOL horizontallyResizable;	// G=0x35ac25d5; S=0x35ac2611; converted property
@property(assign) BOOL importsGraphics;	// G=0x35ac1fa9; S=0x35ac1fe5; converted property
@property(assign) CGSize maxSize;	// G=0x35ac24d5; S=0x35ac2519; converted property
@property(assign) CGSize minSize;	// G=0x35ac2555; S=0x35ac2599; converted property
@property(assign, getter=isRichText) BOOL richText;	// G=0x35ac1f31; S=0x35ac1f6d; converted property
@property(assign, getter=isSelectable) BOOL selectable;	// G=0x35ac1eb9; S=0x35ac1ef5; converted property
@property(assign) NSRange selectedRange;	// G=0x35ac2bed; S=0x35ac2c35; converted property
@property(retain) id string;	// G=0x35ac1c25; S=0x35ac1c61; converted property
@property(retain) id textColor;	// G=0x35ac214d; S=0x35ac2111; converted property
@property(assign) BOOL usesFontPanel;	// G=0x35ac245d; S=0x35ac2499; converted property
@property(assign, getter=isVerticallyResizable) BOOL verticallyResizable;	// G=0x35ac264d; S=0x35ac2689; converted property
+ (void)initialize;	// 0x35ac1be5
- (id)RTFDFromRange:(NSRange)range;	// 0x35ac1d15
- (id)RTFFromRange:(NSRange)range;	// 0x35ac1cd9
- (void)alignCenter:(id)center;	// 0x35ac29d1
- (void)alignLeft:(id)left;	// 0x35ac2959
- (void)alignRight:(id)right;	// 0x35ac2995
// converted property getter: - (int)alignment;	// 0x35ac2279
// converted property getter: - (id)backgroundColor;	// 0x35ac21c5
// converted property getter: - (int)baseWritingDirection;	// 0x35ac22f1
- (void)changeFont:(id)font;	// 0x35ac291d
- (void)changeSpelling:(id)spelling;	// 0x35ac2cad
- (void)checkSpelling:(id)spelling;	// 0x35ac2b39
- (void)copy:(id)copy;	// 0x35ac2701
- (void)copyFont:(id)font;	// 0x35ac273d
- (void)copyRuler:(id)ruler;	// 0x35ac2779
- (void)cut:(id)cut;	// 0x35ac27b5
// converted property getter: - (id)delegate;	// 0x35ac2021
- (void)delete:(id)aDelete;	// 0x35ac27f1
// converted property getter: - (BOOL)drawsBackground;	// 0x35ac223d
// converted property getter: - (id)font;	// 0x35ac20d5
- (void)ignoreSpelling:(id)spelling;	// 0x35ac2ce9
// converted property getter: - (BOOL)importsGraphics;	// 0x35ac1fa9
// converted property getter: - (BOOL)isEditable;	// 0x35ac1e41
// converted property getter: - (BOOL)isFieldEditor;	// 0x35ac23a9
// converted property getter: - (BOOL)isHorizontallyResizable;	// 0x35ac25d5
// converted property getter: - (BOOL)isRichText;	// 0x35ac1f31
- (BOOL)isRulerVisible;	// 0x35ac2bb1
// converted property getter: - (BOOL)isSelectable;	// 0x35ac1eb9
// converted property getter: - (BOOL)isVerticallyResizable;	// 0x35ac264d
// converted property getter: - (CGSize)maxSize;	// 0x35ac24d5
// converted property getter: - (CGSize)minSize;	// 0x35ac2555
- (void)paste:(id)paste;	// 0x35ac282d
- (void)pasteFont:(id)font;	// 0x35ac2869
- (void)pasteRuler:(id)ruler;	// 0x35ac28a5
- (BOOL)readRTFDFromFile:(id)file;	// 0x35ac1e05
- (void)replaceCharactersInRange:(NSRange)range withRTF:(id)rtf;	// 0x35ac1d51
- (void)replaceCharactersInRange:(NSRange)range withRTFD:(id)rtfd;	// 0x35ac1d8d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x35ac1c9d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x35ac2c71
- (void)selectAll:(id)all;	// 0x35ac28e1
// converted property getter: - (NSRange)selectedRange;	// 0x35ac2bed
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x35ac22b5
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x35ac2189
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x35ac2331
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35ac205d
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x35ac2201
// converted property setter: - (void)setEditable:(BOOL)editable;	// 0x35ac1e7d
// converted property setter: - (void)setFieldEditor:(BOOL)editor;	// 0x35ac236d
// converted property setter: - (void)setFont:(id)font;	// 0x35ac2099
- (void)setFont:(id)font range:(NSRange)range;	// 0x35ac2421
// converted property setter: - (void)setHorizontallyResizable:(BOOL)resizable;	// 0x35ac2611
// converted property setter: - (void)setImportsGraphics:(BOOL)graphics;	// 0x35ac1fe5
// converted property setter: - (void)setMaxSize:(CGSize)size;	// 0x35ac2519
// converted property setter: - (void)setMinSize:(CGSize)size;	// 0x35ac2599
// converted property setter: - (void)setRichText:(BOOL)text;	// 0x35ac1f6d
// converted property setter: - (void)setSelectable:(BOOL)selectable;	// 0x35ac1ef5
// converted property setter: - (void)setSelectedRange:(NSRange)range;	// 0x35ac2c35
// converted property setter: - (void)setString:(id)string;	// 0x35ac1c61
// converted property setter: - (void)setTextColor:(id)color;	// 0x35ac2111
- (void)setTextColor:(id)color range:(NSRange)range;	// 0x35ac23e5
// converted property setter: - (void)setUsesFontPanel:(BOOL)panel;	// 0x35ac2499
// converted property setter: - (void)setVerticallyResizable:(BOOL)resizable;	// 0x35ac2689
- (void)showGuessPanel:(id)panel;	// 0x35ac2afd
- (void)sizeToFit;	// 0x35ac26c5
// converted property getter: - (id)string;	// 0x35ac1c25
- (void)subscript:(id)subscript;	// 0x35ac2a0d
- (void)superscript:(id)superscript;	// 0x35ac2a49
// converted property getter: - (id)textColor;	// 0x35ac214d
- (void)toggleRuler:(id)ruler;	// 0x35ac2b75
- (void)underline:(id)underline;	// 0x35ac2a85
- (void)unscript:(id)unscript;	// 0x35ac2ac1
// converted property getter: - (BOOL)usesFontPanel;	// 0x35ac245d
- (BOOL)writeRTFDToFile:(id)file atomically:(BOOL)atomically;	// 0x35ac1dc9
@end
