/*
 *  NetDemo
 *  https://github.com/stuconnolly/netdemo
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

/**
 * @class NDLogMessage NDLogMessage.h
 *
 * @author Stuart Connolly http://stuconnolly.com/
 *
 * Class representing a single log message.
 */
@interface NDLogMessage : NSObject
{
	BOOL isError;
	
	NSString *caller;
	NSString *message;
	
	NSDate *messageDate;
}

/**
 * @property isError Indicates whether this message was an error
 */
@property (readwrite, assign) BOOL isError;

/**
 * @property messageDate The date the message was created
 */
@property (readwrite, retain) NSDate *messageDate;

/**
 * @property caller The caller that created the message
 */
@property (readwrite, retain) NSString *caller;

/**
 * @property message The actual message
 */
@property (readwrite, retain) NSString *message;

+ (NDLogMessage *)logMessageFromCaller:(NSString *)messageCaller withMessage:(NSString *)logMessage date:(NSDate *)date;

- (id)initWithCaller:(NSString *)messageCaller message:(NSString *)logMessage date:(NSDate *)date;

@end
