//
//  Conekta.h
//  Conekta
//
//  Created by Julian Ceballos on 10/16/15.
//
//

#ifndef Conekta_h
#define Conekta_h

#import <WebKit/WebKit.h>
#import <Foundation/Foundation.h>
#import "Token.h"
#import "Card.h"

@interface Conekta : NSObject
@property(strong,nonatomic) WKWebView *webView;
@property (nonatomic, retain) NSString *baseURI;
@property (nonatomic, retain) NSString *publicKey;

- (NSString *) deviceFingerprint;
- (void) collectDevice;

/* Resources */
- (Card *) Card;
- (Token *) Token;

@end

#endif /* Conekta_h */
