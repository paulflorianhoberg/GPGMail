/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSArrayController, NSDictionary, NSMutableDictionary, NSString, NSTableView;

@interface MTMMessageColumnController : NSObject
{
    NSTableView *_messageTableView;
    NSArrayController *_messagesController;
    NSMutableDictionary *_columnConfigurations;
    NSString *_activeConfiguration;
    NSDictionary *_activeAttributes;
}

+ (void)initialize;
- (id)init;
- (void)dealloc;
- (id)_tableColumnWithIdentifier:(id)arg1 columnDict:(id)arg2;
- (void)_removeAllColumns;
- (id)_configDictForConfiguration:(id)arg1;
- (void)_updateActiveConfiguration;
@property(retain) NSString *activeConfiguration;
- (id)_tableColumnForSortName:(id)arg1;
- (void)_updateActiveAttributes;
@property(retain) NSDictionary *activeAttributes;
@property NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
@property NSTableView *messageTableView; // @synthesize messageTableView=_messageTableView;

@end
