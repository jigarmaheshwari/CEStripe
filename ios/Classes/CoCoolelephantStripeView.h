/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiUIView.h"
#import "STPView.h"

@interface CoCoolelephantStripeView : TiUIView  <STPViewDelegate> {
    
    STPView* stripeView;
    NSString* paymentKey;
}

@end
