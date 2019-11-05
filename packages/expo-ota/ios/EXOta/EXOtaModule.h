//  Copyright © 2018 650 Industries. All rights reserved.

#import <UMCore/UMEventEmitter.h>
#import <UMCore/UMExportedModule.h>
#import <UMCore/UMModuleRegistryConsumer.h>

@interface EXOtaModule :  UMExportedModule <UMEventEmitter, UMModuleRegistryConsumer>

-(id)init;
-(id)initWithId:(NSString *)appId;

@end
