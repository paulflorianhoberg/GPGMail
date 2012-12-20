/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSFileWrapper.h"

@class NSString;

@interface MailFileWrapper : NSFileWrapper
{
    unsigned long long _attachmentSize;
    NSString *_pathToCopy;
}

+ (id)newWithPath:(id)arg1 andContentID:(id)arg2 makingLocalCopy:(BOOL)arg3;
+ (id)localAttachmentFilesDirectory;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (id)archivedDataWithPartNumber:(id)arg1;
- (id)symbolicLinkDestination;
- (id)pathToAttachment;
- (BOOL)isALargeAttachment;
@property(retain) NSString *pathToCopy; // @synthesize pathToCopy=_pathToCopy;
@property unsigned long long approximateSize; // @synthesize approximateSize=_attachmentSize;

@end
