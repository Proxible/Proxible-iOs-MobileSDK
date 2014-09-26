//
//  PRXMobileSDK.h
//  ProxibleMobileSDK
//
//  Created by Conrad Bartels Daal on 9/26/14.
//  Copyright (c) 2014 Proxible B.V. All rights reserved.
//

#import <Foundation/Foundation.h>

//Default to staging
typedef NS_ENUM(NSInteger, PRXCloudEnviroment){
    Development,
    Staging,
    Producton
};

/**
 The PRXMobileSDK class is the main interface to set global SDK settings.
 */
@interface PRXMobileSDK : NSObject

/**
 *  The current enviroment used for the SDK
 *
 *  @return Enviroment enum
 */
+(PRXCloudEnviroment)environment;

/**
 *  Set the enum to the desired cloud enviroment
 *
 *  @param enviroment The envrioment to set the SDK to point to
 */
+(void)setEnvironment:(PRXCloudEnviroment)environment;

@end
