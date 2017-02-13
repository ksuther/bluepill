//  Copyright 2016 LinkedIn Corporation
//  Licensed under the BSD 2-Clause License (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at https://opensource.org/licenses/BSD-2-Clause
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OF ANY KIND, either express or implied.  See the License for the specific language governing permissions and limitations under the License.

#import <Foundation/Foundation.h>

@interface BPApp : NSObject

@property (nonatomic, strong) NSString *path;
// All test bundles inside Plugins directory in app.
@property (nonatomic, strong) NSArray *testBundles;

+ (instancetype)BPAppWithAppBundlePath:(NSString *)path
                 onlyTestingBundlePath:(NSString *)onlyBundlePath
                  withExtraTestBundles:(NSArray *)extraTestBundles
                             withError:(NSError **)error;

/*! @discussion Print the test bundles in the App along with all of their test classes/cases (Basically the .xctest files inside the Plugins directory in the .app bundle)
 */
- (void)listTests;

- (NSString *)testBundlePathForName:(NSString *)name;

@end
