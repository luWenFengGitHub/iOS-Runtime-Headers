/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiStatus : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bssid;
    NSData * _btcConfig;
    int  _btcMode;
    NSData * _btcProfiles2GHz;
    NSData * _btcProfiles5GHz;
    NSData * _chainAck;
    W5WiFiChannel * _channel;
    NSString * _countryCode;
    NSData * _desense;
    NSData * _desenseLevel;
    NSArray * _dnsAddresses;
    unsigned int  _eapolControlMode;
    unsigned int  _eapolSupplicantState;
    int  _guardInterval;
    NSString * _interfaceName;
    NSArray * _ipv4Addresses;
    NSString * _ipv4RouterAddress;
    NSArray * _ipv6Addresses;
    NSString * _ipv6RouterAddress;
    W5WiFiPreferredNetwork * _lastJoinedPreferredNetwork;
    W5WiFiScanResult * _lastJoinedScanResult;
    NSArray * _linkQualityUpdates;
    NSString * _macAddress;
    int  _mcsIndex;
    int  _noise;
    int  _numberOfSpacialStreams;
    int  _opMode;
    int  _phyMode;
    NSData * _power;
    BOOL  _powerOn;
    int  _rssi;
    int  _security;
    NSData * _ssid;
    NSString * _ssidString;
    NSArray * _supportedChannels;
    NSData * _txChainPower;
    double  _txRate;
}

@property (nonatomic, copy) NSString *bssid;
@property (nonatomic, copy) NSData *btcConfig;
@property (nonatomic) int btcMode;
@property (nonatomic, copy) NSData *btcProfiles2GHz;
@property (nonatomic, copy) NSData *btcProfiles5GHz;
@property (nonatomic, copy) NSData *chainAck;
@property (nonatomic, copy) W5WiFiChannel *channel;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSData *desense;
@property (nonatomic, copy) NSData *desenseLevel;
@property (nonatomic, copy) NSArray *dnsAddresses;
@property (nonatomic) unsigned int eapolControlMode;
@property (nonatomic) unsigned int eapolSupplicantState;
@property (nonatomic) int guardInterval;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSArray *ipv4Addresses;
@property (nonatomic, copy) NSString *ipv4RouterAddress;
@property (nonatomic, copy) NSArray *ipv6Addresses;
@property (nonatomic, copy) NSString *ipv6RouterAddress;
@property (nonatomic, copy) W5WiFiPreferredNetwork *lastJoinedPreferredNetwork;
@property (nonatomic, copy) W5WiFiScanResult *lastJoinedScanResult;
@property (nonatomic, copy) NSArray *linkQualityUpdates;
@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic) int mcsIndex;
@property (nonatomic) int noise;
@property (nonatomic) int numberOfSpacialStreams;
@property (nonatomic) int opMode;
@property (nonatomic) int phyMode;
@property (nonatomic, copy) NSData *power;
@property (nonatomic) BOOL powerOn;
@property (nonatomic) int rssi;
@property (nonatomic) int security;
@property (nonatomic, copy) NSData *ssid;
@property (nonatomic, copy) NSString *ssidString;
@property (nonatomic, copy) NSArray *supportedChannels;
@property (nonatomic, copy) NSData *txChainPower;
@property (nonatomic) double txRate;

+ (BOOL)supportsSecureCoding;

- (id)bssid;
- (id)btcConfig;
- (int)btcMode;
- (id)btcProfiles2GHz;
- (id)btcProfiles5GHz;
- (id)chainAck;
- (id)channel;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)desense;
- (id)desenseLevel;
- (id)dnsAddresses;
- (unsigned int)eapolControlMode;
- (unsigned int)eapolSupplicantState;
- (void)encodeWithCoder:(id)arg1;
- (int)guardInterval;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (id)ipv4Addresses;
- (id)ipv4RouterAddress;
- (id)ipv6Addresses;
- (id)ipv6RouterAddress;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToWiFiStatus:(id)arg1;
- (id)lastJoinedPreferredNetwork;
- (id)lastJoinedScanResult;
- (id)linkQualityUpdates;
- (id)macAddress;
- (int)mcsIndex;
- (int)noise;
- (int)numberOfSpacialStreams;
- (int)opMode;
- (int)phyMode;
- (id)power;
- (BOOL)powerOn;
- (int)rssi;
- (int)security;
- (void)setBssid:(id)arg1;
- (void)setBtcConfig:(id)arg1;
- (void)setBtcMode:(int)arg1;
- (void)setBtcProfiles2GHz:(id)arg1;
- (void)setBtcProfiles5GHz:(id)arg1;
- (void)setChainAck:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDesense:(id)arg1;
- (void)setDesenseLevel:(id)arg1;
- (void)setDnsAddresses:(id)arg1;
- (void)setEapolControlMode:(unsigned int)arg1;
- (void)setEapolSupplicantState:(unsigned int)arg1;
- (void)setGuardInterval:(int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpv4Addresses:(id)arg1;
- (void)setIpv4RouterAddress:(id)arg1;
- (void)setIpv6Addresses:(id)arg1;
- (void)setIpv6RouterAddress:(id)arg1;
- (void)setLastJoinedPreferredNetwork:(id)arg1;
- (void)setLastJoinedScanResult:(id)arg1;
- (void)setLinkQualityUpdates:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setMcsIndex:(int)arg1;
- (void)setNoise:(int)arg1;
- (void)setNumberOfSpacialStreams:(int)arg1;
- (void)setOpMode:(int)arg1;
- (void)setPhyMode:(int)arg1;
- (void)setPower:(id)arg1;
- (void)setPowerOn:(BOOL)arg1;
- (void)setRssi:(int)arg1;
- (void)setSecurity:(int)arg1;
- (void)setSsid:(id)arg1;
- (void)setSsidString:(id)arg1;
- (void)setSupportedChannels:(id)arg1;
- (void)setTxChainPower:(id)arg1;
- (void)setTxRate:(double)arg1;
- (id)ssid;
- (id)ssidString;
- (id)supportedChannels;
- (id)txChainPower;
- (double)txRate;

@end