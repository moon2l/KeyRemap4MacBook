// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-
#import <Cocoa/Cocoa.h>
#import "KeyRemap4MacBookClient.h"

@interface org_pqrs_KeyRemap4MacBook_TableView_configlist : NSObject
{
  @private
  IBOutlet id view_;
  IBOutlet org_pqrs_KeyRemap4MacBook_Client* client_;
}

- (IBAction) add:(id)sender;
- (IBAction) delete:(id)sender;

@end
