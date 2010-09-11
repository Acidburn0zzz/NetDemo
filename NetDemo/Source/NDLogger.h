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

@protocol NDLoggerDelegate;

/**
 * @class NDLogger NDLogger.h
 *
 * @author Stuart Connolly http://stuconnolly.com/
 *
 * Logger singleton class.
 */
@interface NDLogger : NSObject 
{
	id <NDLoggerDelegate> delegate;
	
	NSMutableArray *logMessages;
}

/**
 * @property delegate The logger's delegate object
 */
@property (readwrite, assign) id <NDLoggerDelegate> delegate;

/**
 * @property logMessages The logger's array of log messages
 */
@property (readonly) NSMutableArray *logMessages;

void NDLog(id caller, NSString *message, ...);
void NDLogError(id caller, NSString *message, ...);

- (void)clearLog;

@end
