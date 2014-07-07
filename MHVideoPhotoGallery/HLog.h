//
//  Global.h
//  RecipeLab
//
//  Created by imrsv on 12/3/14.
//  Copyright (c) 2014 heefan. All rights reserved.
//

#ifndef RecipeLab_Global_h
#define RecipeLab_Global_h

#define HLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#define HMark() NSLog((@"%s [Line %d] "), __PRETTY_FUNCTION__, __LINE__)

#endif

