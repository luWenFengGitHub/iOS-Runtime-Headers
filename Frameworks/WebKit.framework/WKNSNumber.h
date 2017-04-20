/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSNumber : NSNumber <WKObject> {
    union { 
        struct ObjectStorage<API::Number<bool, API::Object::Type::Boolean> > { 
            struct type { 
                unsigned char __lx[12]; 
            } data; 
        } _boolean; 
        struct ObjectStorage<API::Number<double, API::Object::Type::Double> > { 
            struct type { 
                unsigned char __lx[16]; 
            } data; 
        } _double; 
        struct ObjectStorage<API::Number<unsigned long long, API::Object::Type::UInt64> > { 
            struct type { 
                unsigned char __lx[16]; 
            } data; 
        } _uint64; 
    }  _number;
    int  _type;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (BOOL)charValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)doubleValue;
- (void)getValue:(void*)arg1;
- (const char *)objCType;
- (unsigned long long)unsignedLongLongValue;

@end