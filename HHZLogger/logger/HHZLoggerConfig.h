//
//  HHZLoggerConfig.h
//  HHZLogger
//
//  Created by 陈哲是个好孩子 on 2017/7/16.
//  Copyright © 2017年 陈哲是个好孩子. All rights reserved.
//

#ifdef DEBUG
static const int ddLogLevel = DDLogLevelVerbose;
#else
static const int ddLogLevel = DDLogLevelError;
#endif
