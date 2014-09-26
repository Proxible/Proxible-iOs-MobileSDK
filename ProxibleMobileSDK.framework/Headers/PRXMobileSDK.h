//
//  PRXMobileSDK.h
//  ProxibleMobileSDK
//
//  Created by Conrad Bartels Daal on 9/26/14.
//  Copyright (c) 2014 Proxible B.V. All rights reserved.
//

#import <Foundation/Foundation.h>

//Default to staging
typedef NS_ENUM(NSInteger, PRXEnviroment){
    Development,
    Staging,
    Producton
};

@interface PRXMobileSDK : NSObject

/**
 *  The current enviroment used for the SDK
 *
 *  @return Enviroment enum
 */
+(PRXEnviroment)environment;

/**
 *  Set the enum to the desired cloud enviroment
 *
 *  @param enviroment The envrioment to set the SDK to point to
 */
+(void)setEnvironment:(PRXEnviroment)environment;

@end
