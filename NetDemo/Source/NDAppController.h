/*
 *  $Id$
 *
 *  NetDemo
 *  http://stuconnolly.com/projects/code/
 *
 *  Copyright (c) 2010 Stuart Connolly. All rights reserved.
 *
 *  Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation
 *  files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following
 *  conditions:
 *
 *  The above copyright notice and this permission notice shall be
 *  included in all copies or substantial portions of the Software.
 * 
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *  OTHER DEALINGS IN THE SOFTWARE.
 */

@class NDCommLink, NDLogController;

@interface NDAppController : NSWindowController <NSApplicationDelegate> 
{	
	// Core objects
	NDCommLink *_commLink;
	
	// Controllers
	IBOutlet NDLogController *_logController; 
	
	// Panels
	IBOutlet NSPanel *portPanel;
	
	// Buttons
	IBOutlet NSButton *quitButton;
	IBOutlet NSButton *sendButton;
	IBOutlet NSButton *setPortButton;
	
	// Text views
	IBOutlet NSTextView *inputTextView;
	IBOutlet NSTextView *outputTextView;
	
	// Other
	IBOutlet NSProgressIndicator *activityProgressIndicator;
	IBOutlet NSTextField *activityLabelTextField;
	IBOutlet NSTextField *portTextField;
}

- (IBAction)showNetworkLog:(id)sender;
- (IBAction)setPort:(id)sender;
- (IBAction)closeSheet:(id)sender;

@end
