/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;



@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup 
{
    NSString *_addressBookHomePath;
    NSString *_directoryGatewayPath;
}

@property(readonly) NSString *directoryGatewayPath;
@property(readonly) NSString *addressBookHomePath;


- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)directoryGatewayPath;
- (id)addressBookHomePath;
- (id)_copyAccountPropertiesPropFindElements;
- (void)dealloc;
- (id)description;

@end