#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PSCKotlinByteArray, PSCTwiCommand, PSCTwiEventType, PSCTwiEvent, PSCKotlinEnum<E>, PSCKotlinArray<T>, PSCTwiComponentError, PSCTwiSimConnectError, PSCContextArgument, PSCLevel, PSCLogData, PSCLogger, PSCParameters, PSCSimulatedPod, PSCPodParameters, PSCPodState, PSCHypoProtectParameters, PSCValueCountPair, PSCValueResultPair, PSCAidLoopStateEnum, PSCPodUtil, PSCSharedPrefsUtil, PSCBasalParameters, PSCBasalStep, PSCBasalRunnable, PSCBolusParameters, PSCBolusState, PSCBolusRunnable, PSCRepository, PSCPscConfiguration, PSCPodControl, PSCIOSTimerTask, PSCIOSTimerTaskExecutor, PSCAlarmCode, PSCAlertType, PSCCommLossErrorEnum, PSCDisconnectionReason, PSCER48ErrorCode, PSCEgvEmulateType, PSCPodAlertsCloseLoopAlert, PSCPodAlertsOpenLoopAlert, PSCPodLotTypeEnum, PSCKotlinIntArray, PSCPodQnState, PSCProgramStatus, PSCStringFormat, PSCDatabaseDriverFactory, PSCCgmTable, PSCSimPodTable, PSCSimDataTable, PSCPodEventType, PSCBaseNudgeData, PSCPodTwiShim, PSCInsulinDeliveryServiceKMM, PSCPlatformShim, PSCPodSim, PSCProcessTwiCommand, PSCPodCommUtil, PSCAlertUtil, PSCExecutorFactory, PSCSimData, PSCCommandParser, PSCPodEvent, PSCPodStateMachine, PSCSimDataParameters, PSCReaktiveObservableWrapper<__covariant T>, PSCBlePod, PSCPodMessageQueue, PSCNudgeController, PSCStatusPageGenerator, PSCCgmUtil, PSCCgmStateEnum, PSCSimulatedCgm, PSCEgvSample, PSCCgmConditionEnum, PSCCgmAlgoStateEnum, PSCCgmTxStateEnum, PSCAlgorithmService, PSCCgmSpecialEgvEnum, PSCPodNudgeQueue, PSCProgrammedAlert, PSCKMMByteBuffer, PSCCommandName, NSData, PSCIOSByteBuffer, NSTimer, PSCKotlinShortArray, PSCBasal, PSCBolus, PSCInsulinCommand, PSCTempBasal, PSCPlatformSpecificLogger, PSCProcess, PSCDateProvider, PSCCsddHeader, PSCPreferences, PSCKotlinx_datetimeLocalDateTime, PSCDate, PSCAutoOffState, PSCAutoOffStateMachine, PSCRequestBroker, PSCAsciiPayloadParser, PSCBinaryPayloadParser, PSCNoPayloadParser, PSCBasalInitStep, PSCStep, PSCIPCommandTestForNextStep, PSCInsulinHistory, PSCPatientHistoryLog, PSCPatientHistoryLogHeader, PSCProgrammedAlertCloseLoopAlert, PSCProgrammedAlertOpenLoopAlert, PSCReservoirSim, PSCTempBasalStep, PSCKeyValueCountMap, PSCKeyCountMap, PSCKeyValueResultMap, PSCKotlinDurationUnit, PSCCommLossParameters, PSCRuntimeQuery<__covariant RowType>, PSCKotlinByteIterator, PSCKotlinIntIterator, PSCRuntimeTransacterTransaction, PSCReaktiveSubjectStatus, PSCKotlinThrowable, PSCKotlinException, PSCKotlinRuntimeException, PSCKotlinShortIterator, PSCKotlinx_datetimeMonth, PSCKotlinx_datetimeLocalDate, PSCKotlinx_datetimeDayOfWeek, PSCKotlinIllegalStateException;

@protocol PSCKotlinComparable, PSCKotlinCoroutineContext, PSCKotlinx_coroutines_coreCoroutineScope, PSCRuntimeSqlDriver, PSCReaktivePublishSubject, PSCReaktiveObservable, PSCReaktiveConnectableObservable, PSCReaktiveScheduler, PSCKotlinIterator, PSCKotlinIterable, PSCCommandParser, PSCIAutoOffSharedPreferenceData, PSCCommandExecutor, PSCAdbCommand, PSCRuntimeTransactionWithoutReturn, PSCRuntimeTransactionWithReturn, PSCRuntimeTransacter, PSCCgmDatabaseQueries, PSCPodDatabaseQueries, PSCSimDataDatabaseQueries, PSCPodDatabase, PSCRuntimeSqlDriverSchema, PSCKotlinSuspendFunction0, PSCKotlinCoroutineContextElement, PSCKotlinCoroutineContextKey, PSCRuntimeSqlPreparedStatement, PSCRuntimeSqlCursor, PSCRuntimeCloseable, PSCReaktiveObserver, PSCReaktiveSource, PSCReaktiveValueCallback, PSCReaktiveRelay, PSCReaktiveCompleteCallback, PSCReaktiveErrorCallback, PSCReaktiveCompletableCallbacks, PSCReaktiveObservableCallbacks, PSCReaktiveSubject, PSCReaktiveDisposable, PSCReaktiveConnectable, PSCReaktiveObservableObserver, PSCReaktiveSchedulerExecutor, PSCRuntimeQueryListener, PSCRuntimeTransactionCallbacks, PSCKotlinFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface PSCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PSCBase (PSCBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PSCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PSCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPSCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PSCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface PSCByte : PSCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PSCUByte : PSCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PSCShort : PSCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PSCUShort : PSCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PSCInt : PSCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PSCUInt : PSCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PSCLong : PSCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PSCULong : PSCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PSCFloat : PSCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PSCDouble : PSCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PSCBoolean : PSCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiCommand")))
@interface PSCTwiCommand : PSCBase
- (instancetype)initWithPrefix:(NSString *)prefix payload:(PSCKotlinByteArray * _Nullable)payload __attribute__((swift_name("init(prefix:payload:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (PSCKotlinByteArray * _Nullable)component2 __attribute__((swift_name("component2()")));
- (PSCTwiCommand *)doCopyPrefix:(NSString *)prefix payload:(PSCKotlinByteArray * _Nullable)payload __attribute__((swift_name("doCopy(prefix:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSCKotlinByteArray * _Nullable payload __attribute__((swift_name("payload")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiConstants")))
@interface PSCTwiConstants : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)twiConstants __attribute__((swift_name("init()")));
@property (readonly) int8_t ALARM_TYPE_BYTE_INDEX __attribute__((swift_name("ALARM_TYPE_BYTE_INDEX")));
@property (readonly) int8_t ALERT_TYPE_BYTE_INDEX __attribute__((swift_name("ALERT_TYPE_BYTE_INDEX")));
@property (readonly) int32_t TWI_HEADER_LENGTH __attribute__((swift_name("TWI_HEADER_LENGTH")));
@property (readonly) PSCKotlinByteArray *TWI_I2C_HEADER_PREFIX __attribute__((swift_name("TWI_I2C_HEADER_PREFIX")));
@property (readonly) NSString *TWI_I2C_HEADER_PREFIX_STR __attribute__((swift_name("TWI_I2C_HEADER_PREFIX_STR")));
@property PSCKotlinByteArray *TWI_TRAILER __attribute__((swift_name("TWI_TRAILER")));
@property (readonly) int32_t TWI_TRAILER_LENGTH __attribute__((swift_name("TWI_TRAILER_LENGTH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiEvent")))
@interface PSCTwiEvent : PSCBase
- (instancetype)initWithType:(PSCTwiEventType *)type data:(id _Nullable)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
- (PSCTwiEventType *)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (PSCTwiEvent *)doCopyType:(PSCTwiEventType *)type data:(id _Nullable)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@property (readonly) PSCTwiEventType *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PSCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PSCKotlinEnum<E> : PSCBase <PSCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiEvent.Type_")))
@interface PSCTwiEventType : PSCKotlinEnum<PSCTwiEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCTwiEventType *connected __attribute__((swift_name("connected")));
@property (class, readonly) PSCTwiEventType *failedToConnect __attribute__((swift_name("failedToConnect")));
@property (class, readonly) PSCTwiEventType *disconnected __attribute__((swift_name("disconnected")));
@property (class, readonly) PSCTwiEventType *msgSent __attribute__((swift_name("msgSent")));
@property (class, readonly) PSCTwiEventType *msgReceived __attribute__((swift_name("msgReceived")));
@property (class, readonly) PSCTwiEventType *msgNudgeAlertReceived __attribute__((swift_name("msgNudgeAlertReceived")));
@property (class, readonly) PSCTwiEventType *msgNudgePeriodicDataReceived __attribute__((swift_name("msgNudgePeriodicDataReceived")));
@property (class, readonly) PSCTwiEventType *msgNudgePeriodicConfigCommandDelivered __attribute__((swift_name("msgNudgePeriodicConfigCommandDelivered")));
@property (class, readonly) PSCTwiEventType *msgNudgePeriodicCommandPeriodic __attribute__((swift_name("msgNudgePeriodicCommandPeriodic")));
+ (PSCKotlinArray<PSCTwiEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiSimConnectError")))
@interface PSCTwiSimConnectError : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCTwiComponentError *)getErrCode __attribute__((swift_name("getErrCode()")));
- (PSCTwiComponentError *)getErrCodeAndDecreaseErrCount __attribute__((swift_name("getErrCodeAndDecreaseErrCount()")));
- (int32_t)getErrCount __attribute__((swift_name("getErrCount()")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setTwiComponentErrorErrorCount:(int32_t)errorCount errorCode:(int32_t)errorCode __attribute__((swift_name("setTwiComponentError(errorCount:errorCode:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property PSCTwiComponentError *errorCode __attribute__((swift_name("errorCode")));
@property int32_t errorCount __attribute__((swift_name("errorCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiSimConnectError.Companion")))
@interface PSCTwiSimConnectErrorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCTwiSimConnectError *)getInstance __attribute__((swift_name("getInstance()")));
- (PSCTwiComponentError *)getTwiComponentErrorByErrCode:(int32_t)errCode __attribute__((swift_name("getTwiComponentErrorBy(errCode:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextArgument")))
@interface PSCContextArgument : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("PscConfiguration")))
@interface PSCPscConfiguration : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setContextContext:(id _Nullable)context __attribute__((swift_name("setContext(context:)")));
@property PSCContextArgument * _Nullable contextArgument __attribute__((swift_name("contextArgument")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Level")))
@interface PSCLevel : PSCKotlinEnum<PSCLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) PSCLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PSCLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PSCLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) PSCLevel *error __attribute__((swift_name("error")));
+ (PSCKotlinArray<PSCLevel *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogData")))
@interface PSCLogData : PSCBase
- (instancetype)initWithLevel:(PSCLevel *)level tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("init(level:tag:message:)"))) __attribute__((objc_designated_initializer));
- (PSCLevel *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (PSCLogData *)doCopyLevel:(PSCLevel *)level tag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("doCopy(level:tag:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSCLevel *level __attribute__((swift_name("level")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end;

__attribute__((swift_name("PlatformSpecificLogger")))
@interface PSCPlatformSpecificLogger : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dLogData:(PSCLogData *)logData __attribute__((swift_name("d(logData:)")));
- (void)eLogData:(PSCLogData *)logData __attribute__((swift_name("e(logData:)")));
- (void)iLogData:(PSCLogData *)logData __attribute__((swift_name("i(logData:)")));
- (void)vLogData:(PSCLogData *)logData __attribute__((swift_name("v(logData:)")));
- (void)wLogData:(PSCLogData *)logData __attribute__((swift_name("w(logData:)")));
@end;

__attribute__((swift_name("Process")))
@interface PSCProcess : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getPid __attribute__((swift_name("getPid()")));
- (int32_t)getTid __attribute__((swift_name("getTid()")));
@end;

__attribute__((swift_name("Parameters")))
@interface PSCParameters : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (BOOL)getBooleanI:(int32_t)i __attribute__((swift_name("getBoolean(i:)")));
- (int32_t)getIntFromBooleanB:(BOOL)b __attribute__((swift_name("getIntFromBoolean(b:)")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("PodParameters")))
@interface PSCPodParameters : PSCParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertParameters")))
@interface PSCAlertParameters : PSCPodParameters
- (instancetype)initWithAlertMask:(int8_t)alertMask on_off:(int32_t)on_off logger:(PSCLogger *)logger __attribute__((swift_name("init(alertMask:on_off:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int8_t alertMask __attribute__((swift_name("alertMask")));
@property int32_t on_off __attribute__((swift_name("on_off")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalParameters")))
@interface PSCBasalParameters : PSCPodParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int32_t accumulatedPPCount __attribute__((swift_name("accumulatedPPCount")));
@property int32_t addPPWhenWakeup __attribute__((swift_name("addPPWhenWakeup")));
@property int32_t basalActive __attribute__((swift_name("basalActive")));
@property NSString * _Nullable basalData __attribute__((swift_name("basalData")));
@property int32_t basalInitState __attribute__((swift_name("basalInitState")));
@property int32_t delayUntilFirstPP __attribute__((swift_name("delayUntilFirstPP")));
@property int32_t increasePulsesDeliveredTotal __attribute__((swift_name("increasePulsesDeliveredTotal")));
@property int32_t podState __attribute__((swift_name("podState")));
@property int32_t stopBolus __attribute__((swift_name("stopBolus")));
@property int32_t tempBasalActive __attribute__((swift_name("tempBasalActive")));
@property NSString * _Nullable tempBasalData __attribute__((swift_name("tempBasalData")));
@property int32_t tempBasalInitState __attribute__((swift_name("tempBasalInitState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusParameters")))
@interface PSCBolusParameters : PSCPodParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property BOOL addIob __attribute__((swift_name("addIob")));
@property int32_t basalActive __attribute__((swift_name("basalActive")));
@property int32_t bolusActive __attribute__((swift_name("bolusActive")));
@property int32_t bolusPulsesRemaining __attribute__((swift_name("bolusPulsesRemaining")));
@property int32_t bolusState __attribute__((swift_name("bolusState")));
@property int32_t decreaseReservoir __attribute__((swift_name("decreaseReservoir")));
@property int32_t delayBetweenPPExtendedInMils __attribute__((swift_name("delayBetweenPPExtendedInMils")));
@property int32_t delayBetweenPPImmediateInMils __attribute__((swift_name("delayBetweenPPImmediateInMils")));
@property int32_t extBolusActive __attribute__((swift_name("extBolusActive")));
@property int32_t extBolusExpireTimeInSec __attribute__((swift_name("extBolusExpireTimeInSec")));
@property int32_t extendedBolusPulses __attribute__((swift_name("extendedBolusPulses")));
@property int32_t immediateBolusPulses __attribute__((swift_name("immediateBolusPulses")));
@property int32_t increasePulsesDeliveredTotalOnPod __attribute__((swift_name("increasePulsesDeliveredTotalOnPod")));
@property PSCPodState *podState __attribute__((swift_name("podState")));
@property int32_t pulseDelivered __attribute__((swift_name("pulseDelivered")));
@property int32_t pulsesDeliveredTotalOnPod __attribute__((swift_name("pulsesDeliveredTotalOnPod")));
@property int32_t seqNumDuplicated __attribute__((swift_name("seqNumDuplicated")));
@property int32_t setPodState __attribute__((swift_name("setPodState")));
@property int32_t stopBolus __attribute__((swift_name("stopBolus")));
@property int32_t tempBasalActive __attribute__((swift_name("tempBasalActive")));
@property int32_t totalBolusPulses __attribute__((swift_name("totalBolusPulses")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EgvParameters")))
@interface PSCEgvParameters : PSCPodParameters
- (instancetype)initWithEgv:(int16_t)egv timeStampInSeconds:(int32_t)timeStampInSeconds logger:(PSCLogger *)logger __attribute__((swift_name("init(egv:timeStampInSeconds:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int16_t egv __attribute__((swift_name("egv")));
@property int32_t timeStampInSeconds __attribute__((swift_name("timeStampInSeconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HypoProtectParameters")))
@interface PSCHypoProtectParameters : PSCPodParameters
- (instancetype)initWithLogger:(PSCLogger *)logger hypoProtect:(int8_t)hypoProtect intensity:(int8_t)intensity duration:(int8_t)duration __attribute__((swift_name("init(logger:hypoProtect:intensity:duration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PSCLogger *)component1 __attribute__((swift_name("component1()")));
- (int8_t)component2 __attribute__((swift_name("component2()")));
- (int8_t)component3 __attribute__((swift_name("component3()")));
- (int8_t)component4 __attribute__((swift_name("component4()")));
- (PSCHypoProtectParameters *)doCopyLogger:(PSCLogger *)logger hypoProtect:(int8_t)hypoProtect intensity:(int8_t)intensity duration:(int8_t)duration __attribute__((swift_name("doCopy(logger:hypoProtect:intensity:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int8_t duration __attribute__((swift_name("duration")));
@property int8_t hypoProtect __attribute__((swift_name("hypoProtect")));
@property int8_t intensity __attribute__((swift_name("intensity")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@end;

__attribute__((swift_name("KeyCountMap")))
@interface PSCKeyCountMap : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)isValueSetAndReduceCountInkey:(NSString * _Nullable)inkey __attribute__((swift_name("isValueSetAndReduceCount(inkey:)")));
- (void)printAll __attribute__((swift_name("printAll()")));
- (void)setEntryInMapInkey:(NSString *)inkey count:(int32_t)count __attribute__((swift_name("setEntryInMap(inkey:count:)")));
@end;

__attribute__((swift_name("KeyValueCountMap")))
@interface PSCKeyValueCountMap : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsKeyKey:(NSString *)key __attribute__((swift_name("containsKey(key:)")));
- (int32_t)getValueAndReduceCountKeyValue:(NSString *)keyValue __attribute__((swift_name("getValueAndReduceCount(keyValue:)")));
- (BOOL)isValueSetInMapKeyValue:(NSString * _Nullable)keyValue __attribute__((swift_name("isValueSetInMap(keyValue:)")));
- (void)printAll __attribute__((swift_name("printAll()")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (void)setValueInMapKeyValue:(NSString * _Nullable)keyValue value:(int32_t)value count:(int32_t)count __attribute__((swift_name("setValueInMap(keyValue:value:count:)")));
@property PSCMutableDictionary<NSString *, PSCValueCountPair *> * _Nullable map __attribute__((swift_name("map")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValueCountMap.Companion")))
@interface PSCKeyValueCountMapCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValueResultMap")))
@interface PSCKeyValueResultMap : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsKeyKey:(NSString *)key __attribute__((swift_name("containsKey(key:)")));
- (int32_t)getResultAndRemoveEntryKeyValue:(NSString * _Nullable)keyValue __attribute__((swift_name("getResultAndRemoveEntry(keyValue:)")));
- (NSString * _Nullable)getValueKeyValue:(NSString * _Nullable)keyValue __attribute__((swift_name("getValue(keyValue:)")));
- (BOOL)isValueSetInMapKeyValue:(NSString * _Nullable)keyValue __attribute__((swift_name("isValueSetInMap(keyValue:)")));
- (void)setValueInMapKeyValue:(NSString * _Nullable)keyValue value:(NSString * _Nullable)value result:(int32_t)result __attribute__((swift_name("setValueInMap(keyValue:value:result:)")));
@property PSCMutableDictionary<NSString *, PSCValueResultPair *> *map __attribute__((swift_name("map")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopParameters")))
@interface PSCLoopParameters : PSCPodParameters
- (instancetype)initWithLoopStateEnum:(PSCAidLoopStateEnum *)loopStateEnum logger:(PSCLogger *)logger __attribute__((swift_name("init(loopStateEnum:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)setLoopStateLoopState:(int32_t)loopState __attribute__((swift_name("setLoopState(loopState:)")));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopParameters.Companion")))
@interface PSCLoopParametersCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parameters.Companion")))
@interface PSCParametersCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SeqNumParameters")))
@interface PSCSeqNumParameters : PSCPodParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)setLastIPCommandSequenceNumberThisSequenceNumber:(int16_t)thisSequenceNumber thisCommandOpcode:(int8_t)thisCommandOpcode __attribute__((swift_name("setLastIPCommandSequenceNumber(thisSequenceNumber:thisCommandOpcode:)")));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int8_t opCode __attribute__((swift_name("opCode")));
@property int16_t seqNum __attribute__((swift_name("seqNum")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopParameters")))
@interface PSCStopParameters : PSCPodParameters
- (instancetype)initWithBasalInitState:(int32_t)basalInitState tempBasalInitState:(int32_t)tempBasalInitState basalActive:(int32_t)basalActive tempBasalActive:(int32_t)tempBasalActive stopBolus:(int32_t)stopBolus basalData:(NSString * _Nullable)basalData bolusActive:(int32_t)bolusActive extBolusActive:(int32_t)extBolusActive logger:(PSCLogger *)logger __attribute__((swift_name("init(basalInitState:tempBasalInitState:basalActive:tempBasalActive:stopBolus:basalData:bolusActive:extBolusActive:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int32_t basalActive __attribute__((swift_name("basalActive")));
@property NSString * _Nullable basalData __attribute__((swift_name("basalData")));
@property int32_t basalInitState __attribute__((swift_name("basalInitState")));
@property int32_t bolusActive __attribute__((swift_name("bolusActive")));
@property int32_t extBolusActive __attribute__((swift_name("extBolusActive")));
@property int32_t stopBolus __attribute__((swift_name("stopBolus")));
@property int32_t tempBasalActive __attribute__((swift_name("tempBasalActive")));
@property int32_t tempBasalInitState __attribute__((swift_name("tempBasalInitState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TxPodParameters")))
@interface PSCTxPodParameters : PSCPodParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)updateParametersOnPodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("updateParametersOnPod(pod:)")));
@property int16_t egv __attribute__((swift_name("egv")));
@property int32_t er48ActivationStatus __attribute__((swift_name("er48ActivationStatus")));
@property int32_t timeStampInSeconds __attribute__((swift_name("timeStampInSeconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueCountPair")))
@interface PSCValueCountPair : PSCBase
- (instancetype)initWithValue:(int32_t)value count:(int32_t)count __attribute__((swift_name("init(value:count:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (PSCValueCountPair *)doCopyValue:(int32_t)value count:(int32_t)count __attribute__((swift_name("doCopy(value:count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueResultPair")))
@interface PSCValueResultPair : PSCBase
- (instancetype)initWithValue:(NSString *)value result:(int32_t)result __attribute__((swift_name("init(value:result:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (PSCValueResultPair *)doCopyValue:(NSString *)value result:(int32_t)result __attribute__((swift_name("doCopy(value:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t result __attribute__((swift_name("result")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("BasalRunnable")))
@interface PSCBasalRunnable : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil prefsUtil:(PSCSharedPrefsUtil *)prefsUtil __attribute__((swift_name("init(logger:podUtil:prefsUtil:)"))) __attribute__((objc_designated_initializer));
- (void)cleanBasalParameters __attribute__((swift_name("cleanBasalParameters()")));
- (int64_t)getCurrentTimeInMillis __attribute__((swift_name("getCurrentTimeInMillis()")));
- (int32_t)getSystemTimeOfDayInMillis __attribute__((swift_name("getSystemTimeOfDayInMillis()")));
- (void)processBasalPod:(PSCSimulatedPod *)pod basalParameters:(PSCBasalParameters *)basalParameters __attribute__((swift_name("processBasal(pod:basalParameters:)")));
- (void)processTempBasalPod:(PSCSimulatedPod *)pod basalParameters:(PSCBasalParameters *)basalParameters currentTimeMillis:(int64_t)currentTimeMillis __attribute__((swift_name("processTempBasal(pod:basalParameters:currentTimeMillis:)")));
- (void)runBasal __attribute__((swift_name("runBasal()")));
- (void)runBasalInWhileLoop __attribute__((swift_name("runBasalInWhileLoop()")));
- (void)sleepAndCheckForInterruptionSleepTimeInMilSeconds:(int64_t)sleepTimeInMilSeconds __attribute__((swift_name("sleepAndCheckForInterruption(sleepTimeInMilSeconds:)")));
- (void)sleepAndWaitSleepTimeInMilSeconds:(int32_t)sleepTimeInMilSeconds __attribute__((swift_name("sleepAndWait(sleepTimeInMilSeconds:)")));
@property PSCBasalParameters * _Nullable basalParameters __attribute__((swift_name("basalParameters")));
@property PSCBasalStep * _Nullable basalStep __attribute__((swift_name("basalStep")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property int32_t nextSleepTimeInMilSec __attribute__((swift_name("nextSleepTimeInMilSec")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@property BOOL saveBasalChangeOnPod __attribute__((swift_name("saveBasalChangeOnPod")));
@property int32_t timeOfDayInMillis __attribute__((swift_name("timeOfDayInMillis")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalRunnable.Companion")))
@interface PSCBasalRunnableCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)stopBasalStop:(BOOL)stop __attribute__((swift_name("stopBasal(stop:)")));
@property BOOL BASALRUNNING __attribute__((swift_name("BASALRUNNING")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *accumulatedPP __attribute__((swift_name("accumulatedPP")));
@property int32_t accumulatedPPCount __attribute__((swift_name("accumulatedPPCount")));
@property int32_t basal_channel __attribute__((swift_name("basal_channel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalRunnableIos")))
@interface PSCBasalRunnableIos : PSCBasalRunnable
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil prefsUtil:(PSCSharedPrefsUtil *)prefsUtil __attribute__((swift_name("init(logger:podUtil:prefsUtil:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)run __attribute__((swift_name("run()")));
- (void)sleepAndCheckForInterruptionSleepTimeInMilSeconds:(int64_t)sleepTimeInMilSeconds __attribute__((swift_name("sleepAndCheckForInterruption(sleepTimeInMilSeconds:)")));
- (void)stop __attribute__((swift_name("stop()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalRunnableIos.Companion")))
@interface PSCBasalRunnableIosCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PSCKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("BolusRunnable")))
@interface PSCBolusRunnable : PSCBase <PSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (void)adjustBolusPulsesRemainingAndPulsesDeliveredValuesPod:(PSCSimulatedPod *)pod bolusParameters:(PSCBolusParameters *)bolusParameters podState:(PSCPodState *)podState __attribute__((swift_name("adjustBolusPulsesRemainingAndPulsesDeliveredValues(pod:bolusParameters:podState:)")));
- (void)changeToNextPodStatePodState:(PSCPodState *)podState pod:(PSCSimulatedPod *)pod bolusParameters:(PSCBolusParameters *)bolusParameters __attribute__((swift_name("changeToNextPodState(podState:pod:bolusParameters:)")));
- (void)interruptBolusToEndPodState:(PSCPodState *)podState pod:(PSCSimulatedPod *)pod bolusParameters:(PSCBolusParameters *)bolusParameters __attribute__((swift_name("interruptBolusToEnd(podState:pod:bolusParameters:)")));
- (void)interruptCurrentBolus __attribute__((swift_name("interruptCurrentBolus()")));
- (void)processBolusOrExtendedBolusPod:(PSCSimulatedPod *)pod bolusParameters:(PSCBolusParameters *)bolusParameters podState:(PSCPodState *)podState __attribute__((swift_name("processBolusOrExtendedBolus(pod:bolusParameters:podState:)")));
- (void)runBolus __attribute__((swift_name("runBolus()")));
- (void)runBolusInWhileLoop __attribute__((swift_name("runBolusInWhileLoop()")));
- (void)setBolusFinishedPodState:(PSCPodState *)podState pod:(PSCSimulatedPod *)pod bolusParameters:(PSCBolusParameters *)bolusParameters __attribute__((swift_name("setBolusFinished(podState:pod:bolusParameters:)")));
- (void)sleepAndWait __attribute__((swift_name("sleepAndWait()")));
@property PSCBolusParameters * _Nullable bolusParameters __attribute__((swift_name("bolusParameters")));
@property int32_t bolusPulsesDelivered __attribute__((swift_name("bolusPulsesDelivered")));
@property BOOL bolusRunning __attribute__((swift_name("bolusRunning")));
@property (readonly) id<PSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@property int64_t sleepTimeInMils __attribute__((swift_name("sleepTimeInMils")));
@property int32_t totalPulses __attribute__((swift_name("totalPulses")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusRunnable.Companion")))
@interface PSCBolusRunnableCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)stopBolusRunnableLogger:(PSCLogger *)logger __attribute__((swift_name("stopBolusRunnable(logger:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property PSCBolusState *bolus_state __attribute__((swift_name("bolus_state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusRunnableIos")))
@interface PSCBolusRunnableIos : PSCBolusRunnable
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (void)run __attribute__((swift_name("run()")));
- (void)sleepAndWait __attribute__((swift_name("sleepAndWait()")));
- (void)stop __attribute__((swift_name("stop()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusRunnableIos.Companion")))
@interface PSCBolusRunnableIosCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("InsulinDeliveryService")))
@interface PSCInsulinDeliveryService : PSCBase
- (instancetype)initWithRepository:(PSCRepository *)repository logger:(PSCLogger *)logger __attribute__((swift_name("init(repository:logger:)"))) __attribute__((objc_designated_initializer));
- (void)acquireWakeLock __attribute__((swift_name("acquireWakeLock()")));
- (void)cancelExtBolusPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("cancelExtBolus(pscConfiguration:)")));
- (void)cancelTempBasalPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("cancelTempBasal(pscConfiguration:)")));
- (void)createBasalRunnable __attribute__((swift_name("createBasalRunnable()")));
- (void)createBolusRunnable __attribute__((swift_name("createBolusRunnable()")));
- (void)executeCommandPscConfiguration:(PSCPscConfiguration *)pscConfiguration command:(PSCKotlinByteArray *)command __attribute__((swift_name("executeCommand(pscConfiguration:command:)")));
- (void)finishBasal __attribute__((swift_name("finishBasal()")));
- (void)finishBolus __attribute__((swift_name("finishBolus()")));
- (void)finishExtBolus __attribute__((swift_name("finishExtBolus()")));
- (void)getBolusCompletePendingIntentPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("getBolusCompletePendingIntent(pscConfiguration:)")));
- (PSCSimulatedPod *)getPodFromPodSim __attribute__((swift_name("getPodFromPodSim()")));
- (PSCPodUtil *)getPodUtil __attribute__((swift_name("getPodUtil()")));
- (void)handlePodAlertAndAlarmsManagedPod:(PSCSimulatedPod * _Nullable)managedPod observedPod:(PSCSimulatedPod * _Nullable)observedPod podControl:(PSCPodControl *)podControl __attribute__((swift_name("handlePodAlertAndAlarms(managedPod:observedPod:podControl:)")));
- (void)doInitThreadHandlerBasal __attribute__((swift_name("doInitThreadHandlerBasal()")));
- (void)doInitThreadHandlerBolus __attribute__((swift_name("doInitThreadHandlerBolus()")));
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onStartCommandAction:(NSString * _Nullable)action commandExtra:(PSCKotlinByteArray * _Nullable)commandExtra pod:(PSCSimulatedPod *)pod __attribute__((swift_name("onStartCommand(action:commandExtra:pod:)")));
- (void)quitThreadBasalSafely __attribute__((swift_name("quitThreadBasalSafely()")));
- (void)quitThreadBolusSafely __attribute__((swift_name("quitThreadBolusSafely()")));
- (void)releaseWakeLock __attribute__((swift_name("releaseWakeLock()")));
- (void)setupWakeLocks __attribute__((swift_name("setupWakeLocks()")));
- (void)startBasalPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("startBasal(pscConfiguration:)")));
- (void)startBolusPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("startBolus(pscConfiguration:)")));
- (void)stopBasalBolusPscConfiguration:(PSCPscConfiguration *)pscConfiguration channels:(int8_t)channels __attribute__((swift_name("stopBasalBolus(pscConfiguration:channels:)")));
- (void)stopProgramPscConfiguration:(PSCPscConfiguration *)pscConfiguration command:(PSCKotlinByteArray *)command __attribute__((swift_name("stopProgram(pscConfiguration:command:)")));
- (void)wakeupBasalThread __attribute__((swift_name("wakeupBasalThread()")));
- (void)wakeupBolusThread __attribute__((swift_name("wakeupBolusThread()")));
@property PSCBasalRunnable * _Nullable basalDeliveryRunnable __attribute__((swift_name("basalDeliveryRunnable")));
@property PSCBolusRunnable * _Nullable bolusDeliveryRunnable __attribute__((swift_name("bolusDeliveryRunnable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinDeliveryService.Companion")))
@interface PSCInsulinDeliveryServiceCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)sendCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("send(command:)")));
- (void)startContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("start(contextArgument:)")));
- (void)stopContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("stop(contextArgument:)")));
@property (readonly) int64_t ACQUIRE_MS __attribute__((swift_name("ACQUIRE_MS")));
@property (readonly) NSString *COMMAND_EXTRA __attribute__((swift_name("COMMAND_EXTRA")));
@property (readonly) NSString *COMPLETE_BOLUS __attribute__((swift_name("COMPLETE_BOLUS")));
@property (readonly) int32_t COMPLETE_BOLUS_REQ_CODE __attribute__((swift_name("COMPLETE_BOLUS_REQ_CODE")));
@property (readonly) NSString *COMPLETE_EXT_BOLUS __attribute__((swift_name("COMPLETE_EXT_BOLUS")));
@property (readonly) int32_t COMPLETE_EXT_BOLUS_REQ_CODE __attribute__((swift_name("COMPLETE_EXT_BOLUS_REQ_CODE")));
@property (readonly) NSString *COMPLETE_TEMP_BASAL __attribute__((swift_name("COMPLETE_TEMP_BASAL")));
@property (readonly) int32_t COMPLETE_TEMP_BASAL_REQ_CODE __attribute__((swift_name("COMPLETE_TEMP_BASAL_REQ_CODE")));
@property (readonly) NSString *EXECUTE_COMMAND __attribute__((swift_name("EXECUTE_COMMAND")));
@property (readonly) NSString *START_INSULIN_DELIVERY_SERVICE __attribute__((swift_name("START_INSULIN_DELIVERY_SERVICE")));
@property (readonly) NSString *STOP_INSULIN_DELIVERY_SERVICE __attribute__((swift_name("STOP_INSULIN_DELIVERY_SERVICE")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("IOSTimerTaskExecutor")))
@interface PSCIOSTimerTaskExecutor : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)appDidBecomeActive __attribute__((swift_name("appDidBecomeActive()")));
- (void)appDidEnterBackground __attribute__((swift_name("appDidEnterBackground()")));
- (void)appWillResignActive __attribute__((swift_name("appWillResignActive()")));
- (void)executeTask:(PSCIOSTimerTask *)task __attribute__((swift_name("execute(task:)")));
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onTaskExecutedTask:(PSCIOSTimerTask *)task __attribute__((swift_name("onTaskExecuted(task:)")));
- (BOOL)onTaskExecutingTask:(PSCIOSTimerTask *)task __attribute__((swift_name("onTaskExecuting(task:)")));
- (void)stopAction:(NSString *)action __attribute__((swift_name("stop(action:)")));
- (void)stopSelf __attribute__((swift_name("stopSelf()")));
@end;

__attribute__((swift_name("InsulinDeliveryServiceKMM")))
@interface PSCInsulinDeliveryServiceKMM : PSCIOSTimerTaskExecutor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)appDidBecomeActive __attribute__((swift_name("appDidBecomeActive()")));
- (void)appWillResignActive __attribute__((swift_name("appWillResignActive()")));
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onTaskExecutedTask:(PSCIOSTimerTask *)task __attribute__((swift_name("onTaskExecuted(task:)")));
- (void)startPodStateObserver __attribute__((swift_name("startPodStateObserver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinDeliveryServiceKMM.Companion")))
@interface PSCInsulinDeliveryServiceKMMCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)sendCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("send(command:)")));
- (void)startContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("start(contextArgument:)")));
- (void)stopContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("stop(contextArgument:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AidLoopStateEnum")))
@interface PSCAidLoopStateEnum : PSCKotlinEnum<PSCAidLoopStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCAidLoopStateEnum *invalid __attribute__((swift_name("invalid")));
@property (class, readonly) PSCAidLoopStateEnum *open __attribute__((swift_name("open")));
@property (class, readonly) PSCAidLoopStateEnum *close __attribute__((swift_name("close")));
+ (PSCKotlinArray<PSCAidLoopStateEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AidLoopStateEnum.Companion")))
@interface PSCAidLoopStateEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCAidLoopStateEnum *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlarmCode")))
@interface PSCAlarmCode : PSCKotlinEnum<PSCAlarmCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCAlarmCode *alarmNone __attribute__((swift_name("alarmNone")));
@property (class, readonly) PSCAlarmCode *alarmPwFlashErase __attribute__((swift_name("alarmPwFlashErase")));
@property (class, readonly) PSCAlarmCode *alarmPwFlashWrite __attribute__((swift_name("alarmPwFlashWrite")));
@property (class, readonly) PSCAlarmCode *alarmBasalCksum __attribute__((swift_name("alarmBasalCksum")));
@property (class, readonly) PSCAlarmCode *alarmBasalPpulse __attribute__((swift_name("alarmBasalPpulse")));
@property (class, readonly) PSCAlarmCode *alarmBasalStep __attribute__((swift_name("alarmBasalStep")));
@property (class, readonly) PSCAlarmCode *alarmAutoWakeupTimeout __attribute__((swift_name("alarmAutoWakeupTimeout")));
@property (class, readonly) PSCAlarmCode *alarmWireOverdriven __attribute__((swift_name("alarmWireOverdriven")));
@property (class, readonly) PSCAlarmCode *alarmBeepRepInvalidIndex __attribute__((swift_name("alarmBeepRepInvalidIndex")));
@property (class, readonly) PSCAlarmCode *alarmInvalidRepPattern __attribute__((swift_name("alarmInvalidRepPattern")));
@property (class, readonly) PSCAlarmCode *alarmTempBasalStep __attribute__((swift_name("alarmTempBasalStep")));
@property (class, readonly) PSCAlarmCode *alarmTempBasalCksum __attribute__((swift_name("alarmTempBasalCksum")));
@property (class, readonly) PSCAlarmCode *alarmBolusOverflow __attribute__((swift_name("alarmBolusOverflow")));
@property (class, readonly) PSCAlarmCode *alarmCopReset __attribute__((swift_name("alarmCopReset")));
@property (class, readonly) PSCAlarmCode *alarmIlopReset __attribute__((swift_name("alarmIlopReset")));
@property (class, readonly) PSCAlarmCode *alarmIladReset __attribute__((swift_name("alarmIladReset")));
@property (class, readonly) PSCAlarmCode *alarmSawcopReset __attribute__((swift_name("alarmSawcopReset")));
@property (class, readonly) PSCAlarmCode *alarmBolusStep __attribute__((swift_name("alarmBolusStep")));
@property (class, readonly) PSCAlarmCode *alarmLvdReset __attribute__((swift_name("alarmLvdReset")));
@property (class, readonly) PSCAlarmCode *alarmInvalidRfMsgLength __attribute__((swift_name("alarmInvalidRfMsgLength")));
@property (class, readonly) PSCAlarmCode *alarmOccluded __attribute__((swift_name("alarmOccluded")));
@property (class, readonly) PSCAlarmCode *alarmBolusprogChksum __attribute__((swift_name("alarmBolusprogChksum")));
@property (class, readonly) PSCAlarmCode *alarmBolusLog __attribute__((swift_name("alarmBolusLog")));
@property (class, readonly) PSCAlarmCode *alarmCriticalVar __attribute__((swift_name("alarmCriticalVar")));
@property (class, readonly) PSCAlarmCode *alarmEmptyReservoir __attribute__((swift_name("alarmEmptyReservoir")));
@property (class, readonly) PSCAlarmCode *alarmLoaderr __attribute__((swift_name("alarmLoaderr")));
@property (class, readonly) PSCAlarmCode *alarmPsaFailure __attribute__((swift_name("alarmPsaFailure")));
@property (class, readonly) PSCAlarmCode *alarmTickcntNotCleared __attribute__((swift_name("alarmTickcntNotCleared")));
@property (class, readonly) PSCAlarmCode *alarmPumpExpired __attribute__((swift_name("alarmPumpExpired")));
@property (class, readonly) PSCAlarmCode *alarmComdBitNotSet __attribute__((swift_name("alarmComdBitNotSet")));
@property (class, readonly) PSCAlarmCode *alarmInvalidComdSet __attribute__((swift_name("alarmInvalidComdSet")));
@property (class, readonly) PSCAlarmCode *alarmAlertsArrayCksm __attribute__((swift_name("alarmAlertsArrayCksm")));
@property (class, readonly) PSCAlarmCode *alarmUnitTest __attribute__((swift_name("alarmUnitTest")));
@property (class, readonly) PSCAlarmCode *alarmTickTimeError __attribute__((swift_name("alarmTickTimeError")));
@property (class, readonly) PSCAlarmCode *alarmCriticalHazard __attribute__((swift_name("alarmCriticalHazard")));
@property (class, readonly) PSCAlarmCode *alarmPiezoFreq __attribute__((swift_name("alarmPiezoFreq")));
@property (class, readonly) PSCAlarmCode *alarmTickcntErrorRtc __attribute__((swift_name("alarmTickcntErrorRtc")));
@property (class, readonly) PSCAlarmCode *alarmTickFailure __attribute__((swift_name("alarmTickFailure")));
@property (class, readonly) PSCAlarmCode *alarmInvalid __attribute__((swift_name("alarmInvalid")));
@property (class, readonly) PSCAlarmCode *alarmLumpAlertProgram __attribute__((swift_name("alarmLumpAlertProgram")));
@property (class, readonly) PSCAlarmCode *alarmInvalidPassCode __attribute__((swift_name("alarmInvalidPassCode")));
@property (class, readonly) PSCAlarmCode *alarmAlert0 __attribute__((swift_name("alarmAlert0")));
@property (class, readonly) PSCAlarmCode *alarmAlert1 __attribute__((swift_name("alarmAlert1")));
@property (class, readonly) PSCAlarmCode *alarmAlert2 __attribute__((swift_name("alarmAlert2")));
@property (class, readonly) PSCAlarmCode *alarmAlert3 __attribute__((swift_name("alarmAlert3")));
@property (class, readonly) PSCAlarmCode *alarmAlert4 __attribute__((swift_name("alarmAlert4")));
@property (class, readonly) PSCAlarmCode *alarmAlert5 __attribute__((swift_name("alarmAlert5")));
@property (class, readonly) PSCAlarmCode *alarmAlert6 __attribute__((swift_name("alarmAlert6")));
@property (class, readonly) PSCAlarmCode *alarmAlert7 __attribute__((swift_name("alarmAlert7")));
@property (class, readonly) PSCAlarmCode *alarmIllegalPumpState __attribute__((swift_name("alarmIllegalPumpState")));
@property (class, readonly) PSCAlarmCode *alarmCopTestFailure __attribute__((swift_name("alarmCopTestFailure")));
@property (class, readonly) PSCAlarmCode *alarmMctf __attribute__((swift_name("alarmMctf")));
@property (class, readonly) PSCAlarmCode *alarmIllegalReset __attribute__((swift_name("alarmIllegalReset")));
@property (class, readonly) PSCAlarmCode *alarmVetoNotSet __attribute__((swift_name("alarmVetoNotSet")));
@property (class, readonly) PSCAlarmCode *alarmIllegalPinReset __attribute__((swift_name("alarmIllegalPinReset")));
@property (class, readonly) PSCAlarmCode *alarmInvalidBeepPattern __attribute__((swift_name("alarmInvalidBeepPattern")));
@property (class, readonly) PSCAlarmCode *alarmWireStateMachine __attribute__((swift_name("alarmWireStateMachine")));
@property (class, readonly) PSCAlarmCode *alarmVetoTestDefault __attribute__((swift_name("alarmVetoTestDefault")));
@property (class, readonly) PSCAlarmCode *alarmAlertInvalidIndex __attribute__((swift_name("alarmAlertInvalidIndex")));
@property (class, readonly) PSCAlarmCode *alarmSawcopTestFail __attribute__((swift_name("alarmSawcopTestFail")));
@property (class, readonly) PSCAlarmCode *alarmMcucopTestFail __attribute__((swift_name("alarmMcucopTestFail")));
@property (class, readonly) PSCAlarmCode *alarmStepSensorShorted __attribute__((swift_name("alarmStepSensorShorted")));
@property (class, readonly) PSCAlarmCode *alarmFlashFailure __attribute__((swift_name("alarmFlashFailure")));
@property (class, readonly) PSCAlarmCode *alarmSpare63 __attribute__((swift_name("alarmSpare63")));
@property (class, readonly) PSCAlarmCode *alarmSsOpenCntExceeded __attribute__((swift_name("alarmSsOpenCntExceeded")));
@property (class, readonly) PSCAlarmCode *alarmSsExcessiveSummed __attribute__((swift_name("alarmSsExcessiveSummed")));
@property (class, readonly) PSCAlarmCode *alarmSsMinPulseTransition __attribute__((swift_name("alarmSsMinPulseTransition")));
@property (class, readonly) PSCAlarmCode *alarmSsDefault __attribute__((swift_name("alarmSsDefault")));
@property (class, readonly) PSCAlarmCode *alarmOpenWire1 __attribute__((swift_name("alarmOpenWire1")));
@property (class, readonly) PSCAlarmCode *alarmOpenWire2 __attribute__((swift_name("alarmOpenWire2")));
@property (class, readonly) PSCAlarmCode *alarmLoaderrFailure __attribute__((swift_name("alarmLoaderrFailure")));
@property (class, readonly) PSCAlarmCode *alarmSawVetoFailure __attribute__((swift_name("alarmSawVetoFailure")));
@property (class, readonly) PSCAlarmCode *alarmBadRfmClock __attribute__((swift_name("alarmBadRfmClock")));
@property (class, readonly) PSCAlarmCode *alarmBadTickHigh __attribute__((swift_name("alarmBadTickHigh")));
@property (class, readonly) PSCAlarmCode *alarmBadTickPeriod __attribute__((swift_name("alarmBadTickPeriod")));
@property (class, readonly) PSCAlarmCode *alarmBadTrimValue __attribute__((swift_name("alarmBadTrimValue")));
@property (class, readonly) PSCAlarmCode *alarmBadBusClock __attribute__((swift_name("alarmBadBusClock")));
@property (class, readonly) PSCAlarmCode *alarmBadCalMode __attribute__((swift_name("alarmBadCalMode")));
@property (class, readonly) PSCAlarmCode *alarmSawTrimError __attribute__((swift_name("alarmSawTrimError")));
@property (class, readonly) PSCAlarmCode *alarmRfmCrystalError __attribute__((swift_name("alarmRfmCrystalError")));
@property (class, readonly) PSCAlarmCode *alarmCalstTimeout __attribute__((swift_name("alarmCalstTimeout")));
@property (class, readonly) PSCAlarmCode *alarmTickcntError __attribute__((swift_name("alarmTickcntError")));
@property (class, readonly) PSCAlarmCode *alarmBadRfmXtalStart __attribute__((swift_name("alarmBadRfmXtalStart")));
@property (class, readonly) PSCAlarmCode *alarmBadRxSensitivity __attribute__((swift_name("alarmBadRxSensitivity")));
@property (class, readonly) PSCAlarmCode *alarmBadTxPktSize __attribute__((swift_name("alarmBadTxPktSize")));
@property (class, readonly) PSCAlarmCode *alarmTickLowPhaseExceeded __attribute__((swift_name("alarmTickLowPhaseExceeded")));
@property (class, readonly) PSCAlarmCode *alarmTickHighPhaseExceeded __attribute__((swift_name("alarmTickHighPhaseExceeded")));
@property (class, readonly) PSCAlarmCode *alarmOcclCritvarFail __attribute__((swift_name("alarmOcclCritvarFail")));
@property (class, readonly) PSCAlarmCode *alarmOcclParam __attribute__((swift_name("alarmOcclParam")));
@property (class, readonly) PSCAlarmCode *alarmProgOcclFail __attribute__((swift_name("alarmProgOcclFail")));
@property (class, readonly) PSCAlarmCode *alarmPwToHighForOcclDet __attribute__((swift_name("alarmPwToHighForOcclDet")));
@property (class, readonly) PSCAlarmCode *alarmOcclCsum __attribute__((swift_name("alarmOcclCsum")));
@property (class, readonly) PSCAlarmCode *alarmPrimeOpenCntToLow __attribute__((swift_name("alarmPrimeOpenCntToLow")));
@property (class, readonly) PSCAlarmCode *alarmBadRfCdthr __attribute__((swift_name("alarmBadRfCdthr")));
@property (class, readonly) PSCAlarmCode *alarmFlashNotSecure __attribute__((swift_name("alarmFlashNotSecure")));
@property (class, readonly) PSCAlarmCode *alarmWireTestOpenGround __attribute__((swift_name("alarmWireTestOpenGround")));
@property (class, readonly) PSCAlarmCode *alarmOcclStartup1 __attribute__((swift_name("alarmOcclStartup1")));
@property (class, readonly) PSCAlarmCode *alarmOcclStartup2 __attribute__((swift_name("alarmOcclStartup2")));
@property (class, readonly) PSCAlarmCode *alarmOcclExcessTimeouts1 __attribute__((swift_name("alarmOcclExcessTimeouts1")));
@property (class, readonly) PSCAlarmCode *alarmSpare99 __attribute__((swift_name("alarmSpare99")));
@property (class, readonly) PSCAlarmCode *alarmSpare100 __attribute__((swift_name("alarmSpare100")));
@property (class, readonly) PSCAlarmCode *alarmSpare101 __attribute__((swift_name("alarmSpare101")));
@property (class, readonly) PSCAlarmCode *alarmOcclExcessTimeouts2 __attribute__((swift_name("alarmOcclExcessTimeouts2")));
@property (class, readonly) PSCAlarmCode *alarmOcclExcessTimeouts3 __attribute__((swift_name("alarmOcclExcessTimeouts3")));
@property (class, readonly) PSCAlarmCode *alarmOcclNoisyPulseWidths __attribute__((swift_name("alarmOcclNoisyPulseWidths")));
@property (class, readonly) PSCAlarmCode *alarmOcclAtBolusEnd __attribute__((swift_name("alarmOcclAtBolusEnd")));
@property (class, readonly) PSCAlarmCode *alarmOcclAboveThreshold __attribute__((swift_name("alarmOcclAboveThreshold")));
@property (class, readonly) PSCAlarmCode *alarmBasalUnderinfusion __attribute__((swift_name("alarmBasalUnderinfusion")));
@property (class, readonly) PSCAlarmCode *alarmBasalOverinfusion __attribute__((swift_name("alarmBasalOverinfusion")));
@property (class, readonly) PSCAlarmCode *alarmTempUnderinfusion __attribute__((swift_name("alarmTempUnderinfusion")));
@property (class, readonly) PSCAlarmCode *alarmTempOverinfusion __attribute__((swift_name("alarmTempOverinfusion")));
@property (class, readonly) PSCAlarmCode *alarmBolusUnderinfusion __attribute__((swift_name("alarmBolusUnderinfusion")));
@property (class, readonly) PSCAlarmCode *alarmBolusOverinfusion __attribute__((swift_name("alarmBolusOverinfusion")));
@property (class, readonly) PSCAlarmCode *alarmBasalOverinfusionPulse __attribute__((swift_name("alarmBasalOverinfusionPulse")));
@property (class, readonly) PSCAlarmCode *alarmTempOverinfusionPulse __attribute__((swift_name("alarmTempOverinfusionPulse")));
@property (class, readonly) PSCAlarmCode *alarmBolusOverinfusionPulse __attribute__((swift_name("alarmBolusOverinfusionPulse")));
@property (class, readonly) PSCAlarmCode *alarmImmbolusUnderinfusionPulse __attribute__((swift_name("alarmImmbolusUnderinfusionPulse")));
@property (class, readonly) PSCAlarmCode *alarmExtbolusOverinfusionPulse __attribute__((swift_name("alarmExtbolusOverinfusionPulse")));
@property (class, readonly) PSCAlarmCode *alarmProgramCsum __attribute__((swift_name("alarmProgramCsum")));
@property (class, readonly) PSCAlarmCode *alarmUnused140 __attribute__((swift_name("alarmUnused140")));
@property (class, readonly) PSCAlarmCode *alarmUnrecognizedPulse __attribute__((swift_name("alarmUnrecognizedPulse")));
@property (class, readonly) PSCAlarmCode *alarmSyncWithoutTempActive __attribute__((swift_name("alarmSyncWithoutTempActive")));
@property (class, readonly) PSCAlarmCode *alarmInterlockLoad __attribute__((swift_name("alarmInterlockLoad")));
@property (class, readonly) PSCAlarmCode *alarmIllegalChanParam __attribute__((swift_name("alarmIllegalChanParam")));
@property (class, readonly) PSCAlarmCode *alarmBasalPulseChanInactive __attribute__((swift_name("alarmBasalPulseChanInactive")));
@property (class, readonly) PSCAlarmCode *alarmTempPulseChanInactive __attribute__((swift_name("alarmTempPulseChanInactive")));
@property (class, readonly) PSCAlarmCode *alarmBolusPulseChanInactive __attribute__((swift_name("alarmBolusPulseChanInactive")));
@property (class, readonly) PSCAlarmCode *alarmIntSemaphoreNotSet __attribute__((swift_name("alarmIntSemaphoreNotSet")));
@property (class, readonly) PSCAlarmCode *alarmIllegalInterlockChan __attribute__((swift_name("alarmIllegalInterlockChan")));
@property (class, readonly) PSCAlarmCode *alarmTerminateBolus __attribute__((swift_name("alarmTerminateBolus")));
@property (class, readonly) PSCAlarmCode *alarmOpenTransitionsCount __attribute__((swift_name("alarmOpenTransitionsCount")));
@property (class, readonly) PSCAlarmCode *alarmSyncWithoutClosedLoop __attribute__((swift_name("alarmSyncWithoutClosedLoop")));
@property (class, readonly) PSCAlarmCode *alarmQnStatusMismatch __attribute__((swift_name("alarmQnStatusMismatch")));
@property (class, readonly) PSCAlarmCode *alarmApLoopMismatch __attribute__((swift_name("alarmApLoopMismatch")));
@property (class, readonly) PSCAlarmCode *alarmBleTo __attribute__((swift_name("alarmBleTo")));
@property (class, readonly) PSCAlarmCode *alarmBleInitiated __attribute__((swift_name("alarmBleInitiated")));
@property (class, readonly) PSCAlarmCode *alarmBleUnkAlarm __attribute__((swift_name("alarmBleUnkAlarm")));
@property (class, readonly) PSCAlarmCode *alarmUnused163 __attribute__((swift_name("alarmUnused163")));
@property (class, readonly) PSCAlarmCode *alarmUnused164 __attribute__((swift_name("alarmUnused164")));
@property (class, readonly) PSCAlarmCode *alarmUnused165 __attribute__((swift_name("alarmUnused165")));
@property (class, readonly) PSCAlarmCode *alarmBleIaas __attribute__((swift_name("alarmBleIaas")));
@property (class, readonly) PSCAlarmCode *alarmUnused167 __attribute__((swift_name("alarmUnused167")));
@property (class, readonly) PSCAlarmCode *alarmCrcFailure __attribute__((swift_name("alarmCrcFailure")));
@property (class, readonly) PSCAlarmCode *alarmBleWdPingTimeout __attribute__((swift_name("alarmBleWdPingTimeout")));
@property (class, readonly) PSCAlarmCode *alarmBleExcessiveResets __attribute__((swift_name("alarmBleExcessiveResets")));
@property (class, readonly) PSCAlarmCode *alarmBleNakError __attribute__((swift_name("alarmBleNakError")));
@property (class, readonly) PSCAlarmCode *alarmBleReqHighTimeout __attribute__((swift_name("alarmBleReqHighTimeout")));
@property (class, readonly) PSCAlarmCode *alarmBleUnknownResp __attribute__((swift_name("alarmBleUnknownResp")));
@property (class, readonly) PSCAlarmCode *alarmBleUnused174 __attribute__((swift_name("alarmBleUnused174")));
@property (class, readonly) PSCAlarmCode *alarmBleReqStuckHigh __attribute__((swift_name("alarmBleReqStuckHigh")));
@property (class, readonly) PSCAlarmCode *alarmBleStateMachine1 __attribute__((swift_name("alarmBleStateMachine1")));
@property (class, readonly) PSCAlarmCode *alarmBleStateMachine2 __attribute__((swift_name("alarmBleStateMachine2")));
@property (class, readonly) PSCAlarmCode *alarmBleUnused179 __attribute__((swift_name("alarmBleUnused179")));
@property (class, readonly) PSCAlarmCode *alarmBleArbLost __attribute__((swift_name("alarmBleArbLost")));
@property (class, readonly) PSCAlarmCode *alarmBolusExtendedNotAllowed __attribute__((swift_name("alarmBolusExtendedNotAllowed")));
@property (class, readonly) PSCAlarmCode *alarmAgcInOpenLoop __attribute__((swift_name("alarmAgcInOpenLoop")));
@property (class, readonly) PSCAlarmCode *alarmAgcBolusExtendedNotAllowed __attribute__((swift_name("alarmAgcBolusExtendedNotAllowed")));
@property (class, readonly) PSCAlarmCode *alarmAgcPulsesExceeded __attribute__((swift_name("alarmAgcPulsesExceeded")));
@property (class, readonly) PSCAlarmCode *alarmAgcBolusAlreadyActive __attribute__((swift_name("alarmAgcBolusAlreadyActive")));
@property (class, readonly) PSCAlarmCode *alarmAgcBolusTooEarly __attribute__((swift_name("alarmAgcBolusTooEarly")));
@property (class, readonly) PSCAlarmCode *alarmPdmImmedBolusDoesntAddUp __attribute__((swift_name("alarmPdmImmedBolusDoesntAddUp")));
@property (class, readonly) PSCAlarmCode *alarmAgcMealCorrBolusNotZero __attribute__((swift_name("alarmAgcMealCorrBolusNotZero")));
@property (class, readonly) PSCAlarmCode *alarmTempBasalNotAllowed __attribute__((swift_name("alarmTempBasalNotAllowed")));
@property (class, readonly) PSCAlarmCode *alarmBasalNotAllowed __attribute__((swift_name("alarmBasalNotAllowed")));
@property (class, readonly) PSCAlarmCode *alarmAgcBolusTooLate __attribute__((swift_name("alarmAgcBolusTooLate")));
@property (class, readonly) PSCAlarmCode *alarmBleEr48DualNack __attribute__((swift_name("alarmBleEr48DualNack")));
@property (class, readonly) PSCAlarmCode *alarmBleQnExceedMaxRetry __attribute__((swift_name("alarmBleQnExceedMaxRetry")));
@property (class, readonly) PSCAlarmCode *alarmBleQnCritVarFail __attribute__((swift_name("alarmBleQnCritVarFail")));
@property (class, readonly) PSCAlarmCode *alarmBleQnOptIntvlInvalid __attribute__((swift_name("alarmBleQnOptIntvlInvalid")));
@property (class, readonly) PSCAlarmCode *alarmBleQnCgmUtcMismatch __attribute__((swift_name("alarmBleQnCgmUtcMismatch")));
@property (class, readonly) PSCAlarmCode *alarmBleQnCgmTxidNotAllowed __attribute__((swift_name("alarmBleQnCgmTxidNotAllowed")));
@property (class, readonly) PSCAlarmCode *alarmBleUnused __attribute__((swift_name("alarmBleUnused")));
@property (class, readonly) PSCAlarmCode *alarmBleQnAlgNotRun __attribute__((swift_name("alarmBleQnAlgNotRun")));
@property (class, readonly) PSCAlarmCode *alarmBleQnHypoInOpenLoop __attribute__((swift_name("alarmBleQnHypoInOpenLoop")));
@property (class, readonly) PSCAlarmCode *alarmBleQnAlgSetupFail __attribute__((swift_name("alarmBleQnAlgSetupFail")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcPotentialDivZero __attribute__((swift_name("alarmBleAgcPotentialDivZero")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidInputParam __attribute__((swift_name("alarmBleAgcInvalidInputParam")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidParam __attribute__((swift_name("alarmBleAgcInvalidParam")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcStateVectorParam __attribute__((swift_name("alarmBleAgcStateVectorParam")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidAlgorithmStateParam __attribute__((swift_name("alarmBleAgcInvalidAlgorithmStateParam")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidHypoSetting __attribute__((swift_name("alarmBleAgcInvalidHypoSetting")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcOutputOutOfBounds __attribute__((swift_name("alarmBleAgcOutputOutOfBounds")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidFirstrunInInitState __attribute__((swift_name("alarmBleAgcInvalidFirstrunInInitState")));
@property (class, readonly) PSCAlarmCode *alarmBleAgcInvalidOffset __attribute__((swift_name("alarmBleAgcInvalidOffset")));
@property (class, readonly) PSCAlarmCode *alarmUnknown __attribute__((swift_name("alarmUnknown")));
+ (PSCKotlinArray<PSCAlarmCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@property (readonly) int8_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlarmCode.Companion")))
@interface PSCAlarmCodeCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCAlarmCode *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertType")))
@interface PSCAlertType : PSCKotlinEnum<PSCAlertType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCAlertType *unknownAlert __attribute__((swift_name("unknownAlert")));
@property (class, readonly) PSCAlertType *statusAlert __attribute__((swift_name("statusAlert")));
@property (class, readonly) PSCAlertType *alarmAlertCode __attribute__((swift_name("alarmAlertCode")));
+ (PSCKotlinArray<PSCAlertType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusState")))
@interface PSCBolusState : PSCKotlinEnum<PSCBolusState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCBolusState *notRunning __attribute__((swift_name("notRunning")));
@property (class, readonly) PSCBolusState *bolus __attribute__((swift_name("bolus")));
@property (class, readonly) PSCBolusState *startExtBolus __attribute__((swift_name("startExtBolus")));
@property (class, readonly) PSCBolusState *extBolus __attribute__((swift_name("extBolus")));
@property (class, readonly) PSCBolusState *bolusEnd __attribute__((swift_name("bolusEnd")));
+ (PSCKotlinArray<PSCBolusState *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusState.Companion")))
@interface PSCBolusStateCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCBolusState *)fromValueState:(int32_t)state __attribute__((swift_name("fromValue(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommLossErrorEnum")))
@interface PSCCommLossErrorEnum : PSCKotlinEnum<PSCCommLossErrorEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCommLossErrorEnum *noError __attribute__((swift_name("noError")));
@property (class, readonly) PSCCommLossErrorEnum *connectionError __attribute__((swift_name("connectionError")));
@property (class, readonly) PSCCommLossErrorEnum *stopProgram __attribute__((swift_name("stopProgram")));
@property (class, readonly) PSCCommLossErrorEnum *commLossAfter __attribute__((swift_name("commLossAfter")));
@property (class, readonly) PSCCommLossErrorEnum *commLossBefore __attribute__((swift_name("commLossBefore")));
+ (PSCKotlinArray<PSCCommLossErrorEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommLossErrorEnum.Companion")))
@interface PSCCommLossErrorEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCommLossErrorEnum *)fromValueState:(int32_t)state __attribute__((swift_name("fromValue(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandOpcodes")))
@interface PSCCommandOpcodes : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commandOpcodes __attribute__((swift_name("init()")));
@property (readonly) int8_t ACK_RESPONSE __attribute__((swift_name("ACK_RESPONSE")));
@property (readonly) NSString *AID_LOOP_STATE_RESP __attribute__((swift_name("AID_LOOP_STATE_RESP")));
@property (readonly) NSString *AID_STATUS_RESP __attribute__((swift_name("AID_STATUS_RESP")));
@property (readonly) NSString *ALGO_INSULIN_HISTORY_RESP __attribute__((swift_name("ALGO_INSULIN_HISTORY_RESP")));
@property (readonly) NSString *ALGO_IOB_RESP __attribute__((swift_name("ALGO_IOB_RESP")));
@property (readonly) int8_t CONFIGURE_OCCLUSION __attribute__((swift_name("CONFIGURE_OCCLUSION")));
@property (readonly) NSString *CORRECTION_FACTOR_PROFILE_RESP __attribute__((swift_name("CORRECTION_FACTOR_PROFILE_RESP")));
@property (readonly) int8_t DEACTIVATE __attribute__((swift_name("DEACTIVATE")));
@property (readonly) NSString *DIA_RESP __attribute__((swift_name("DIA_RESP")));
@property (readonly) NSString *EGV_THRESHOLD_RESP __attribute__((swift_name("EGV_THRESHOLD_RESP")));
@property (readonly) int8_t GENERAL_STATUS_RESP __attribute__((swift_name("GENERAL_STATUS_RESP")));
@property (readonly) NSString *GET_AID_LOOP_STATE __attribute__((swift_name("GET_AID_LOOP_STATE")));
@property (readonly) NSString *GET_AID_STATUS __attribute__((swift_name("GET_AID_STATUS")));
@property (readonly) NSString *GET_ALGO_INSULIN_HISTORY __attribute__((swift_name("GET_ALGO_INSULIN_HISTORY")));
@property (readonly) NSString *GET_ALGO_IOB __attribute__((swift_name("GET_ALGO_IOB")));
@property (readonly) NSString *GET_CORRECTION_FACTOR_PROFILE __attribute__((swift_name("GET_CORRECTION_FACTOR_PROFILE")));
@property (readonly) NSString *GET_DIA __attribute__((swift_name("GET_DIA")));
@property (readonly) NSString *GET_EGV_THRESHOLD __attribute__((swift_name("GET_EGV_THRESHOLD")));
@property (readonly) NSString *GET_HYPO_PROTECT __attribute__((swift_name("GET_HYPO_PROTECT")));
@property (readonly) NSString *GET_INSULIN_HISTORY_LEN __attribute__((swift_name("GET_INSULIN_HISTORY_LEN")));
@property (readonly) NSString *GET_LEGACY_COMMAND_RESP __attribute__((swift_name("GET_LEGACY_COMMAND_RESP")));
@property (readonly) NSString *GET_PATIENT_HISTORY_LOGS __attribute__((swift_name("GET_PATIENT_HISTORY_LOGS")));
@property (readonly) NSString *GET_PATIENT_HISTORY_LOG_ENABLED __attribute__((swift_name("GET_PATIENT_HISTORY_LOG_ENABLED")));
@property (readonly) int8_t GET_STATUS __attribute__((swift_name("GET_STATUS")));
@property (readonly) NSString *GET_TARGET_BG_PROFILE __attribute__((swift_name("GET_TARGET_BG_PROFILE")));
@property (readonly) NSString *GET_TDI __attribute__((swift_name("GET_TDI")));
@property (readonly) NSString *GET_TXID_COMMAND __attribute__((swift_name("GET_TXID_COMMAND")));
@property (readonly) NSString *GET_UTC_TIME __attribute__((swift_name("GET_UTC_TIME")));
@property (readonly) int8_t GET_VERSION __attribute__((swift_name("GET_VERSION")));
@property (readonly) NSString *HYPO_PROTECT_RESP __attribute__((swift_name("HYPO_PROTECT_RESP")));
@property (readonly) NSString *INSULIN_HISTORY_LEN_RESP __attribute__((swift_name("INSULIN_HISTORY_LEN_RESP")));
@property (readonly) int8_t INTERLOCK __attribute__((swift_name("INTERLOCK")));
@property (readonly) NSString *LEGACY_COMMAND_RESP __attribute__((swift_name("LEGACY_COMMAND_RESP")));
@property (readonly) int8_t NACK_RESPONSE __attribute__((swift_name("NACK_RESPONSE")));
@property (readonly) NSString *PATIENT_HISTORY_LOGS_RESP __attribute__((swift_name("PATIENT_HISTORY_LOGS_RESP")));
@property (readonly) NSString *PATIENT_HISTORY_LOG_ENABLED_RESP __attribute__((swift_name("PATIENT_HISTORY_LOG_ENABLED_RESP")));
@property (readonly) int8_t PROGRAM_ALERT __attribute__((swift_name("PROGRAM_ALERT")));
@property (readonly) int8_t PROGRAM_BASAL __attribute__((swift_name("PROGRAM_BASAL")));
@property (readonly) int8_t PROGRAM_BEEP __attribute__((swift_name("PROGRAM_BEEP")));
@property (readonly) int8_t PROGRAM_BOLUS __attribute__((swift_name("PROGRAM_BOLUS")));
@property (readonly) int8_t PROGRAM_OCCLUSION __attribute__((swift_name("PROGRAM_OCCLUSION")));
@property (readonly) int8_t PROGRAM_TEMP_BASAL __attribute__((swift_name("PROGRAM_TEMP_BASAL")));
@property (readonly) NSString *RESET_PATIENT_HISTORY_BUFFER_INDEX_RESP __attribute__((swift_name("RESET_PATIENT_HISTORY_BUFFER_INDEX_RESP")));
@property (readonly) NSString *SET_AID_LOOP_STATE __attribute__((swift_name("SET_AID_LOOP_STATE")));
@property (readonly) NSString *SET_AID_STATUS __attribute__((swift_name("SET_AID_STATUS")));
@property (readonly) NSString *SET_ALGO_INSULIN_HISTORY __attribute__((swift_name("SET_ALGO_INSULIN_HISTORY")));
@property (readonly) NSString *SET_ALGO_IOB __attribute__((swift_name("SET_ALGO_IOB")));
@property (readonly) NSString *SET_CORRECTION_FACTOR_PROFILE __attribute__((swift_name("SET_CORRECTION_FACTOR_PROFILE")));
@property (readonly) NSString *SET_DIA __attribute__((swift_name("SET_DIA")));
@property (readonly) NSString *SET_EGV_THRESHOLD __attribute__((swift_name("SET_EGV_THRESHOLD")));
@property (readonly) NSString *SET_HYPO_PROTECT __attribute__((swift_name("SET_HYPO_PROTECT")));
@property (readonly) NSString *SET_INSULIN_HISTORY_LEN __attribute__((swift_name("SET_INSULIN_HISTORY_LEN")));
@property (readonly) NSString *SET_LEGACY_COMMAND __attribute__((swift_name("SET_LEGACY_COMMAND")));
@property (readonly) NSString *SET_LEGACY_COMMAND_WITH_ERROR_RETURN __attribute__((swift_name("SET_LEGACY_COMMAND_WITH_ERROR_RETURN")));
@property (readonly) NSString *SET_PATIENT_HISTORY_LOG_ENABLED __attribute__((swift_name("SET_PATIENT_HISTORY_LOG_ENABLED")));
@property (readonly) NSString *SET_RESET_PATIENT_HISTORY_BUFFER_INDEX __attribute__((swift_name("SET_RESET_PATIENT_HISTORY_BUFFER_INDEX")));
@property (readonly) NSString *SET_TARGET_BG_PROFILE __attribute__((swift_name("SET_TARGET_BG_PROFILE")));
@property (readonly) NSString *SET_TDI __attribute__((swift_name("SET_TDI")));
@property (readonly) NSString *SET_TXID_COMMAND __attribute__((swift_name("SET_TXID_COMMAND")));
@property (readonly) int8_t SET_UID __attribute__((swift_name("SET_UID")));
@property (readonly) NSString *SET_UTC_TIME __attribute__((swift_name("SET_UTC_TIME")));
@property (readonly) int8_t SILENCE __attribute__((swift_name("SILENCE")));
@property (readonly) int8_t STATUS_PAGE_0_RESP __attribute__((swift_name("STATUS_PAGE_0_RESP")));
@property (readonly) int8_t STOP_PROGRAM __attribute__((swift_name("STOP_PROGRAM")));
@property (readonly) NSString *TARGET_BG_PROFILE_RESP __attribute__((swift_name("TARGET_BG_PROFILE_RESP")));
@property (readonly) NSString *TDI_RESP __attribute__((swift_name("TDI_RESP")));
@property (readonly) NSString *TXID_COMMAND_RESP __attribute__((swift_name("TXID_COMMAND_RESP")));
@property (readonly) NSString *UTC_TIME_RESP __attribute__((swift_name("UTC_TIME_RESP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisconnectionReason")))
@interface PSCDisconnectionReason : PSCKotlinEnum<PSCDisconnectionReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCDisconnectionReason *kitRemoteDisconnect __attribute__((swift_name("kitRemoteDisconnect")));
@property (class, readonly) PSCDisconnectionReason *commLossDisconnect __attribute__((swift_name("commLossDisconnect")));
@property (class, readonly) PSCDisconnectionReason *appLocalDisconnect __attribute__((swift_name("appLocalDisconnect")));
@property (class, readonly) PSCDisconnectionReason *appFailedConnect __attribute__((swift_name("appFailedConnect")));
@property (class, readonly) PSCDisconnectionReason *secEndecryptFailedEncrypt __attribute__((swift_name("secEndecryptFailedEncrypt")));
@property (class, readonly) PSCDisconnectionReason *secEndecryptFailedDecrypt __attribute__((swift_name("secEndecryptFailedDecrypt")));
@property (class, readonly) PSCDisconnectionReason *secEapAkaFailedEstablishSession __attribute__((swift_name("secEapAkaFailedEstablishSession")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedSetPeerData __attribute__((swift_name("secPairFailedSetPeerData")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedStartPair __attribute__((swift_name("secPairFailedStartPair")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedCalcConfVal __attribute__((swift_name("secPairFailedCalcConfVal")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedParsePeerData __attribute__((swift_name("secPairFailedParsePeerData")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedInitPairModule __attribute__((swift_name("secPairFailedInitPairModule")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedGetPairData __attribute__((swift_name("secPairFailedGetPairData")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedFinishPair __attribute__((swift_name("secPairFailedFinishPair")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedVerifyConfVal __attribute__((swift_name("secPairFailedVerifyConfVal")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedUserVerificationFailed __attribute__((swift_name("secPairFailedUserVerificationFailed")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedUserVerificationTimeout __attribute__((swift_name("secPairFailedUserVerificationTimeout")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedGetLtk __attribute__((swift_name("secPairFailedGetLtk")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedCmdTimeOut __attribute__((swift_name("secPairFailedCmdTimeOut")));
@property (class, readonly) PSCDisconnectionReason *backgroundTimedOut __attribute__((swift_name("backgroundTimedOut")));
@property (class, readonly) PSCDisconnectionReason *serverCommunicationStopped __attribute__((swift_name("serverCommunicationStopped")));
@property (class, readonly) PSCDisconnectionReason *failedReadData __attribute__((swift_name("failedReadData")));
@property (class, readonly) PSCDisconnectionReason *failedSendData __attribute__((swift_name("failedSendData")));
@property (class, readonly) PSCDisconnectionReason *failedInitCModule __attribute__((swift_name("failedInitCModule")));
@property (class, readonly) PSCDisconnectionReason *centralDeviceDisconnect __attribute__((swift_name("centralDeviceDisconnect")));
@property (class, readonly) PSCDisconnectionReason *peripheralModePaused __attribute__((swift_name("peripheralModePaused")));
@property (class, readonly) PSCDisconnectionReason *failedInitTp __attribute__((swift_name("failedInitTp")));
@property (class, readonly) PSCDisconnectionReason *failedDiscoverServices __attribute__((swift_name("failedDiscoverServices")));
@property (class, readonly) PSCDisconnectionReason *noTpServiceFound __attribute__((swift_name("noTpServiceFound")));
@property (class, readonly) PSCDisconnectionReason *noTpCharsFound __attribute__((swift_name("noTpCharsFound")));
@property (class, readonly) PSCDisconnectionReason *failedDiscoverChars __attribute__((swift_name("failedDiscoverChars")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedWriteData __attribute__((swift_name("secPairFailedWriteData")));
@property (class, readonly) PSCDisconnectionReason *secEapAkaFailedWriteData __attribute__((swift_name("secEapAkaFailedWriteData")));
@property (class, readonly) PSCDisconnectionReason *cbTimeout __attribute__((swift_name("cbTimeout")));
@property (class, readonly) PSCDisconnectionReason *secPairFailedSetPreparePswd __attribute__((swift_name("secPairFailedSetPreparePswd")));
@property (class, readonly) PSCDisconnectionReason *none __attribute__((swift_name("none")));
+ (PSCKotlinArray<PSCDisconnectionReason *> *)values __attribute__((swift_name("values()")));
- (int32_t)showDisconnectionReason __attribute__((swift_name("showDisconnectionReason()")));
@property int32_t disconnectionReason __attribute__((swift_name("disconnectionReason")));
@property (readonly) int32_t reasonCode __attribute__((swift_name("reasonCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisconnectionReason.Companion")))
@interface PSCDisconnectionReasonCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCDisconnectionReason *)fromValueState:(int32_t)state __attribute__((swift_name("fromValue(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ER48ErrorCode")))
@interface PSCER48ErrorCode : PSCKotlinEnum<PSCER48ErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCER48ErrorCode *success __attribute__((swift_name("success")));
@property (class, readonly) PSCER48ErrorCode *errFlashWrite __attribute__((swift_name("errFlashWrite")));
@property (class, readonly) PSCER48ErrorCode *errFlashErase __attribute__((swift_name("errFlashErase")));
@property (class, readonly) PSCER48ErrorCode *errFlashOperation __attribute__((swift_name("errFlashOperation")));
@property (class, readonly) PSCER48ErrorCode *errFlashAddr __attribute__((swift_name("errFlashAddr")));
@property (class, readonly) PSCER48ErrorCode *errPodState __attribute__((swift_name("errPodState")));
@property (class, readonly) PSCER48ErrorCode *errCriticalVariable __attribute__((swift_name("errCriticalVariable")));
@property (class, readonly) PSCER48ErrorCode *errIllegalParam __attribute__((swift_name("errIllegalParam")));
@property (class, readonly) PSCER48ErrorCode *errBolusCriticalVar __attribute__((swift_name("errBolusCriticalVar")));
@property (class, readonly) PSCER48ErrorCode *errIntIllegalParam __attribute__((swift_name("errIntIllegalParam")));
@property (class, readonly) PSCER48ErrorCode *errIllegalCsum __attribute__((swift_name("errIllegalCsum")));
@property (class, readonly) PSCER48ErrorCode *errInvalidMsgLen __attribute__((swift_name("errInvalidMsgLen")));
@property (class, readonly) PSCER48ErrorCode *errPumpState __attribute__((swift_name("errPumpState")));
@property (class, readonly) PSCER48ErrorCode *errIllegalCmd __attribute__((swift_name("errIllegalCmd")));
@property (class, readonly) PSCER48ErrorCode *errIllegalFillState __attribute__((swift_name("errIllegalFillState")));
@property (class, readonly) PSCER48ErrorCode *errMaxReadwriteSize __attribute__((swift_name("errMaxReadwriteSize")));
@property (class, readonly) PSCER48ErrorCode *errIllegalReadAddress __attribute__((swift_name("errIllegalReadAddress")));
@property (class, readonly) PSCER48ErrorCode *errIllegalReadMemType __attribute__((swift_name("errIllegalReadMemType")));
@property (class, readonly) PSCER48ErrorCode *errInitPod __attribute__((swift_name("errInitPod")));
@property (class, readonly) PSCER48ErrorCode *errIllegalCmdState __attribute__((swift_name("errIllegalCmdState")));
@property (class, readonly) PSCER48ErrorCode *errPodInAlarm __attribute__((swift_name("errPodInAlarm")));
@property (class, readonly) PSCER48ErrorCode *errComdNotSet __attribute__((swift_name("errComdNotSet")));
@property (class, readonly) PSCER48ErrorCode *errIllegalRxSensValue __attribute__((swift_name("errIllegalRxSensValue")));
@property (class, readonly) PSCER48ErrorCode *errIllegalTxPktSize __attribute__((swift_name("errIllegalTxPktSize")));
@property (class, readonly) PSCER48ErrorCode *errOcclParamsAlreadySet __attribute__((swift_name("errOcclParamsAlreadySet")));
@property (class, readonly) PSCER48ErrorCode *errOcclParam __attribute__((swift_name("errOcclParam")));
@property (class, readonly) PSCER48ErrorCode *errIllegalCdthrValue __attribute__((swift_name("errIllegalCdthrValue")));
@property (class, readonly) PSCER48ErrorCode *errIgnoreCommand __attribute__((swift_name("errIgnoreCommand")));
@property (class, readonly) PSCER48ErrorCode *errInvalidCrc __attribute__((swift_name("errInvalidCrc")));
@property (class, readonly) PSCER48ErrorCode *errUidAlreadySet __attribute__((swift_name("errUidAlreadySet")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAccessCode __attribute__((swift_name("errIllegalAccessCode")));
@property (class, readonly) PSCER48ErrorCode *errIgnoreAgcBolus __attribute__((swift_name("errIgnoreAgcBolus")));
@property (class, readonly) PSCER48ErrorCode *errPodActivationNotready __attribute__((swift_name("errPodActivationNotready")));
@property (class, readonly) PSCER48ErrorCode *errIllegalLoopState __attribute__((swift_name("errIllegalLoopState")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcInOpenLoop __attribute__((swift_name("errIllegalAgcInOpenLoop")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcExtendedBolus __attribute__((swift_name("errIllegalAgcExtendedBolus")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcPulses __attribute__((swift_name("errIllegalAgcPulses")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcBolusAlreadyActive __attribute__((swift_name("errIllegalAgcBolusAlreadyActive")));
@property (class, readonly) PSCER48ErrorCode *errIllegalPdmImmedBolus __attribute__((swift_name("errIllegalPdmImmedBolus")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcImmedBolus __attribute__((swift_name("errIllegalAgcImmedBolus")));
@property (class, readonly) PSCER48ErrorCode *errIllegalAgcBolusTooEarly __attribute__((swift_name("errIllegalAgcBolusTooEarly")));
@property (class, readonly) PSCER48ErrorCode *errIllegalBolusSrc __attribute__((swift_name("errIllegalBolusSrc")));
@property (class, readonly) PSCER48ErrorCode *errTempBasalInClosedLoop __attribute__((swift_name("errTempBasalInClosedLoop")));
@property (class, readonly) PSCER48ErrorCode *errSsSwitchOpenCountsExceeded __attribute__((swift_name("errSsSwitchOpenCountsExceeded")));
@property (class, readonly) PSCER48ErrorCode *errExcessiveSummedSsError __attribute__((swift_name("errExcessiveSummedSsError")));
@property (class, readonly) PSCER48ErrorCode *errTooFewPulsesBetweenSsTransitions __attribute__((swift_name("errTooFewPulsesBetweenSsTransitions")));
@property (class, readonly) PSCER48ErrorCode *errSsError __attribute__((swift_name("errSsError")));
+ (PSCKotlinArray<PSCER48ErrorCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ER48ErrorCode.Companion")))
@interface PSCER48ErrorCodeCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCER48ErrorCode *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EgvEmulateType")))
@interface PSCEgvEmulateType : PSCKotlinEnum<PSCEgvEmulateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCEgvEmulateType *egvWaveSafe __attribute__((swift_name("egvWaveSafe")));
@property (class, readonly) PSCEgvEmulateType *egvConstant __attribute__((swift_name("egvConstant")));
@property (class, readonly) PSCEgvEmulateType *egvEvenStep __attribute__((swift_name("egvEvenStep")));
@property (class, readonly) PSCEgvEmulateType *egvVeriedSteps __attribute__((swift_name("egvVeriedSteps")));
@property (class, readonly) PSCEgvEmulateType *egvTesting __attribute__((swift_name("egvTesting")));
+ (PSCKotlinArray<PSCEgvEmulateType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EgvEmulateType.Companion")))
@interface PSCEgvEmulateTypeCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCEgvEmulateType *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodAlerts")))
@interface PSCPodAlerts : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)podAlerts __attribute__((swift_name("init()")));
@property (readonly) int8_t ALERT_MASK_AUTO_OFF __attribute__((swift_name("ALERT_MASK_AUTO_OFF")));
@property (readonly) int8_t ALERT_MASK_EGV_BELOW55 __attribute__((swift_name("ALERT_MASK_EGV_BELOW55")));
@property (readonly) int8_t ALERT_MASK_EXIST_CLOSE_LOOP __attribute__((swift_name("ALERT_MASK_EXIST_CLOSE_LOOP")));
@property (readonly) int8_t ALERT_MASK_LOW_RESERVOIR __attribute__((swift_name("ALERT_MASK_LOW_RESERVOIR")));
@property (readonly) int8_t ALERT_MASK_LUMP_OF_COAL __attribute__((swift_name("ALERT_MASK_LUMP_OF_COAL")));
@property (readonly) int8_t ALERT_MASK_MISSING_12EGV __attribute__((swift_name("ALERT_MASK_MISSING_12EGV")));
@property (readonly) int8_t ALERT_MASK_MISSING_12_EGV __attribute__((swift_name("ALERT_MASK_MISSING_12_EGV")));
@property (readonly) int8_t ALERT_MASK_POD_EXPIRATION __attribute__((swift_name("ALERT_MASK_POD_EXPIRATION")));
@property (readonly) int8_t ALERT_MASK_POD_EXPIRE_AT_USER_SET_TIME __attribute__((swift_name("ALERT_MASK_POD_EXPIRE_AT_USER_SET_TIME")));
@property (readonly) int8_t ALERT_MASK_POD_EXPIRE_IMMINENT __attribute__((swift_name("ALERT_MASK_POD_EXPIRE_IMMINENT")));
@property (readonly) int8_t ALERT_MASK_SUSPEND_ENDED __attribute__((swift_name("ALERT_MASK_SUSPEND_ENDED")));
@property (readonly) int8_t ALERT_MASK_SUSPEND_IN_PROGRESS __attribute__((swift_name("ALERT_MASK_SUSPEND_IN_PROGRESS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodAlerts.CloseLoopAlert")))
@interface PSCPodAlertsCloseLoopAlert : PSCKotlinEnum<PSCPodAlertsCloseLoopAlert *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertAutoOff __attribute__((swift_name("alertAutoOff")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertEgvBelow55 __attribute__((swift_name("alertEgvBelow55")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertPodExpireImminent __attribute__((swift_name("alertPodExpireImminent")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertPodExpireAtUserSetTime __attribute__((swift_name("alertPodExpireAtUserSetTime")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertLowReservoir __attribute__((swift_name("alertLowReservoir")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertMissing12egv __attribute__((swift_name("alertMissing12egv")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertExitCloseLoop __attribute__((swift_name("alertExitCloseLoop")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertPodExpiration __attribute__((swift_name("alertPodExpiration")));
@property (class, readonly) PSCPodAlertsCloseLoopAlert *alertInvalide __attribute__((swift_name("alertInvalide")));
+ (PSCKotlinArray<PSCPodAlertsCloseLoopAlert *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodAlerts.CloseLoopAlertCompanion")))
@interface PSCPodAlertsCloseLoopAlertCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodAlertsCloseLoopAlert *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodAlerts.OpenLoopAlert")))
@interface PSCPodAlertsOpenLoopAlert : PSCKotlinEnum<PSCPodAlertsOpenLoopAlert *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertAutoOff __attribute__((swift_name("alertAutoOff")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertEgvBelow55 __attribute__((swift_name("alertEgvBelow55")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertPodExpireImminent __attribute__((swift_name("alertPodExpireImminent")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertPodExpireAtUserSetTime __attribute__((swift_name("alertPodExpireAtUserSetTime")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertLowReservoir __attribute__((swift_name("alertLowReservoir")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertSuspendInProgress __attribute__((swift_name("alertSuspendInProgress")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertSuspendEnded __attribute__((swift_name("alertSuspendEnded")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertPodExpiration __attribute__((swift_name("alertPodExpiration")));
@property (class, readonly) PSCPodAlertsOpenLoopAlert *alertInvalide __attribute__((swift_name("alertInvalide")));
+ (PSCKotlinArray<PSCPodAlertsOpenLoopAlert *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodAlerts.OpenLoopAlertCompanion")))
@interface PSCPodAlertsOpenLoopAlertCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodAlertsOpenLoopAlert *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodCommConstants")))
@interface PSCPodCommConstants : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)podCommConstants __attribute__((swift_name("init()")));
@property (readonly) int16_t AID_POD_STATUS_LENGTH __attribute__((swift_name("AID_POD_STATUS_LENGTH")));
@property (readonly) int64_t COMM_LOSS_DELAY_IN_MILLIS __attribute__((swift_name("COMM_LOSS_DELAY_IN_MILLIS")));
@property (readonly) int64_t CONNECT_DELAY_IN_MILLIS __attribute__((swift_name("CONNECT_DELAY_IN_MILLIS")));
@property (readonly) int32_t CRC_LENGTH __attribute__((swift_name("CRC_LENGTH")));
@property (readonly) int32_t CSDD_HEADER_LENGTH __attribute__((swift_name("CSDD_HEADER_LENGTH")));
@property (readonly) int64_t DISCONNECT_DELAY_IN_MILLIS __attribute__((swift_name("DISCONNECT_DELAY_IN_MILLIS")));
@property (readonly) int64_t FAST_PODSIM_COMM_LOSS_DELAY_IN_MILLIS __attribute__((swift_name("FAST_PODSIM_COMM_LOSS_DELAY_IN_MILLIS")));
@property (readonly) int64_t FAST_PODSIM_CONNECT_DELAY_IN_MILLIS __attribute__((swift_name("FAST_PODSIM_CONNECT_DELAY_IN_MILLIS")));
@property (readonly) int64_t FAST_PODSIM_DISCONNECT_DELAY_IN_MILLIS __attribute__((swift_name("FAST_PODSIM_DISCONNECT_DELAY_IN_MILLIS")));
@property (readonly) int32_t FLAGS_LENGTH __attribute__((swift_name("FLAGS_LENGTH")));
@property (readonly) int16_t LENGTH_FIELD_SIZE __attribute__((swift_name("LENGTH_FIELD_SIZE")));
@property (readonly) int32_t OPCODE_FIELD_LENGTH __attribute__((swift_name("OPCODE_FIELD_LENGTH")));
@property (readonly) int32_t SIZE_FIELD_LENGTH __attribute__((swift_name("SIZE_FIELD_LENGTH")));
@property (readonly) int16_t TDI_RESPONSE_LENGTH __attribute__((swift_name("TDI_RESPONSE_LENGTH")));
@property (readonly) int16_t TXID_PAYLOAD_LENGTH __attribute__((swift_name("TXID_PAYLOAD_LENGTH")));
@property (readonly) int32_t UNIQUE_ID_LENGTH __attribute__((swift_name("UNIQUE_ID_LENGTH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodConstants")))
@interface PSCPodConstants : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)podConstants __attribute__((swift_name("init()")));
@property (readonly) int8_t ACTIVE __attribute__((swift_name("ACTIVE")));
@property (readonly) NSString *ALARM_AFTER_RECEIVING_COMMAND_CHECK_STATUS __attribute__((swift_name("ALARM_AFTER_RECEIVING_COMMAND_CHECK_STATUS")));
@property (readonly) NSString *ALARM_AFTER_RECEIVING_COMMAND_RE_SEND_IP_COMMAND __attribute__((swift_name("ALARM_AFTER_RECEIVING_COMMAND_RE_SEND_IP_COMMAND")));
@property (readonly) NSString *ALARM_BEFORE_RECEIVING_COMMAND_CHECK_STATUS __attribute__((swift_name("ALARM_BEFORE_RECEIVING_COMMAND_CHECK_STATUS")));
@property (readonly) NSString *ALARM_BEFORE_RECEIVING_COMMAND_RE_SEND_IP_COMMAND __attribute__((swift_name("ALARM_BEFORE_RECEIVING_COMMAND_RE_SEND_IP_COMMAND")));
@property (readonly) int32_t ALARM_EMPTY_RESERVOIR __attribute__((swift_name("ALARM_EMPTY_RESERVOIR")));
@property (readonly) int32_t ALARM_OCCLUDED __attribute__((swift_name("ALARM_OCCLUDED")));
@property (readonly) int32_t ALARM_PUMP_EXPIRED __attribute__((swift_name("ALARM_PUMP_EXPIRED")));
@property (readonly) int8_t ALERT_STATUS_PAGE __attribute__((swift_name("ALERT_STATUS_PAGE")));
@property (readonly) int8_t ALGO_WARNINGS __attribute__((swift_name("ALGO_WARNINGS")));
@property (readonly) int8_t AUTO_OFF_RESET_STATUS_PAGE __attribute__((swift_name("AUTO_OFF_RESET_STATUS_PAGE")));
@property (readonly) int16_t BASALSTEP_SIZE __attribute__((swift_name("BASALSTEP_SIZE")));
@property (readonly) int8_t BASAL_ACTIVE __attribute__((swift_name("BASAL_ACTIVE")));
@property (readonly) int32_t BASAL_CHANNEL __attribute__((swift_name("BASAL_CHANNEL")));
@property (readonly) int32_t BASAL_CHANNEL_INIT __attribute__((swift_name("BASAL_CHANNEL_INIT")));
@property (readonly) int32_t BASAL_INIT_STEP_LENGTH __attribute__((swift_name("BASAL_INIT_STEP_LENGTH")));
@property (readonly) int32_t BASAL_NOT_RUNNING __attribute__((swift_name("BASAL_NOT_RUNNING")));
@property (readonly) int32_t BASAL_STEP_LENGTH __attribute__((swift_name("BASAL_STEP_LENGTH")));
@property (readonly) int8_t BLE_INTERIM_VERSION __attribute__((swift_name("BLE_INTERIM_VERSION")));
@property (readonly) int8_t BLE_MAJOR_SW_VERSION __attribute__((swift_name("BLE_MAJOR_SW_VERSION")));
@property (readonly) int8_t BLE_MINOR_SW_VERSION __attribute__((swift_name("BLE_MINOR_SW_VERSION")));
@property (readonly) int8_t BOLUS_ACTIVE __attribute__((swift_name("BOLUS_ACTIVE")));
@property (readonly) int32_t BOLUS_CHANNEL __attribute__((swift_name("BOLUS_CHANNEL")));
@property (readonly) NSString *CGM_DEFAULT_STATE __attribute__((swift_name("CGM_DEFAULT_STATE")));
@property (readonly) int32_t CMD_SEQ_NUM_ARRAY_LIMIT __attribute__((swift_name("CMD_SEQ_NUM_ARRAY_LIMIT")));
@property (readonly) int8_t DASH_PRODUCT_ID __attribute__((swift_name("DASH_PRODUCT_ID")));
@property (readonly) NSString *DATABASE_NAME __attribute__((swift_name("DATABASE_NAME")));
@property (readonly) int8_t DEFAULT_STATUS_PAGE __attribute__((swift_name("DEFAULT_STATUS_PAGE")));
@property (readonly) int32_t DOUBLE_TO_INT_SCALING_FACTOR __attribute__((swift_name("DOUBLE_TO_INT_SCALING_FACTOR")));
@property (readonly) int16_t EGV_CGM_CONNECTING __attribute__((swift_name("EGV_CGM_CONNECTING")));
@property (readonly) int16_t EGV_CGM_LINK_LOSS __attribute__((swift_name("EGV_CGM_LINK_LOSS")));
@property (readonly) int16_t EGV_CGM_NO_TX_ID __attribute__((swift_name("EGV_CGM_NO_TX_ID")));
@property (readonly) int16_t EGV_CGM_PAIRING __attribute__((swift_name("EGV_CGM_PAIRING")));
@property (readonly) int16_t EGV_CGM_SCAN_STOPPED __attribute__((swift_name("EGV_CGM_SCAN_STOPPED")));
@property (readonly) int16_t EGV_CGM_SIGNAL_LOSS __attribute__((swift_name("EGV_CGM_SIGNAL_LOSS")));
@property (readonly) int16_t EGV_CGM_TXID_AUTH_ERROR __attribute__((swift_name("EGV_CGM_TXID_AUTH_ERROR")));
@property (readonly) int16_t EGV_CGM_TX_BLE_AUTH_ERROR __attribute__((swift_name("EGV_CGM_TX_BLE_AUTH_ERROR")));
@property (readonly) int16_t EGV_CGM_UNRECOVERABLE_ERROR __attribute__((swift_name("EGV_CGM_UNRECOVERABLE_ERROR")));
@property (readonly) int16_t EGV_FLUCTUATION_BOUND __attribute__((swift_name("EGV_FLUCTUATION_BOUND")));
@property (readonly) int16_t EGV_POWER_ABERRATION __attribute__((swift_name("EGV_POWER_ABERRATION")));
@property (readonly) int16_t EGV_SENSOR_OUT_OF_CALIBRATION __attribute__((swift_name("EGV_SENSOR_OUT_OF_CALIBRATION")));
@property (readonly) int32_t EGV_TIMESTAMP_UNINITIALIZED __attribute__((swift_name("EGV_TIMESTAMP_UNINITIALIZED")));
@property (readonly) int32_t EXEC_HALF __attribute__((swift_name("EXEC_HALF")));
@property (readonly) int32_t EXEC_NOT_START __attribute__((swift_name("EXEC_NOT_START")));
@property (readonly) int32_t EXEC_SUCCESS __attribute__((swift_name("EXEC_SUCCESS")));
@property (readonly) int8_t EXTBOLUS_ACTIVE __attribute__((swift_name("EXTBOLUS_ACTIVE")));
@property (readonly) int8_t FAST_PODSIM_NUM_ENGAGING_CLUTCH_PULSES __attribute__((swift_name("FAST_PODSIM_NUM_ENGAGING_CLUTCH_PULSES")));
@property (readonly) int8_t FAST_PODSIM_NUM_PRIME_PULSES __attribute__((swift_name("FAST_PODSIM_NUM_PRIME_PULSES")));
@property int16_t G6_TX_LIFE_IN_DAYS __attribute__((swift_name("G6_TX_LIFE_IN_DAYS")));
@property (readonly) int32_t HAS_VALID_TXID __attribute__((swift_name("HAS_VALID_TXID")));
@property (readonly) int16_t HIGH_EGV __attribute__((swift_name("HIGH_EGV")));
@property (readonly) int16_t HIGH_SAFE_EGV __attribute__((swift_name("HIGH_SAFE_EGV")));
@property (readonly) int8_t HORIZON_PRODUCT_ID __attribute__((swift_name("HORIZON_PRODUCT_ID")));
@property (readonly) int32_t IP_COMMAND_ALARM_ALARM_VALUE_DEFAULT_VALUE __attribute__((swift_name("IP_COMMAND_ALARM_ALARM_VALUE_DEFAULT_VALUE")));
@property (readonly) NSString *IP_COMMAND_ALARM_ALARM_VALUE_PARAMETER_KEY __attribute__((swift_name("IP_COMMAND_ALARM_ALARM_VALUE_PARAMETER_KEY")));
@property (readonly) int32_t IP_COMMAND_ALARM_IP_RESPONSE_DEFAULT_VALUE __attribute__((swift_name("IP_COMMAND_ALARM_IP_RESPONSE_DEFAULT_VALUE")));
@property (readonly) NSString *IP_COMMAND_ALARM_IP_RESPONSE_PARAMETER_KEY __attribute__((swift_name("IP_COMMAND_ALARM_IP_RESPONSE_PARAMETER_KEY")));
@property (readonly) NSString *IP_COMMAND_ALARM_USE_CASE_PARAMETER_KEY __attribute__((swift_name("IP_COMMAND_ALARM_USE_CASE_PARAMETER_KEY")));
@property (readonly) int16_t LOW_EGV __attribute__((swift_name("LOW_EGV")));
@property (readonly) int16_t LOW_SAFE_EGV __attribute__((swift_name("LOW_SAFE_EGV")));
@property (readonly) int8_t MAIN_INTERIM_VERSION __attribute__((swift_name("MAIN_INTERIM_VERSION")));
@property (readonly) int8_t MAJOR_SW_VERSION __attribute__((swift_name("MAJOR_SW_VERSION")));
@property (readonly) int16_t MAX_EGV __attribute__((swift_name("MAX_EGV")));
@property (readonly) int8_t MAX_EGV_RATE __attribute__((swift_name("MAX_EGV_RATE")));
@property (readonly) int32_t MAX_NUMBER_OF_CGM_ALGO_STATES __attribute__((swift_name("MAX_NUMBER_OF_CGM_ALGO_STATES")));
@property (readonly) int32_t MAX_NUMBER_OF_POD_CGM_CONDITIONS __attribute__((swift_name("MAX_NUMBER_OF_POD_CGM_CONDITIONS")));
@property (readonly) int32_t MAX_NUMBER_OF_POD_STATE __attribute__((swift_name("MAX_NUMBER_OF_POD_STATE")));
@property (readonly) int32_t MAX_PULSES __attribute__((swift_name("MAX_PULSES")));
@property (readonly) int32_t MICRO_LITER_PER_HOUR_IN_A_UNIT __attribute__((swift_name("MICRO_LITER_PER_HOUR_IN_A_UNIT")));
@property (readonly) int32_t MICRO_UNIT_CONSUMED_PER_5_MINUTES __attribute__((swift_name("MICRO_UNIT_CONSUMED_PER_5_MINUTES")));
@property (readonly) int32_t MICRO_UNIT_PER_PULSES __attribute__((swift_name("MICRO_UNIT_PER_PULSES")));
@property (readonly) int32_t MID_NIGHT_DEVIATION __attribute__((swift_name("MID_NIGHT_DEVIATION")));
@property (readonly) int32_t MILLIS_IN_A_DAY __attribute__((swift_name("MILLIS_IN_A_DAY")));
@property (readonly) int32_t MILLIS_IN_HALF_HOUR __attribute__((swift_name("MILLIS_IN_HALF_HOUR")));
@property (readonly) int8_t MINOR_SW_VERSION __attribute__((swift_name("MINOR_SW_VERSION")));
@property (readonly) int16_t MIN_EGV __attribute__((swift_name("MIN_EGV")));
@property (readonly) int32_t MIN_PULSES_VOLUME __attribute__((swift_name("MIN_PULSES_VOLUME")));
@property (readonly) int32_t MS_PER_TIC __attribute__((swift_name("MS_PER_TIC")));
@property (readonly) int32_t NAK_LENGTH __attribute__((swift_name("NAK_LENGTH")));
@property (readonly) int8_t NOT_ACTIVE __attribute__((swift_name("NOT_ACTIVE")));
@property (readonly) int8_t NOT_CHANGE __attribute__((swift_name("NOT_CHANGE")));
@property (readonly) int8_t NOT_CHANGE_INT __attribute__((swift_name("NOT_CHANGE_INT")));
@property (readonly) int16_t NO_CGM_EGV __attribute__((swift_name("NO_CGM_EGV")));
@property (readonly) NSString *NO_CGM_TX_ID __attribute__((swift_name("NO_CGM_TX_ID")));
@property (readonly) int32_t NO_COMM_ERROR __attribute__((swift_name("NO_COMM_ERROR")));
@property (readonly) int16_t NO_EGV_VALUE __attribute__((swift_name("NO_EGV_VALUE")));
@property (readonly) int32_t NUMBER_OF_DISCONNECTION_REASONS __attribute__((swift_name("NUMBER_OF_DISCONNECTION_REASONS")));
@property (readonly) int32_t NUMBER_OF_PULSES_IN_A_UNIT __attribute__((swift_name("NUMBER_OF_PULSES_IN_A_UNIT")));
@property (readonly) int8_t NUM_ENGAGING_CLUTCH_PULSES __attribute__((swift_name("NUM_ENGAGING_CLUTCH_PULSES")));
@property (readonly) int16_t NUM_OF_SLOTS_IN_A_DAY __attribute__((swift_name("NUM_OF_SLOTS_IN_A_DAY")));
@property (readonly) int32_t NUM_PARTIAL_PULSES_IN_A_PULSE __attribute__((swift_name("NUM_PARTIAL_PULSES_IN_A_PULSE")));
@property (readonly) int8_t NUM_PRIME_PULSES __attribute__((swift_name("NUM_PRIME_PULSES")));
@property (readonly) int32_t OVER_WRITE __attribute__((swift_name("OVER_WRITE")));
@property (readonly) NSString *PAIRED_POD_ID __attribute__((swift_name("PAIRED_POD_ID")));
@property (readonly) double PARTIAL_PULSE_EFFECTIVE_RATE __attribute__((swift_name("PARTIAL_PULSE_EFFECTIVE_RATE")));
@property (readonly) int8_t PDM_DASH __attribute__((swift_name("PDM_DASH")));
@property (readonly) int8_t PDM_HORIZON __attribute__((swift_name("PDM_HORIZON")));
@property int8_t PDM_TYPE __attribute__((swift_name("PDM_TYPE")));
@property (readonly) NSString *PODSIM_KEY __attribute__((swift_name("PODSIM_KEY")));
@property (readonly) int8_t PRIME_PUMP_RATE __attribute__((swift_name("PRIME_PUMP_RATE")));
@property (readonly) NSString *PSEUDO_MACADDR1 __attribute__((swift_name("PSEUDO_MACADDR1")));
@property (readonly) NSString *PSEUDO_MACADDR2 __attribute__((swift_name("PSEUDO_MACADDR2")));
@property (readonly) int16_t PULSE_VOLUME __attribute__((swift_name("PULSE_VOLUME")));
@property (readonly) int8_t PUMP_RATE __attribute__((swift_name("PUMP_RATE")));
@property (readonly) NSString *QN_STATUS_READINESS __attribute__((swift_name("QN_STATUS_READINESS")));
@property (readonly) int16_t RESERVOIR_EMPTY_THRESHOLD __attribute__((swift_name("RESERVOIR_EMPTY_THRESHOLD")));
@property (readonly) int32_t SECONDS_IN_A_DAY __attribute__((swift_name("SECONDS_IN_A_DAY")));
@property (readonly) int32_t SECONDS_IN_HALF_HOUR __attribute__((swift_name("SECONDS_IN_HALF_HOUR")));
@property (readonly) int8_t STATUS_PAGE_0 __attribute__((swift_name("STATUS_PAGE_0")));
@property (readonly) int8_t STATUS_PAGE_1 __attribute__((swift_name("STATUS_PAGE_1")));
@property (readonly) int8_t STATUS_PAGE_2 __attribute__((swift_name("STATUS_PAGE_2")));
@property (readonly) int8_t STATUS_PAGE_7 __attribute__((swift_name("STATUS_PAGE_7")));
@property (readonly) int8_t STATUS_PAGE_70 __attribute__((swift_name("STATUS_PAGE_70")));
@property (readonly) int8_t STATUS_PAGE_80 __attribute__((swift_name("STATUS_PAGE_80")));
@property (readonly) int8_t STATUS_PAGE_81 __attribute__((swift_name("STATUS_PAGE_81")));
@property (readonly) int8_t STOP_ALL __attribute__((swift_name("STOP_ALL")));
@property (readonly) int8_t STOP_BASAL __attribute__((swift_name("STOP_BASAL")));
@property (readonly) int8_t STOP_BOLUS __attribute__((swift_name("STOP_BOLUS")));
@property (readonly) int8_t STOP_TEMPBASAL __attribute__((swift_name("STOP_TEMPBASAL")));
@property (readonly) int16_t TARGET_EGV __attribute__((swift_name("TARGET_EGV")));
@property (readonly) int8_t TDI_ID_GAP_FLAG __attribute__((swift_name("TDI_ID_GAP_FLAG")));
@property (readonly) int8_t TDI_SIDH_FLAG __attribute__((swift_name("TDI_SIDH_FLAG")));
@property (readonly) int32_t TEMPBASALSTEP_SIZE __attribute__((swift_name("TEMPBASALSTEP_SIZE")));
@property (readonly) int32_t TEMPBASAL_CHANNEL_INIT __attribute__((swift_name("TEMPBASAL_CHANNEL_INIT")));
@property (readonly) int8_t TEMP_BASAL_ACTIVE __attribute__((swift_name("TEMP_BASAL_ACTIVE")));
@property (readonly) int32_t TEMP_BASAL_CHANNEL __attribute__((swift_name("TEMP_BASAL_CHANNEL")));
@property (readonly) int32_t TOTAL_SLOTS_A_DAY __attribute__((swift_name("TOTAL_SLOTS_A_DAY")));
@property (readonly) int8_t TO_FALSE __attribute__((swift_name("TO_FALSE")));
@property (readonly) int8_t TO_TRUE __attribute__((swift_name("TO_TRUE")));
@property (readonly) int32_t TURN_OFF __attribute__((swift_name("TURN_OFF")));
@property (readonly) int32_t TURN_ON __attribute__((swift_name("TURN_ON")));
@property (readonly) int32_t TXID_LENGTH __attribute__((swift_name("TXID_LENGTH")));
@property (readonly) PSCKotlinByteArray *UNCONFIRMED_SEND_TOKEN __attribute__((swift_name("UNCONFIRMED_SEND_TOKEN")));
@property (readonly) int8_t UNDEFINED_EGV_RATE __attribute__((swift_name("UNDEFINED_EGV_RATE")));
@property (readonly) int64_t UNINITIALIZED_UID __attribute__((swift_name("UNINITIALIZED_UID")));
@property (readonly) NSString *UNPAIRED_POD_ID __attribute__((swift_name("UNPAIRED_POD_ID")));
@property (readonly) int32_t VALUE_NOT_SET_1 __attribute__((swift_name("VALUE_NOT_SET_1")));
@property (readonly) int32_t VALUE_NOT_SET_101 __attribute__((swift_name("VALUE_NOT_SET_101")));
@property PSCPodLotTypeEnum *dashPodLot __attribute__((swift_name("dashPodLot")));
@property PSCPodLotTypeEnum *hirizonPodLot __attribute__((swift_name("hirizonPodLot")));
@property (readonly) int32_t insulinHistorySize __attribute__((swift_name("insulinHistorySize")));
@property (readonly) int32_t logHeaderSize __attribute__((swift_name("logHeaderSize")));
@property (readonly) int32_t logLength __attribute__((swift_name("logLength")));
@property (readonly) int32_t logTimeIntervalSeconds __attribute__((swift_name("logTimeIntervalSeconds")));
@property (readonly) int32_t maxLogsPerPackage __attribute__((swift_name("maxLogsPerPackage")));
@property int32_t patientHistoryLogEnabled __attribute__((swift_name("patientHistoryLogEnabled")));
@property (readonly) int32_t totalSuggestedInsulinSeqCount __attribute__((swift_name("totalSuggestedInsulinSeqCount")));
@property (readonly) PSCKotlinIntArray *totalSuggestedInsulinSequence __attribute__((swift_name("totalSuggestedInsulinSequence")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodLotTypeEnum")))
@interface PSCPodLotTypeEnum : PSCKotlinEnum<PSCPodLotTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodLotTypeEnum *dashu100china __attribute__((swift_name("dashu100china")));
@property (class, readonly) PSCPodLotTypeEnum *dashu200china __attribute__((swift_name("dashu200china")));
@property (class, readonly) PSCPodLotTypeEnum *dashu500china __attribute__((swift_name("dashu500china")));
@property (class, readonly) PSCPodLotTypeEnum *dashu100usa __attribute__((swift_name("dashu100usa")));
@property (class, readonly) PSCPodLotTypeEnum *apu100usa __attribute__((swift_name("apu100usa")));
@property (class, readonly) PSCPodLotTypeEnum *apu500china __attribute__((swift_name("apu500china")));
@property (class, readonly) PSCPodLotTypeEnum *unknown __attribute__((swift_name("unknown")));
+ (PSCKotlinArray<PSCPodLotTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t lotNumber __attribute__((swift_name("lotNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodLotTypeEnum.Companion")))
@interface PSCPodLotTypeEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodLotTypeEnum *)getInstanceName:(NSString *)name __attribute__((swift_name("getInstance(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodQnState")))
@interface PSCPodQnState : PSCKotlinEnum<PSCPodQnState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodQnState *qnsetupnotcomplete __attribute__((swift_name("qnsetupnotcomplete")));
@property (class, readonly) PSCPodQnState *qnready __attribute__((swift_name("qnready")));
+ (PSCKotlinArray<PSCPodQnState *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodQnState.Companion")))
@interface PSCPodQnStateCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodQnState *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodState")))
@interface PSCPodState : PSCKotlinEnum<PSCPodState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodState *uninitialized __attribute__((swift_name("uninitialized")));
@property (class, readonly) PSCPodState *mfgTest __attribute__((swift_name("mfgTest")));
@property (class, readonly) PSCPodState *podFilled __attribute__((swift_name("podFilled")));
@property (class, readonly) PSCPodState *uidSet __attribute__((swift_name("uidSet")));
@property (class, readonly) PSCPodState *engagingClutchDrive __attribute__((swift_name("engagingClutchDrive")));
@property (class, readonly) PSCPodState *clutchDriveEngaged __attribute__((swift_name("clutchDriveEngaged")));
@property (class, readonly) PSCPodState *basalProgramRunning __attribute__((swift_name("basalProgramRunning")));
@property (class, readonly) PSCPodState *priming __attribute__((swift_name("priming")));
@property (class, readonly) PSCPodState *runningAboveMinVolume __attribute__((swift_name("runningAboveMinVolume")));
@property (class, readonly) PSCPodState *runningBelowMinVolume __attribute__((swift_name("runningBelowMinVolume")));
@property (class, readonly) PSCPodState *alarm __attribute__((swift_name("alarm")));
@property (class, readonly) PSCPodState *lumpOfCoal __attribute__((swift_name("lumpOfCoal")));
@property (class, readonly) PSCPodState *deactivated __attribute__((swift_name("deactivated")));
+ (PSCKotlinArray<PSCPodState *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodState.Companion")))
@interface PSCPodStateCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodState *)fromValueState:(int32_t)state __attribute__((swift_name("fromValue(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramStatus")))
@interface PSCProgramStatus : PSCKotlinEnum<PSCProgramStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCProgramStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) PSCProgramStatus *runningBasal __attribute__((swift_name("runningBasal")));
@property (class, readonly) PSCProgramStatus *runningBasalAndTempBasal __attribute__((swift_name("runningBasalAndTempBasal")));
@property (class, readonly) PSCProgramStatus *runningBasalAndTempBasalAndBolus __attribute__((swift_name("runningBasalAndTempBasalAndBolus")));
@property (class, readonly) PSCProgramStatus *runningBasalAndTempBasalAndExtBolus __attribute__((swift_name("runningBasalAndTempBasalAndExtBolus")));
@property (class, readonly) PSCProgramStatus *runningBasalAndBolus __attribute__((swift_name("runningBasalAndBolus")));
@property (class, readonly) PSCProgramStatus *runningBasalAndExtBolus __attribute__((swift_name("runningBasalAndExtBolus")));
+ (PSCKotlinArray<PSCProgramStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramStatus.Companion")))
@interface PSCProgramStatusCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCProgramStatus *)getTypeFromValueState:(int32_t)state __attribute__((swift_name("getTypeFromValue(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringFormat")))
@interface PSCStringFormat : PSCKotlinEnum<PSCStringFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCStringFormat *usAscii __attribute__((swift_name("usAscii")));
+ (PSCKotlinArray<PSCStringFormat *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiComponentError")))
@interface PSCTwiComponentError : PSCKotlinEnum<PSCTwiComponentError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCTwiComponentError *exceedcommandsbuffermaxsize __attribute__((swift_name("exceedcommandsbuffermaxsize")));
@property (class, readonly) PSCTwiComponentError *deviceisnotregistered __attribute__((swift_name("deviceisnotregistered")));
@property (class, readonly) PSCTwiComponentError *unabletosign __attribute__((swift_name("unabletosign")));
@property (class, readonly) PSCTwiComponentError *outofrangenotificationnumber __attribute__((swift_name("outofrangenotificationnumber")));
@property (class, readonly) PSCTwiComponentError *invalidconfigurations __attribute__((swift_name("invalidconfigurations")));
@property (class, readonly) PSCTwiComponentError *failedtocreategattserver __attribute__((swift_name("failedtocreategattserver")));
@property (class, readonly) PSCTwiComponentError *userPhoneAlreadyPairedDeactivateActivePdmFirst __attribute__((swift_name("userPhoneAlreadyPairedDeactivateActivePdmFirst")));
@property (class, readonly) PSCTwiComponentError *notMyActivePod __attribute__((swift_name("notMyActivePod")));
@property (class, readonly) PSCTwiComponentError *pdmAlreadyPairedDeactivateActivePodFirst __attribute__((swift_name("pdmAlreadyPairedDeactivateActivePodFirst")));
@property (class, readonly) PSCTwiComponentError *podAlreadyPairedWithAnotherPdm __attribute__((swift_name("podAlreadyPairedWithAnotherPdm")));
@property (class, readonly) PSCTwiComponentError *overMaxLength __attribute__((swift_name("overMaxLength")));
@property (class, readonly) PSCTwiComponentError *waitingtotransmitdata __attribute__((swift_name("waitingtotransmitdata")));
@property (class, readonly) PSCTwiComponentError *malformeddata __attribute__((swift_name("malformeddata")));
@property (class, readonly) PSCTwiComponentError *nulldeviceormanager __attribute__((swift_name("nulldeviceormanager")));
@property (class, readonly) PSCTwiComponentError *alreadydisconnecting __attribute__((swift_name("alreadydisconnecting")));
@property (class, readonly) PSCTwiComponentError *bluetoothofferror __attribute__((swift_name("bluetoothofferror")));
@property (class, readonly) PSCTwiComponentError *blenotsupportederror __attribute__((swift_name("blenotsupportederror")));
@property (class, readonly) PSCTwiComponentError *failtodisconnecterror __attribute__((swift_name("failtodisconnecterror")));
@property (class, readonly) PSCTwiComponentError *failtoconnecterror __attribute__((swift_name("failtoconnecterror")));
@property (class, readonly) PSCTwiComponentError *invalidscantypeerror __attribute__((swift_name("invalidscantypeerror")));
@property (class, readonly) PSCTwiComponentError *alreadyreading __attribute__((swift_name("alreadyreading")));
@property (class, readonly) PSCTwiComponentError *failtowritedataerror __attribute__((swift_name("failtowritedataerror")));
@property (class, readonly) PSCTwiComponentError *failtoreceivedataerror __attribute__((swift_name("failtoreceivedataerror")));
@property (class, readonly) PSCTwiComponentError *devicenotdiscoverederror __attribute__((swift_name("devicenotdiscoverederror")));
@property (class, readonly) PSCTwiComponentError *nullpacketerror __attribute__((swift_name("nullpacketerror")));
@property (class, readonly) PSCTwiComponentError *alreadywriting __attribute__((swift_name("alreadywriting")));
@property (class, readonly) PSCTwiComponentError *notconnected __attribute__((swift_name("notconnected")));
@property (class, readonly) PSCTwiComponentError *alreadyconnected __attribute__((swift_name("alreadyconnected")));
@property (class, readonly) PSCTwiComponentError *alreadyconnecting __attribute__((swift_name("alreadyconnecting")));
@property (class, readonly) PSCTwiComponentError *notscanning __attribute__((swift_name("notscanning")));
@property (class, readonly) PSCTwiComponentError *alreadyscanning __attribute__((swift_name("alreadyscanning")));
@property (class, readonly) PSCTwiComponentError *toomanyadvertisers __attribute__((swift_name("toomanyadvertisers")));
@property (class, readonly) PSCTwiComponentError *alreadyadvertising __attribute__((swift_name("alreadyadvertising")));
@property (class, readonly) PSCTwiComponentError *advertisingunknownerror __attribute__((swift_name("advertisingunknownerror")));
@property (class, readonly) PSCTwiComponentError *peripheralmodepaused __attribute__((swift_name("peripheralmodepaused")));
@property (class, readonly) PSCTwiComponentError *success __attribute__((swift_name("success")));
+ (PSCKotlinArray<PSCTwiComponentError *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwiComponentError.Companion")))
@interface PSCTwiComponentErrorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCTwiComponentError *)getInstanceValue:(int32_t)value __attribute__((swift_name("getInstance(value:)")));
@end;

__attribute__((swift_name("DatabaseDriverFactory")))
@interface PSCDatabaseDriverFactory : PSCBase
- (instancetype)initWithPscConfiguration:(PSCPscConfiguration *)pscConfiguration __attribute__((swift_name("init(pscConfiguration:)"))) __attribute__((objc_designated_initializer));
- (id<PSCRuntimeSqlDriver> _Nullable)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((swift_name("Repository")))
@interface PSCRepository : PSCBase
- (instancetype)initWithPscConfiguration:(PSCPscConfiguration *)pscConfiguration databaseDriverFactory:(PSCDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(pscConfiguration:databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));
- (void)deleteCgm __attribute__((swift_name("deleteCgm()")));
- (void)deletePod __attribute__((swift_name("deletePod()")));
- (void)deleteSimData __attribute__((swift_name("deleteSimData()")));
- (PSCCgmTable * _Nullable)getCgm __attribute__((swift_name("getCgm()")));
- (NSMutableArray<NSString *> *)getLogs __attribute__((swift_name("getLogs()")));
- (PSCSimPodTable * _Nullable)getPod __attribute__((swift_name("getPod()")));
- (PSCSimDataTable * _Nullable)getSimData __attribute__((swift_name("getSimData()")));
- (void)saveCgmCgmTable:(PSCCgmTable *)cgmTable __attribute__((swift_name("saveCgm(cgmTable:)")));
- (void)saveLogId:(NSString *)id log:(NSString *)log __attribute__((swift_name("saveLog(id:log:)")));
- (void)savePodSimPodTable:(PSCSimPodTable *)simPodTable __attribute__((swift_name("savePod(simPodTable:)")));
- (void)saveSimDataSimDataTable:(PSCSimDataTable *)simDataTable __attribute__((swift_name("saveSimData(simDataTable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Repository.Companion")))
@interface PSCRepositoryCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlePod")))
@interface PSCBlePod : PSCBase
- (instancetype)initWithPublicID:(NSString *)publicID alertMask:(int8_t)alertMask alarmCode:(int8_t)alarmCode rssi:(int32_t)rssi profileID:(int32_t)profileID extraInfo:(PSCKotlinByteArray *)extraInfo lastSeenDateTime:(NSString *)lastSeenDateTime name:(NSString *)name companyId:(int64_t)companyId twiId:(int64_t)twiId __attribute__((swift_name("init(publicID:alertMask:alarmCode:rssi:profileID:extraInfo:lastSeenDateTime:name:companyId:twiId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int8_t alarmCode __attribute__((swift_name("alarmCode")));
@property (readonly) int8_t alertMask __attribute__((swift_name("alertMask")));
@property (readonly) int64_t companyId __attribute__((swift_name("companyId")));
@property PSCKotlinByteArray *extraInfo __attribute__((swift_name("extraInfo")));
@property NSString *lastSeenDateTime __attribute__((swift_name("lastSeenDateTime")));
@property PSCKotlinByteArray *manufacturingSpecificData __attribute__((swift_name("manufacturingSpecificData")));
@property NSString *myAddress __attribute__((swift_name("myAddress")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t profileID __attribute__((swift_name("profileID")));
@property (readonly) NSString *publicID __attribute__((swift_name("publicID")));
@property (readonly) int32_t rssi __attribute__((swift_name("rssi")));
@property int32_t statusServiceUUID __attribute__((swift_name("statusServiceUUID")));
@property (readonly) int64_t twiId __attribute__((swift_name("twiId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlePod.Companion")))
@interface PSCBlePodCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t PERIPHERAL_HAS_NO_DATA_FOR_ALL __attribute__((swift_name("PERIPHERAL_HAS_NO_DATA_FOR_ALL")));
@property (readonly) int32_t PERIPHERAL_IN_ALARM_FOR_CENTRAL_ONLY __attribute__((swift_name("PERIPHERAL_IN_ALARM_FOR_CENTRAL_ONLY")));
@property (readonly) int32_t PERIPHERAL_IN_ALERT_FOR_CENTRAL_ONLY __attribute__((swift_name("PERIPHERAL_IN_ALERT_FOR_CENTRAL_ONLY")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) PSCKotlinByteArray *manufacturingData __attribute__((swift_name("manufacturingData")));
@property (readonly) NSString *manufacturingDataHexString __attribute__((swift_name("manufacturingDataHexString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent")))
@interface PSCPodEvent : PSCBase
- (instancetype)initWithType:(PSCPodEventType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(PSCPodEventType *)type data:(id _Nullable)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@property (readonly) PSCPodEventType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.Companion")))
@interface PSCPodEventCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodEventType *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodEvent.Type_")))
@interface PSCPodEventType : PSCKotlinEnum<PSCPodEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCPodEventType *connected __attribute__((swift_name("connected")));
@property (class, readonly) PSCPodEventType *failedToConnect __attribute__((swift_name("failedToConnect")));
@property (class, readonly) PSCPodEventType *disconnected __attribute__((swift_name("disconnected")));
@property (class, readonly) PSCPodEventType *response __attribute__((swift_name("response")));
@property (class, readonly) PSCPodEventType *alert __attribute__((swift_name("alert")));
@property (class, readonly) PSCPodEventType *alarm __attribute__((swift_name("alarm")));
@property (class, readonly) PSCPodEventType *uninitialized __attribute__((swift_name("uninitialized")));
+ (PSCKotlinArray<PSCPodEventType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodMessageQueue")))
@interface PSCPodMessageQueue : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addMessageMessage:(PSCKotlinByteArray *)message __attribute__((swift_name("addMessage(message:)")));
- (void)subscribeCallback:(void (^)(PSCKotlinByteArray *))callback __attribute__((swift_name("subscribe(callback:)")));
@property (readonly) id<PSCReaktivePublishSubject> subject __attribute__((swift_name("subject")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodNudgeQueue")))
@interface PSCPodNudgeQueue : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addMessageMessage:(PSCBaseNudgeData *)message __attribute__((swift_name("addMessage(message:)")));
@property (readonly) id<PSCReaktivePublishSubject> subject __attribute__((swift_name("subject")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodNudgeQueue.Companion")))
@interface PSCPodNudgeQueueCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodSim")))
@interface PSCPodSim : PSCBase <PSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithPlatformConfiguration:(PSCPscConfiguration *)platformConfiguration repository:(PSCRepository *)repository __attribute__((swift_name("init(platformConfiguration:repository:)"))) __attribute__((objc_designated_initializer));
- (void)deInitializeCoroutineCoroutineContextValue:(id<PSCKotlinCoroutineContext>)coroutineContextValue __attribute__((swift_name("deInitializeCoroutine(coroutineContextValue:)")));
- (PSCKotlinByteArray * _Nullable)getLastResponse __attribute__((swift_name("getLastResponse()")));
- (NSMutableArray<NSString *> *)getLogs __attribute__((swift_name("getLogs()")));
- (id<PSCReaktiveObservable>)getResponseObservable __attribute__((swift_name("getResponseObservable()")));
- (void)initializeCoroutineCoroutineContextValue:(id<PSCKotlinCoroutineContext>)coroutineContextValue __attribute__((swift_name("initializeCoroutine(coroutineContextValue:)")));
- (void)nudgeAlarm __attribute__((swift_name("nudgeAlarm()")));
- (void)nudgeAlert __attribute__((swift_name("nudgeAlert()")));
- (id<PSCReaktiveObservable>)onConnect __attribute__((swift_name("onConnect()")));
- (id<PSCReaktiveObservable>)onDisconnect __attribute__((swift_name("onDisconnect()")));
- (id<PSCReaktiveObservable>)processPacketTwiPacket:(PSCKotlinByteArray * _Nullable)twiPacket delayInMillis:(int32_t)delayInMillis __attribute__((swift_name("processPacket(twiPacket:delayInMillis:)")));
- (id<PSCReaktiveObservable>)queueMessageRxTwiPacket:(PSCKotlinByteArray * _Nullable)twiPacket __attribute__((swift_name("queueMessageRx(twiPacket:)")));
- (void)setLastResponseResponse:(PSCKotlinByteArray * _Nullable)response __attribute__((swift_name("setLastResponse(response:)")));
- (void)setPodTwiShimForTestPodTwiShimForTest:(PSCPodTwiShim *)podTwiShimForTest __attribute__((swift_name("setPodTwiShimForTest(podTwiShimForTest:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@property (readonly) id<PSCReaktiveConnectableObservable> commandProcessingSubject __attribute__((swift_name("commandProcessingSubject")));
@property (readonly) id<PSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property PSCInsulinDeliveryServiceKMM * _Nullable insulinDeliveryService __attribute__((swift_name("insulinDeliveryService")));
@property int8_t lastOpcode __attribute__((swift_name("lastOpcode")));
@property NSString * _Nullable lastUtc __attribute__((swift_name("lastUtc")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property PSCPscConfiguration *platformConfiguration __attribute__((swift_name("platformConfiguration")));
@property (readonly) PSCPodControl *podControl __attribute__((swift_name("podControl")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@property (readonly) PSCRepository *repository __attribute__((swift_name("repository")));
@property (readonly) PSCPlatformShim *shim __attribute__((swift_name("shim")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodSim.Companion")))
@interface PSCPodSimCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)deinit __attribute__((swift_name("deinit()")));
- (PSCPscConfiguration * _Nullable)getContext __attribute__((swift_name("getContext()")));
- (PSCPodSim *)getInstance __attribute__((swift_name("getInstance()")));
- (void)doInitContext:(id _Nullable)context __attribute__((swift_name("doInit(context:)")));
- (void)doInitForTestingPscConfiguration:(PSCPscConfiguration *)pscConfiguration repository:(PSCRepository *)repository __attribute__((swift_name("doInitForTesting(pscConfiguration:repository:)")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property PSCPodSim * _Nullable INSTANCE __attribute__((swift_name("INSTANCE")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property PSCProcessTwiCommand * _Nullable processCommandObj __attribute__((swift_name("processCommandObj")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodStateMachine")))
@interface PSCPodStateMachine : PSCBase
- (instancetype)initWithRepository:(PSCRepository *)repository logger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil podControl:(PSCPodControl *)podControl alertUtil:(PSCAlertUtil *)alertUtil __attribute__((swift_name("init(repository:logger:podUtil:podCommUtil:podControl:alertUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)processCommandCommand:(PSCKotlinByteArray *)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory pod:(PSCSimulatedPod *)pod podState:(PSCPodState * _Nullable)podState simData:(PSCSimData *)simData __attribute__((swift_name("processCommand(command:lastOpCode:executorFactory:pod:podState:simData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodStateMachine.Companion")))
@interface PSCPodStateMachineCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessTwiCommand")))
@interface PSCProcessTwiCommand : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger commandParser:(PSCCommandParser *)commandParser podCommUtil:(PSCPodCommUtil *)podCommUtil podControl:(PSCPodControl *)podControl podUtil:(PSCPodUtil *)podUtil executorFactory:(PSCExecutorFactory *)executorFactory __attribute__((swift_name("init(logger:commandParser:podCommUtil:podControl:podUtil:executorFactory:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)findTwiCommandStringNamesTwiCommands:(NSArray<PSCTwiCommand *> *)twiCommands __attribute__((swift_name("findTwiCommandStringNames(twiCommands:)")));
- (BOOL)foundUncomfirmedSendErrorNameList:(NSArray<NSString *> *)nameList __attribute__((swift_name("foundUncomfirmedSendError(nameList:)")));
- (PSCKotlinByteArray * _Nullable)generateAlteredReponseTwiPacketFromCommandNameCmdPrefix:(NSString * _Nullable)cmdPrefix hexResponse:(NSString * _Nullable)hexResponse __attribute__((swift_name("generateAlteredReponseTwiPacketFromCommandName(cmdPrefix:hexResponse:)")));
- (NSString * _Nullable)getCommandNameStringCmd:(PSCTwiCommand *)cmd __attribute__((swift_name("getCommandNameString(cmd:)")));
- (PSCKotlinByteArray *)handleErrorCommandWithErrorCodeCmdName:(NSString *)cmdName errorCode:(int32_t)errorCode __attribute__((swift_name("handleErrorCommandWithErrorCode(cmdName:errorCode:)")));
- (PSCKotlinByteArray * _Nullable)handleErrorCommandWithOutErrorCodeCommand:(PSCTwiCommand *)command lastOpCode:(int8_t)lastOpCode __attribute__((swift_name("handleErrorCommandWithOutErrorCode(command:lastOpCode:)")));
- (BOOL)isAllowedDuringAlarmCommand:(PSCTwiCommand *)command __attribute__((swift_name("isAllowedDuringAlarm(command:)")));
- (BOOL)isLegacyGetNeedAlterResponseCmd:(NSString *)cmd requestAlterFromLegacySet:(BOOL)requestAlterFromLegacySet __attribute__((swift_name("isLegacyGetNeedAlterResponse(cmd:requestAlterFromLegacySet:)")));
- (BOOL)otherGetCommandNeedAlterResponseCmdName:(NSString *)cmdName __attribute__((swift_name("otherGetCommandNeedAlterResponse(cmdName:)")));
- (PSCPodEvent *)processCommandsTwiPacket:(PSCKotlinByteArray *)twiPacket lastOpCode:(int8_t)lastOpCode __attribute__((swift_name("processCommands(twiPacket:lastOpCode:)")));
- (PSCKotlinByteArray * _Nullable)processSingleCommandCommand:(PSCTwiCommand *)command lastOpCode:(int8_t)lastOpCode __attribute__((swift_name("processSingleCommand(command:lastOpCode:)")));
@property PSCKotlinByteArray * _Nullable lastResponse __attribute__((swift_name("lastResponse")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessTwiCommand.Companion")))
@interface PSCProcessTwiCommandCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int8_t COMMA_SEPERATOR __attribute__((swift_name("COMMA_SEPERATOR")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("RequestBroker")))
@interface PSCRequestBroker : PSCBase
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil logger:(PSCLogger *)logger podControl:(PSCPodControl *)podControl podStateMachine:(PSCPodStateMachine *)podStateMachine __attribute__((swift_name("init(podUtil:podCommUtil:logger:podControl:podStateMachine:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)processRequestCsdd:(PSCKotlinByteArray *)csdd lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory __attribute__((swift_name("processRequest(csdd:lastOpCode:executorFactory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestBroker.Companion")))
@interface PSCRequestBrokerCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("SimDataParameters")))
@interface PSCSimDataParameters : PSCParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)updateParametersOnSimDataSimData:(PSCSimData *)simData __attribute__((swift_name("updateParametersOnSimData(simData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommLossBeforeHoldingTimeParameters")))
@interface PSCCommLossBeforeHoldingTimeParameters : PSCSimDataParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)setHoldingTimeAndValueHoldingTime:(int64_t)holdingTime reason:(int32_t)reason __attribute__((swift_name("setHoldingTimeAndValue(holdingTime:reason:)")));
- (void)updateParametersOnSimDataSimData:(PSCSimData *)simData __attribute__((swift_name("updateParametersOnSimData(simData:)")));
@property int32_t disconnectReasonValue __attribute__((swift_name("disconnectReasonValue")));
@property int64_t holdingTimeInMillis __attribute__((swift_name("holdingTimeInMillis")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommLossParameters")))
@interface PSCCommLossParameters : PSCSimDataParameters
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)reduceErrorCountOrShiftErrorTypeErrorEnum:(PSCCommLossErrorEnum *)errorEnum __attribute__((swift_name("reduceErrorCountOrShiftErrorType(errorEnum:)")));
- (void)setCommLossErrorCount:(int32_t)count errorReason:(int32_t)errorReason errorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("setCommLossError(count:errorReason:errorType:)")));
- (void)updateParametersOnSimDataSimData:(PSCSimData *)simData __attribute__((swift_name("updateParametersOnSimData(simData:)")));
@property int32_t errorCode __attribute__((swift_name("errorCode")));
@property int32_t errorCount __attribute__((swift_name("errorCount")));
@property PSCCommLossErrorEnum *errorType __attribute__((swift_name("errorType")));
@property BOOL reduceCount __attribute__((swift_name("reduceCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommLossParameters.Companion")))
@interface PSCCommLossParametersCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformShim")))
@interface PSCPlatformShim : PSCBase
- (instancetype)initWithPodTwiShim:(PSCPodTwiShim *)podTwiShim logger:(PSCLogger *)logger repository:(PSCRepository *)repository __attribute__((swift_name("init(podTwiShim:logger:repository:)"))) __attribute__((objc_designated_initializer));
- (PSCReaktiveObservableWrapper<PSCTwiEvent *> *)onConnect __attribute__((swift_name("onConnect()")));
- (PSCReaktiveObservableWrapper<PSCTwiEvent *> *)onDisconnect __attribute__((swift_name("onDisconnect()")));
- (PSCReaktiveObservableWrapper<PSCTwiEvent *> *)onNudge __attribute__((swift_name("onNudge()")));
- (PSCReaktiveObservableWrapper<PSCTwiEvent *> *)onReceiveTwiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("onReceive(twiPacket:)")));
- (PSCReaktiveObservableWrapper<PSCKotlinArray<PSCBlePod *> *> *)onScanForPodsScanTime:(int32_t)scanTime __attribute__((swift_name("onScanForPods(scanTime:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodTwiShim")))
@interface PSCPodTwiShim : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl messageQueue:(PSCPodMessageQueue *)messageQueue processCommandObj:(PSCProcessTwiCommand *)processCommandObj nudgeController:(PSCNudgeController *)nudgeController statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("init(logger:podUtil:podControl:messageQueue:processCommandObj:nudgeController:statusPageGenerator:)"))) __attribute__((objc_designated_initializer));
- (void)nudgeAlarmScheduler:(id<PSCReaktiveScheduler>)scheduler __attribute__((swift_name("nudgeAlarm(scheduler:)")));
- (void)nudgeAlertScheduler:(id<PSCReaktiveScheduler>)scheduler __attribute__((swift_name("nudgeAlert(scheduler:)")));
- (id<PSCReaktiveObservable>)onConnectScheduler:(id<PSCReaktiveScheduler>)scheduler delay:(int64_t)delay __attribute__((swift_name("onConnect(scheduler:delay:)")));
- (id<PSCReaktiveObservable>)onDisconnectDelayInMillis:(int64_t)delayInMillis subscribeOn:(id<PSCReaktiveScheduler>)subscribeOn __attribute__((swift_name("onDisconnect(delayInMillis:subscribeOn:)")));
- (id<PSCReaktiveObservable>)onNudge __attribute__((swift_name("onNudge()")));
- (id<PSCReaktiveObservable>)onReceiveTwiPacket:(PSCKotlinByteArray *)twiPacket subscribeOn:(id<PSCReaktiveScheduler>)subscribeOn __attribute__((swift_name("onReceive(twiPacket:subscribeOn:)")));
- (id<PSCReaktiveObservable>)onScanForPodsScanTime:(int32_t)scanTime subscribeOn:(id<PSCReaktiveScheduler>)subscribeOn observeOn:(id<PSCReaktiveScheduler>)observeOn __attribute__((swift_name("onScanForPods(scanTime:subscribeOn:observeOn:)")));
- (id<PSCReaktiveObservable>)queuePacketSendAckAndErrorSubscribeOn:(id<PSCReaktiveScheduler>)subscribeOn twiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("queuePacketSendAckAndError(subscribeOn:twiPacket:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodTwiShim.Companion")))
@interface PSCPodTwiShimCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t COMM_DELAY_IN_MILLIS __attribute__((swift_name("COMM_DELAY_IN_MILLIS")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("AlgorithmService")))
@interface PSCAlgorithmService : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl cgmUtil:(PSCCgmUtil *)cgmUtil alertUtil:(PSCAlertUtil *)alertUtil __attribute__((swift_name("init(logger:podUtil:podControl:cgmUtil:alertUtil:)"))) __attribute__((objc_designated_initializer));
- (void)cancelCgmPokeContext:(id _Nullable)context __attribute__((swift_name("cancelCgmPoke(context:)")));
- (void)changeStateNewState:(PSCCgmStateEnum *)newState __attribute__((swift_name("changeState(newState:)")));
- (void)doNextCgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("doNext(cgm:)")));
- (void)doStop __attribute__((swift_name("doStop()")));
- (void)emulateEgvEvenSteps __attribute__((swift_name("emulateEgvEvenSteps()")));
- (void)emulateEgvTestingTrend __attribute__((swift_name("emulateEgvTestingTrend()")));
- (void)emulateEgvVeriedStepsRandom:(double)random __attribute__((swift_name("emulateEgvVeriedSteps(random:)")));
- (void)emulateEgvWaveRandom:(double)random __attribute__((swift_name("emulateEgvWave(random:)")));
- (void)emulateEgvWaveSafeRangeRandom:(double)random __attribute__((swift_name("emulateEgvWaveSafeRange(random:)")));
- (PSCSimulatedCgm *)getCgm __attribute__((swift_name("getCgm()")));
- (PSCEgvSample *)getCurrentEgvNowInSeconds:(int32_t)nowInSeconds __attribute__((swift_name("getCurrentEgv(nowInSeconds:)")));
- (PSCEgvSample *)getEgvs __attribute__((swift_name("getEgvs()")));
- (int16_t)getNextEgvChange1Random:(double)random __attribute__((swift_name("getNextEgvChange1(random:)")));
- (int16_t)getNextEgvChange3Random:(double)random __attribute__((swift_name("getNextEgvChange3(random:)")));
- (int64_t)getRepeatInterval __attribute__((swift_name("getRepeatInterval()")));
- (void)handleConditionsAtState2Cond:(PSCCgmConditionEnum *)cond __attribute__((swift_name("handleConditionsAtState2(cond:)")));
- (void)handleConditionsAtState4Cond:(PSCCgmConditionEnum *)cond isCgmActiveState:(BOOL)isCgmActiveState __attribute__((swift_name("handleConditionsAtState4(cond:isCgmActiveState:)")));
- (void)handleConditionsAtState5Cond:(PSCCgmConditionEnum *)cond __attribute__((swift_name("handleConditionsAtState5(cond:)")));
- (void)handleConditionsAtState6Cond:(PSCCgmConditionEnum *)cond __attribute__((swift_name("handleConditionsAtState6(cond:)")));
- (void)handleConditionsAtState8Cond:(PSCCgmConditionEnum *)cond __attribute__((swift_name("handleConditionsAtState8(cond:)")));
- (void)onCreateContext:(id _Nullable)context __attribute__((swift_name("onCreate(context:)")));
- (void)onStartCommandApplicationContext:(id _Nullable)applicationContext action:(NSString * _Nullable)action __attribute__((swift_name("onStartCommand(applicationContext:action:)")));
- (void)scheduleCgmPokeContext:(id _Nullable)context intervalInMillis:(int64_t)intervalInMillis __attribute__((swift_name("scheduleCgmPoke(context:intervalInMillis:)")));
- (void)stateCgmActive4 __attribute__((swift_name("stateCgmActive4()")));
- (void)stateCgmActiveLinkLoss6 __attribute__((swift_name("stateCgmActiveLinkLoss6()")));
- (void)stateCgmNoTxId1 __attribute__((swift_name("stateCgmNoTxId1()")));
- (void)stateCgmNone __attribute__((swift_name("stateCgmNone()")));
- (void)stateCgmPairing28 __attribute__((swift_name("stateCgmPairing28()")));
- (void)stateCgmScanStopped3 __attribute__((swift_name("stateCgmScanStopped3()")));
- (void)stateCgmSensorWarmingUp __attribute__((swift_name("stateCgmSensorWarmingUp()")));
- (void)stateCgmSignalLoss5 __attribute__((swift_name("stateCgmSignalLoss5()")));
- (void)stateCgmTxIdAuthFailed10 __attribute__((swift_name("stateCgmTxIdAuthFailed10()")));
- (void)stateCgmTxIdBleAuthError9 __attribute__((swift_name("stateCgmTxIdBleAuthError9()")));
- (void)stateCgmTxUnrecovableError7 __attribute__((swift_name("stateCgmTxUnrecovableError7()")));
- (void)testIfEgvTrendTurnDirectionRandom:(int32_t)random __attribute__((swift_name("testIfEgvTrendTurnDirection(random:)")));
- (void)updatePodActiveAlertsForAuditedAlertsFromAlertUtil __attribute__((swift_name("updatePodActiveAlertsForAuditedAlertsFromAlertUtil()")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PSCPodControl *podControl __attribute__((swift_name("podControl")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlgorithmService.Companion")))
@interface PSCAlgorithmServiceCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCEgvSample *)getLastEgvSample __attribute__((swift_name("getLastEgvSample()")));
- (int32_t)getLastEgvTimeStamp __attribute__((swift_name("getLastEgvTimeStamp()")));
- (void)holdEgvTimeForTestingHoldEgvTime:(BOOL)holdEgvTime __attribute__((swift_name("holdEgvTimeForTesting(holdEgvTime:)")));
- (void)overrideEgvEgv:(int16_t)egv __attribute__((swift_name("overrideEgv(egv:)")));
- (void)pokeContextArgument:(PSCContextArgument *)contextArgument logger:(PSCLogger *)logger __attribute__((swift_name("poke(contextArgument:logger:)")));
- (void)removeTestHoldingFeaturesLogger:(PSCLogger *)logger __attribute__((swift_name("removeTestHoldingFeatures(logger:)")));
- (void)resetEgvEmulateIndex __attribute__((swift_name("resetEgvEmulateIndex()")));
- (void)resetEgvEmulationStyle __attribute__((swift_name("resetEgvEmulationStyle()")));
- (void)setEgvEmulateTypeType:(int32_t)type __attribute__((swift_name("setEgvEmulateType(type:)")));
- (void)startPairingContextArgument:(PSCContextArgument *)contextArgument logger:(PSCLogger *)logger __attribute__((swift_name("startPairing(contextArgument:logger:)")));
- (void)startServiceForPokeImmediateContext:(id _Nullable)context __attribute__((swift_name("startServiceForPokeImmediate(context:)")));
- (void)stopPairingContextArgument:(PSCContextArgument *)contextArgument logger:(PSCLogger *)logger __attribute__((swift_name("stopPairing(contextArgument:logger:)")));
- (void)updateCgmServiceEgvAndTimeStampEgv:(int16_t)egv timeInSeconds:(int32_t)timeInSeconds logger:(PSCLogger *)logger __attribute__((swift_name("updateCgmServiceEgvAndTimeStamp(egv:timeInSeconds:logger:)")));
- (void)updateCgmServiceEgvSampleEgvSample:(PSCEgvSample *)egvSample logger:(PSCLogger *)logger __attribute__((swift_name("updateCgmServiceEgvSample(egvSample:logger:)")));
- (void)updateCgmserviceEgvEgv:(int16_t)egv __attribute__((swift_name("updateCgmserviceEgv(egv:)")));
@property (readonly) NSString *ACTION_CGM_POKE __attribute__((swift_name("ACTION_CGM_POKE")));
@property (readonly) NSString *ACTION_CGM_POKE_IMMEDIATE __attribute__((swift_name("ACTION_CGM_POKE_IMMEDIATE")));
@property (readonly) NSString *ACTION_START_CGM_PAIRING __attribute__((swift_name("ACTION_START_CGM_PAIRING")));
@property (readonly) NSString *ACTION_STOP_CGM_PAIRING __attribute__((swift_name("ACTION_STOP_CGM_PAIRING")));
@property (readonly) int64_t CGM_SEARCH_INTERVAL_MS __attribute__((swift_name("CGM_SEARCH_INTERVAL_MS")));
@property (readonly) int64_t CGM_SYNC_INTERVAL_MS __attribute__((swift_name("CGM_SYNC_INTERVAL_MS")));
@property (readonly) int16_t EGV_DECREMENT __attribute__((swift_name("EGV_DECREMENT")));
@property (readonly) int16_t EGV_INCREMENT __attribute__((swift_name("EGV_INCREMENT")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property PSCCgmAlgoStateEnum *cgmAlgoStateNotAvailable __attribute__((swift_name("cgmAlgoStateNotAvailable")));
@property PSCCgmTxStateEnum *cgmTxStateNotAvailable __attribute__((swift_name("cgmTxStateNotAvailable")));
@property int16_t currentEgv __attribute__((swift_name("currentEgv")));
@property int16_t delta __attribute__((swift_name("delta")));
@property PSCEgvEmulateType *egvEmulateType __attribute__((swift_name("egvEmulateType")));
@property int32_t egvHoldForTesting __attribute__((swift_name("egvHoldForTesting")));
@property int32_t egv_testing_index __attribute__((swift_name("egv_testing_index")));
@property (readonly) PSCKotlinIntArray *egv_testing_trend __attribute__((swift_name("egv_testing_trend")));
@end;

__attribute__((swift_name("AlgorithmServiceKMM")))
@interface PSCAlgorithmServiceKMM : PSCIOSTimerTaskExecutor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCAlgorithmService *)createAlgorithmServiceCommon __attribute__((swift_name("createAlgorithmServiceCommon()")));
- (BOOL)isPodSimInitialized __attribute__((swift_name("isPodSimInitialized()")));
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onTaskExecutedTask:(PSCIOSTimerTask *)task __attribute__((swift_name("onTaskExecuted(task:)")));
@property PSCCgmUtil *cgmUtil __attribute__((swift_name("cgmUtil")));
@property PSCAlgorithmService *common __attribute__((swift_name("common")));
@property PSCLogger *logger __attribute__((swift_name("logger")));
@property PSCPodControl *podControl __attribute__((swift_name("podControl")));
@property PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@property PSCRepository *repository __attribute__((swift_name("repository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlgorithmServiceKMM.Companion")))
@interface PSCAlgorithmServiceKMMCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)pokeContextArgument:(PSCContextArgument *)contextArgument isPodSimInitialized:(BOOL)isPodSimInitialized logger:(PSCLogger *)logger __attribute__((swift_name("poke(contextArgument:isPodSimInitialized:logger:)")));
- (void)startPairingContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("startPairing(contextArgument:)")));
- (void)startServiceForPokeImmediateAny:(id _Nullable)any __attribute__((swift_name("startServiceForPokeImmediate(any:)")));
- (void)stopPairingContextArgument:(PSCContextArgument *)contextArgument __attribute__((swift_name("stopPairing(contextArgument:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmAlgoStateEnum")))
@interface PSCCgmAlgoStateEnum : PSCKotlinEnum<PSCCgmAlgoStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCgmAlgoStateEnum *none __attribute__((swift_name("none")));
@property (class, readonly) PSCCgmAlgoStateEnum *stopped __attribute__((swift_name("stopped")));
@property (class, readonly) PSCCgmAlgoStateEnum *warmup __attribute__((swift_name("warmup")));
@property (class, readonly) PSCCgmAlgoStateEnum *notused3 __attribute__((swift_name("notused3")));
@property (class, readonly) PSCCgmAlgoStateEnum *firstoftwobgsrequired __attribute__((swift_name("firstoftwobgsrequired")));
@property (class, readonly) PSCCgmAlgoStateEnum *secondoftwobgsrequired __attribute__((swift_name("secondoftwobgsrequired")));
@property (class, readonly) PSCCgmAlgoStateEnum *incalibration __attribute__((swift_name("incalibration")));
@property (class, readonly) PSCCgmAlgoStateEnum *calibrationrequest __attribute__((swift_name("calibrationrequest")));
@property (class, readonly) PSCCgmAlgoStateEnum *calibrationerror0 __attribute__((swift_name("calibrationerror0")));
@property (class, readonly) PSCCgmAlgoStateEnum *calibrationerror1 __attribute__((swift_name("calibrationerror1")));
@property (class, readonly) PSCCgmAlgoStateEnum *calibrationlinearityfitfailure __attribute__((swift_name("calibrationlinearityfitfailure")));
@property (class, readonly) PSCCgmAlgoStateEnum *sensorfailedduetocountabberations __attribute__((swift_name("sensorfailedduetocountabberations")));
@property (class, readonly) PSCCgmAlgoStateEnum *sensorfailedduetoresidualabberations __attribute__((swift_name("sensorfailedduetoresidualabberations")));
@property (class, readonly) PSCCgmAlgoStateEnum *outofcalduetooutlier __attribute__((swift_name("outofcalduetooutlier")));
@property (class, readonly) PSCCgmAlgoStateEnum *outliercalibrationrequest __attribute__((swift_name("outliercalibrationrequest")));
@property (class, readonly) PSCCgmAlgoStateEnum *notused15 __attribute__((swift_name("notused15")));
@property (class, readonly) PSCCgmAlgoStateEnum *notused16 __attribute__((swift_name("notused16")));
@property (class, readonly) PSCCgmAlgoStateEnum *notused17 __attribute__((swift_name("notused17")));
@property (class, readonly) PSCCgmAlgoStateEnum *tempsensorfailure __attribute__((swift_name("tempsensorfailure")));
@property (class, readonly) PSCCgmAlgoStateEnum *sensorfailedduetoprogressivesensordecline __attribute__((swift_name("sensorfailedduetoprogressivesensordecline")));
@property (class, readonly) PSCCgmAlgoStateEnum *sensorfailedduetohighcountabberations __attribute__((swift_name("sensorfailedduetohighcountabberations")));
@property (class, readonly) PSCCgmAlgoStateEnum *sensorfailedduetolowcountabberations __attribute__((swift_name("sensorfailedduetolowcountabberations")));
@property (class, readonly) PSCCgmAlgoStateEnum *stoppedduetorestartdetection __attribute__((swift_name("stoppedduetorestartdetection")));
@property (class, readonly) PSCCgmAlgoStateEnum *notavailable __attribute__((swift_name("notavailable")));
+ (PSCKotlinArray<PSCCgmAlgoStateEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmAlgoStateEnum.Companion")))
@interface PSCCgmAlgoStateEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmAlgoStateEnum *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmConditionEnum")))
@interface PSCCgmConditionEnum : PSCKotlinEnum<PSCCgmConditionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCgmConditionEnum *timeout5min __attribute__((swift_name("timeout5min")));
@property (class, readonly) PSCCgmConditionEnum *noTxid __attribute__((swift_name("noTxid")));
@property (class, readonly) PSCCgmConditionEnum *validTxid __attribute__((swift_name("validTxid")));
@property (class, readonly) PSCCgmConditionEnum *connectTimeout __attribute__((swift_name("connectTimeout")));
@property (class, readonly) PSCCgmConditionEnum *cgmFound __attribute__((swift_name("cgmFound")));
@property (class, readonly) PSCCgmConditionEnum *cannotCoummunicateCgm __attribute__((swift_name("cannotCoummunicateCgm")));
@property (class, readonly) PSCCgmConditionEnum *noAdsFromCgm15Min __attribute__((swift_name("noAdsFromCgm15Min")));
@property (class, readonly) PSCCgmConditionEnum *txErrorFromCgm __attribute__((swift_name("txErrorFromCgm")));
@property (class, readonly) PSCCgmConditionEnum *txidAuthFail __attribute__((swift_name("txidAuthFail")));
@property (class, readonly) PSCCgmConditionEnum *cgmSucess __attribute__((swift_name("cgmSucess")));
@property (class, readonly) PSCCgmConditionEnum *validTxidBleAddr __attribute__((swift_name("validTxidBleAddr")));
@property (class, readonly) PSCCgmConditionEnum *cgmBleAuthFail __attribute__((swift_name("cgmBleAuthFail")));
@property (class, readonly) PSCCgmConditionEnum *cannotConnectFromAds __attribute__((swift_name("cannotConnectFromAds")));
@property (class, readonly) PSCCgmConditionEnum *cgmInvalidCond __attribute__((swift_name("cgmInvalidCond")));
+ (PSCKotlinArray<PSCCgmConditionEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int8_t cond __attribute__((swift_name("cond")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmConditionEnum.Companion")))
@interface PSCCgmConditionEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmConditionEnum *)getInstanceCond:(int32_t)cond __attribute__((swift_name("getInstance(cond:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmSpecialEgvEnum")))
@interface PSCCgmSpecialEgvEnum : PSCKotlinEnum<PSCCgmSpecialEgvEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCgmSpecialEgvEnum *sensornotactive __attribute__((swift_name("sensornotactive")));
@property (class, readonly) PSCCgmSpecialEgvEnum *sensoroutofcalibration __attribute__((swift_name("sensoroutofcalibration")));
@property (class, readonly) PSCCgmSpecialEgvEnum *countsaberration __attribute__((swift_name("countsaberration")));
@property (class, readonly) PSCCgmSpecialEgvEnum *absolutedeltaresidualaberration __attribute__((swift_name("absolutedeltaresidualaberration")));
@property (class, readonly) PSCCgmSpecialEgvEnum *poweraberration __attribute__((swift_name("poweraberration")));
@property (class, readonly) PSCCgmSpecialEgvEnum *asicissue __attribute__((swift_name("asicissue")));
@property (class, readonly) PSCCgmSpecialEgvEnum *egvLow __attribute__((swift_name("egvLow")));
@property (class, readonly) PSCCgmSpecialEgvEnum *egvHigh __attribute__((swift_name("egvHigh")));
@property (class, readonly) PSCCgmSpecialEgvEnum *notavailable __attribute__((swift_name("notavailable")));
+ (PSCKotlinArray<PSCCgmSpecialEgvEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmSpecialEgvEnum.Companion")))
@interface PSCCgmSpecialEgvEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmSpecialEgvEnum *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmStateEnum")))
@interface PSCCgmStateEnum : PSCKotlinEnum<PSCCgmStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCgmStateEnum *cgmnone __attribute__((swift_name("cgmnone")));
@property (class, readonly) PSCCgmStateEnum *cgmpairing __attribute__((swift_name("cgmpairing")));
@property (class, readonly) PSCCgmStateEnum *cgmwarmingup __attribute__((swift_name("cgmwarmingup")));
@property (class, readonly) PSCCgmStateEnum *cgmactive __attribute__((swift_name("cgmactive")));
@property (class, readonly) PSCCgmStateEnum *cgmnotxid __attribute__((swift_name("cgmnotxid")));
@property (class, readonly) PSCCgmStateEnum *cgmsignalloss __attribute__((swift_name("cgmsignalloss")));
@property (class, readonly) PSCCgmStateEnum *cgmscanstopped __attribute__((swift_name("cgmscanstopped")));
@property (class, readonly) PSCCgmStateEnum *cgmtxidautherror __attribute__((swift_name("cgmtxidautherror")));
@property (class, readonly) PSCCgmStateEnum *cgmactivelinkloss __attribute__((swift_name("cgmactivelinkloss")));
@property (class, readonly) PSCCgmStateEnum *cgmtxbleautherror __attribute__((swift_name("cgmtxbleautherror")));
@property (class, readonly) PSCCgmStateEnum *cgmtxunrecoverableerror __attribute__((swift_name("cgmtxunrecoverableerror")));
@property (class, readonly) PSCCgmStateEnum *cgmsensornotactive __attribute__((swift_name("cgmsensornotactive")));
@property (class, readonly) PSCCgmStateEnum *cgmsensoroutofcalibration __attribute__((swift_name("cgmsensoroutofcalibration")));
@property (class, readonly) PSCCgmStateEnum *cgmtemporarysensorfailure __attribute__((swift_name("cgmtemporarysensorfailure")));
@property (class, readonly) PSCCgmStateEnum *cgmpredictionunavailable __attribute__((swift_name("cgmpredictionunavailable")));
@property (class, readonly) PSCCgmStateEnum *cgminvalidstate __attribute__((swift_name("cgminvalidstate")));
+ (PSCKotlinArray<PSCCgmStateEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int8_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmStateEnum.Companion")))
@interface PSCCgmStateEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmStateEnum *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmTxStateEnum")))
@interface PSCCgmTxStateEnum : PSCKotlinEnum<PSCCgmTxStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCCgmTxStateEnum *success __attribute__((swift_name("success")));
@property (class, readonly) PSCCgmTxStateEnum *batterylow __attribute__((swift_name("batterylow")));
@property (class, readonly) PSCCgmTxStateEnum *unrecoverableerror __attribute__((swift_name("unrecoverableerror")));
@property (class, readonly) PSCCgmTxStateEnum *notavailable __attribute__((swift_name("notavailable")));
+ (PSCKotlinArray<PSCCgmTxStateEnum *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmTxStateEnum.Companion")))
@interface PSCCgmTxStateEnumCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmTxStateEnum *)getInstanceState:(int32_t)state __attribute__((swift_name("getInstance(state:)")));
@end;

__attribute__((swift_name("CgmUtil")))
@interface PSCCgmUtil : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (PSCCgmConditionEnum *)getNextCgmConditionPodCgmState:(int32_t)podCgmState cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("getNextCgmCondition(podCgmState:cgm:)")));
- (int16_t)getSpecialEgvByCgmAlgoStateCgmAlgoState:(PSCCgmAlgoStateEnum *)cgmAlgoState __attribute__((swift_name("getSpecialEgvByCgmAlgoState(cgmAlgoState:)")));
- (void)increase_cgm_signal_loss_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("increase_cgm_signal_loss_count(podUtil:)")));
- (void)increase_txid_ble_wait_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("increase_txid_ble_wait_count(podUtil:)")));
- (void)increase_txid_wait_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("increase_txid_wait_count(podUtil:)")));
- (BOOL)isCgmPersistantErrorNumberError_num:(int32_t)error_num __attribute__((swift_name("isCgmPersistantErrorNumber(error_num:)")));
- (NSString *)printCgmBleMacAddressPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("printCgmBleMacAddress(podUtil:)")));
- (void)reset2_txid_wait_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("reset2_txid_wait_count(podUtil:)")));
- (void)reset5_cgm_signal_loss_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("reset5_cgm_signal_loss_count(podUtil:)")));
- (void)reset8_txid_ble_wait_countPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("reset8_txid_ble_wait_count(podUtil:)")));
- (void)saveCgmStateState:(PSCCgmStateEnum *)state __attribute__((swift_name("saveCgmState(state:)")));
- (PSCSimulatedPod *)setBasalLimitedModeLimitedMode:(int32_t)limitedMode simulatedPod:(PSCSimulatedPod *)simulatedPod __attribute__((swift_name("setBasalLimitedMode(limitedMode:simulatedPod:)")));
- (void)setCgmBleMacAddressBle_address:(NSString *)ble_address __attribute__((swift_name("setCgmBleMacAddress(ble_address:)")));
- (void)updateMissingBleMacAddressPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("updateMissingBleMacAddress(podUtil:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmUtil.Companion")))
@interface PSCCgmUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCCgmUtil *)getInstanceRepository:(PSCRepository *)repository __attribute__((swift_name("getInstance(repository:)")));
@property (readonly) NSString *C_SEP __attribute__((swift_name("C_SEP")));
@property (readonly) NSString *S_SEP __attribute__((swift_name("S_SEP")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property PSCRepository *repository __attribute__((swift_name("repository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EgvSample")))
@interface PSCEgvSample : PSCBase
- (instancetype)initWithEgv:(int16_t)egv timeStamp:(int32_t)timeStamp __attribute__((swift_name("init(egv:timeStamp:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int16_t egv __attribute__((swift_name("egv")));
@property (readonly) int32_t timeStamp __attribute__((swift_name("timeStamp")));
@end;

__attribute__((swift_name("NudgeController")))
@interface PSCNudgeController : PSCBase
- (instancetype)initWithNudgeQueue:(PSCPodNudgeQueue *)nudgeQueue logger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(nudgeQueue:logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (id<PSCReaktivePublishSubject>)getNudgeSubject __attribute__((swift_name("getNudgeSubject()")));
- (void)nudgeAlarmScheduler:(id<PSCReaktiveScheduler>)scheduler statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("nudgeAlarm(scheduler:statusPageGenerator:)")));
- (void)nudgeAlertScheduler:(id<PSCReaktiveScheduler>)scheduler statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("nudgeAlert(scheduler:statusPageGenerator:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NudgeController.Companion")))
@interface PSCNudgeControllerCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("AlertUtil")))
@interface PSCAlertUtil : PSCBase
- (instancetype)initWithRepository:(PSCRepository *)repository logger:(PSCLogger *)logger __attribute__((swift_name("init(repository:logger:)"))) __attribute__((objc_designated_initializer));
- (void)clearAlertIClearMask:(int8_t)iClearMask pod:(PSCSimulatedPod *)pod __attribute__((swift_name("clearAlert(iClearMask:pod:)")));
- (int8_t)getLowReservoirAlertMaskPod:(PSCSimulatedPod *)pod reservoirLevelChanged:(BOOL)reservoirLevelChanged __attribute__((swift_name("getLowReservoirAlertMask(pod:reservoirLevelChanged:)")));
- (int8_t)getPodAlertsAfterPodRealmObjectChangedPod:(PSCSimulatedPod *)pod reservoirLevelChanged:(BOOL)reservoirLevelChanged podControl:(PSCPodControl *)podControl __attribute__((swift_name("getPodAlertsAfterPodRealmObjectChanged(pod:reservoirLevelChanged:podControl:)")));
- (NSArray<PSCProgrammedAlert *> *)parseProgramAlertCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseProgramAlertCommand(command:)")));
- (void)turnOffAuditAlertMaskForLowReservoirSimulatedPod:(PSCSimulatedPod *)simulatedPod alertMask:(int8_t)alertMask __attribute__((swift_name("turnOffAuditAlertMaskForLowReservoir(simulatedPod:alertMask:)")));
- (void)updatePodActiveAlertsForAuditedAlerts __attribute__((swift_name("updatePodActiveAlertsForAuditedAlerts()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertUtil.Companion")))
@interface PSCAlertUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCAlertUtil *)getInstanceRepository:(PSCRepository *)repository __attribute__((swift_name("getInstance(repository:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteOperationsUtil")))
@interface PSCByteOperationsUtil : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)byteOperationsUtil __attribute__((swift_name("init()")));
- (PSCKotlinByteArray *)arrayCopySource:(PSCKotlinByteArray *)source sourceStartIndex:(int32_t)sourceStartIndex length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("arrayCopy(source:sourceStartIndex:length:destinationOffset:)")));
- (NSString *)byteArrayToPrintableBytes:(PSCKotlinByteArray *)bytes __attribute__((swift_name("byteArrayToPrintable(bytes:)")));
- (NSString *)byteBufferToBinaryByteBuffer:(PSCKMMByteBuffer *)byteBuffer __attribute__((swift_name("byteBufferToBinary(byteBuffer:)")));
- (PSCKotlinByteArray *)constructCsddMessagePodId:(int32_t)podId flags:(int16_t)flags commandResponse:(PSCKotlinByteArray *)commandResponse __attribute__((swift_name("constructCsddMessage(podId:flags:commandResponse:)")));
- (PSCKotlinByteArray *)constructLengthBytesResponseSize:(int16_t)responseSize __attribute__((swift_name("constructLengthBytes(responseSize:)")));
- (NSString *)debugPrintByteArrayData:(PSCKotlinByteArray *)data __attribute__((swift_name("debugPrintByteArray(data:)")));
- (NSString *)formatByteArrayToStringByteArray:(PSCKotlinByteArray *)byteArray __attribute__((swift_name("formatByteArrayToString(byteArray:)")));
- (PSCKotlinByteArray *)formatStringToByteArrayString:(NSString *)string __attribute__((swift_name("formatStringToByteArray(string:)")));
- (PSCKotlinByteArray *)getAllEightAlertValuesAlertMask:(int8_t)alertMask podActivationTime:(int16_t)podActivationTime __attribute__((swift_name("getAllEightAlertValues(alertMask:podActivationTime:)")));
- (PSCKotlinByteArray *)getBytesFromStringString:(NSString *)string __attribute__((swift_name("getBytesFromString(string:)")));
- (int16_t)getCrcResponse:(PSCKotlinByteArray *)response __attribute__((swift_name("getCrc(response:)")));
- (PSCKotlinByteArray *)getTwiHeaderCsdd:(PSCKotlinByteArray *)csdd __attribute__((swift_name("getTwiHeader(csdd:)")));
- (int32_t)getUidFromCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("getUidFromCommand(command:)")));
- (NSString *)longToBinaryNum:(int64_t)num __attribute__((swift_name("longToBinary(num:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteResponseUtil")))
@interface PSCByteResponseUtil : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)byteResponseUtil __attribute__((swift_name("init()")));
- (PSCKotlinByteArray *)createAlarmPageCommandCode:(int8_t)commandCode field1:(int8_t)field1 statusPage:(int8_t)statusPage podState:(int8_t)podState programStatus:(int8_t)programStatus bolusPulsesRemaining:(int16_t)bolusPulsesRemaining seqNumber:(int8_t)seqNumber totalPulsesDelivered:(int16_t)totalPulsesDelivered alarmValue:(int8_t)alarmValue alarmTimeSincePodActivationMins:(int16_t)alarmTimeSincePodActivationMins reservoirPulsesRemaining:(int16_t)reservoirPulsesRemaining activationTimeForAlarmPage2:(int16_t)activationTimeForAlarmPage2 activeAlertsMask:(int8_t)activeAlertsMask miscFlags:(int8_t)miscFlags alarmInfo:(int8_t)alarmInfo rssiRxlg:(int8_t)rssiRxlg podState1:(int8_t)podState1 field2:(int16_t)field2 __attribute__((swift_name("createAlarmPage(commandCode:field1:statusPage:podState:programStatus:bolusPulsesRemaining:seqNumber:totalPulsesDelivered:alarmValue:alarmTimeSincePodActivationMins:reservoirPulsesRemaining:activationTimeForAlarmPage2:activeAlertsMask:miscFlags:alarmInfo:rssiRxlg:podState1:field2:)")));
- (PSCKotlinByteArray *)createAlertPageCommandCode:(int8_t)commandCode field1:(int8_t)field1 statusPage:(int8_t)statusPage occlusionAlertTime:(int16_t)occlusionAlertTime alertValues:(PSCKotlinByteArray *)alertValues __attribute__((swift_name("createAlertPage(commandCode:field1:statusPage:occlusionAlertTime:alertValues:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CmdUtil")))
@interface PSCCmdUtil : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cmdUtil __attribute__((swift_name("init()")));
- (BOOL)isCommandWithErrorCodeReturnCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isCommandWithErrorCodeReturn(cmd:)")));
- (BOOL)isGetCommandCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isGetCommand(cmd:)")));
- (BOOL)isLegacyCommandCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isLegacyCommand(cmd:)")));
- (BOOL)isLegacyGetCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isLegacyGet(cmd:)")));
- (BOOL)isLegacySetCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isLegacySet(cmd:)")));
- (BOOL)isNotLegacyCommandCmd:(NSString *)cmd __attribute__((swift_name("isNotLegacyCommand(cmd:)")));
- (BOOL)isSetCommandCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isSetCommand(cmd:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandName")))
@interface PSCCommandName : PSCBase
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podCommUtil:podUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getCommandNameFromOpCodeOpCode:(int8_t)opCode __attribute__((swift_name("getCommandNameFromOpCode(opCode:)")));
- (NSString * _Nullable)getLegacyCommandFromPayloadCommandPayload:(PSCKotlinByteArray * _Nullable)commandPayload __attribute__((swift_name("getLegacyCommandFromPayload(commandPayload:)")));
- (NSString * _Nullable)getLegacyCommandFromPayloadforPrintCommandPayload:(PSCKotlinByteArray * _Nullable)commandPayload __attribute__((swift_name("getLegacyCommandFromPayloadforPrint(commandPayload:)")));
- (NSString * _Nullable)getTwiCommandNameCmdPrefix:(NSString * _Nullable)cmdPrefix __attribute__((swift_name("getTwiCommandName(cmdPrefix:)")));
- (NSString * _Nullable)getTwiGetCommandNameCmdPrefix:(NSString * _Nullable)cmdPrefix __attribute__((swift_name("getTwiGetCommandName(cmdPrefix:)")));
- (PSCMutableDictionary<PSCByte *, NSString *> *)doInitLegacyCmdMap __attribute__((swift_name("doInitLegacyCmdMap()")));
- (PSCMutableDictionary<NSString *, NSString *> *)doInitTwiCmdNameMap __attribute__((swift_name("doInitTwiCmdNameMap()")));
- (BOOL)isIPCommandCmdName:(NSString *)cmdName __attribute__((swift_name("isIPCommand(cmdName:)")));
@property PSCMutableDictionary<NSString *, NSString *> *cmdNameMap __attribute__((swift_name("cmdNameMap")));
@property PSCMutableDictionary<PSCByte *, NSString *> *legacyCmdMap __attribute__((swift_name("legacyCmdMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandName.Companion")))
@interface PSCCommandNameCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("CommandParser")))
@interface PSCCommandParser : PSCBase
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger executorFactory:(PSCExecutorFactory *)executorFactory __attribute__((swift_name("init(podCommUtil:podUtil:logger:executorFactory:)"))) __attribute__((objc_designated_initializer));
- (NSArray<PSCTwiCommand *> *)parseTwiCommandsTwiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("parseTwiCommands(twiPacket:)")));
@property (readonly) PSCCommandName *commandName __attribute__((swift_name("commandName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandParser.Companion")))
@interface PSCCommandParserCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionUtil")))
@interface PSCConversionUtil : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conversionUtil __attribute__((swift_name("init()")));
- (NSString *)byteToBitsCh:(int8_t)ch __attribute__((swift_name("byteToBits(ch:)")));
- (NSString *)bytesToBinaryBytes:(PSCKotlinByteArray *)bytes __attribute__((swift_name("bytesToBinary(bytes:)")));
- (unichar)convertToDigitValue:(int32_t)value __attribute__((swift_name("convertToDigit(value:)")));
- (PSCKotlinByteArray *)formatToByteArray:(NSString *)receiver __attribute__((swift_name("formatToByteArray(_:)")));
- (NSString *)formatToString:(PSCKotlinByteArray *)receiver __attribute__((swift_name("formatToString(_:)")));
- (PSCKotlinByteArray *)hexToByteArray:(NSString *)receiver __attribute__((swift_name("hexToByteArray(_:)")));
- (NSString *)toHexString:(PSCKotlinByteArray *)receiver __attribute__((swift_name("toHexString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CsddHeader")))
@interface PSCCsddHeader : PSCBase
- (instancetype)initWithCommand:(PSCKotlinByteArray * _Nullable)command logger:(PSCLogger *)logger __attribute__((swift_name("init(command:logger:)"))) __attribute__((objc_designated_initializer));
@property BOOL ack __attribute__((swift_name("ack")));
@property int32_t dataLength __attribute__((swift_name("dataLength")));
@property int16_t flags __attribute__((swift_name("flags")));
@property BOOL mctf __attribute__((swift_name("mctf")));
@property int32_t podId __attribute__((swift_name("podId")));
@property int8_t seqNumber __attribute__((swift_name("seqNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CsddHeader.Companion")))
@interface PSCCsddHeaderCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSByteBuffer")))
@interface PSCIOSByteBuffer : PSCBase
- (instancetype)initWithCapacity:(uint64_t)capacity __attribute__((swift_name("init(capacity:)"))) __attribute__((objc_designated_initializer));
- (NSData *)buffer __attribute__((swift_name("buffer()")));
- (void)doCopyDst:(PSCIOSByteBuffer *)dst dstLength:(uint64_t)dstLength __attribute__((swift_name("doCopy(dst:dstLength:)")));
- (PSCIOSByteBuffer *)get __attribute__((swift_name("get()")));
- (int16_t)getShort __attribute__((swift_name("getShort()")));
- (BOOL)hasRemaining __attribute__((swift_name("hasRemaining()")));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (PSCIOSByteBuffer * _Nullable)putDataData:(NSData *)data error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("putData(data:)")));
- (uint64_t)remaining __attribute__((swift_name("remaining()")));

/**
 @note This method converts instances of IllegalArgumentException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)setPositionPosition:(uint64_t)position error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setPosition(position:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSByteBuffer.Companion")))
@interface PSCIOSByteBufferCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCIOSByteBuffer *)wrapTwiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("wrap(twiPacket:)")));
- (PSCIOSByteBuffer *)wrapData:(NSData *)data __attribute__((swift_name("wrap(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSCoroutineScope")))
@interface PSCIOSCoroutineScope : PSCBase <PSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithMainContext:(id<PSCKotlinCoroutineContext>)mainContext tag:(NSString *)tag logger:(PSCLogger * _Nullable)logger __attribute__((swift_name("init(mainContext:tag:logger:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));
@property (readonly) id<PSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSTimerTask")))
@interface PSCIOSTimerTask : PSCBase
- (instancetype)initWithAction:(NSString *)action interval:(double)interval extraInfo:(PSCMutableDictionary<NSString *, id> * _Nullable)extraInfo __attribute__((swift_name("init(action:interval:extraInfo:)"))) __attribute__((objc_designated_initializer));
- (double)getDiffTimeIntervalSinceExecuteTime __attribute__((swift_name("getDiffTimeIntervalSinceExecuteTime()")));
- (void)startTimerInterval:(double)interval target:(id)target selector:(void * _Nullable)selector __attribute__((swift_name("startTimer(interval:target:selector:)")));
- (void)stopTimer __attribute__((swift_name("stopTimer()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property PSCMutableDictionary<NSString *, id> *extraInfo __attribute__((swift_name("extraInfo")));
@property (readonly) double interval __attribute__((swift_name("interval")));
@end;

__attribute__((swift_name("IOSTimerTaskExecutorOnTimerExecuted")))
@protocol PSCIOSTimerTaskExecutorOnTimerExecuted
@required
- (void)onExecutedTimer:(NSTimer *)timer __attribute__((swift_name("onExecuted(timer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsuCrcHelper")))
@interface PSCInsuCrcHelper : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)insuCrcHelper __attribute__((swift_name("init()")));
- (int16_t)calcMessageCRC16Buffer:(PSCKotlinByteArray *)buffer __attribute__((swift_name("calcMessageCRC16(buffer:)")));
- (int32_t)pumpComputeChecksumBuffer:(PSCKotlinShortArray *)buffer __attribute__((swift_name("pumpComputeChecksum(buffer:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinCommandUtil")))
@interface PSCInsulinCommandUtil : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (int32_t)getUnsignedShortToIntBb:(PSCKMMByteBuffer *)bb __attribute__((swift_name("getUnsignedShortToInt(bb:)")));
- (PSCBasal * _Nullable)parseBasalCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseBasal(command:)")));
- (PSCBolus * _Nullable)parseBolusCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseBolus(command:)")));
- (PSCInsulinCommand * _Nullable)parseInterlockCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseInterlockCommand(command:)")));
- (PSCTempBasal * _Nullable)parseTempBasalCommand:(PSCKotlinByteArray *)command currentTimeInMillis:(int64_t)currentTimeInMillis __attribute__((swift_name("parseTempBasal(command:currentTimeInMillis:)")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinCommandUtil.Companion")))
@interface PSCInsulinCommandUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMByteBuffer")))
@interface PSCKMMByteBuffer : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKMMByteBuffer *)create __attribute__((swift_name("create()")));
- (int8_t)get __attribute__((swift_name("get()")));
- (PSCKotlinByteArray *)getBytesLen:(int32_t)len __attribute__((swift_name("getBytes(len:)")));
- (int32_t)getInt __attribute__((swift_name("getInt()")));
- (int64_t)getLong __attribute__((swift_name("getLong()")));
- (int16_t)getShort __attribute__((swift_name("getShort()")));
- (int32_t)limit __attribute__((swift_name("limit()")));
- (void)putByte:(int8_t)byte __attribute__((swift_name("put(byte:)")));
- (void)putBytesBytes:(PSCKotlinByteArray *)bytes __attribute__((swift_name("putBytes(bytes:)")));
- (void)putIntNumber:(int32_t)number __attribute__((swift_name("putInt(number:)")));
- (void)putLongNumber:(int64_t)number __attribute__((swift_name("putLong(number:)")));
- (void)putShortNumber:(int16_t)number __attribute__((swift_name("putShort(number:)")));
- (int32_t)remaining __attribute__((swift_name("remaining()")));
- (void)rewind __attribute__((swift_name("rewind()")));
- (PSCKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (PSCKMMByteBuffer *)wrapTarget:(PSCKotlinByteArray *)target __attribute__((swift_name("wrap(target:)")));
@property PSCKotlinByteArray *buffer __attribute__((swift_name("buffer")));
@property int32_t endIndex __attribute__((swift_name("endIndex")));
@property int32_t position __attribute__((swift_name("position")));
@property int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Logger")))
@interface PSCLogger : PSCBase
- (instancetype)initWithPlatformLogger:(PSCPlatformSpecificLogger *)platformLogger processInfo:(PSCProcess *)processInfo repository:(PSCRepository *)repository dateProvider:(PSCDateProvider *)dateProvider __attribute__((swift_name("init(platformLogger:processInfo:repository:dateProvider:)"))) __attribute__((objc_designated_initializer));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)vTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("v(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol PSCKotlinIterable
@required
- (id<PSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableWeakList")))
@interface PSCMutableWeakList<T> : PSCBase <PSCKotlinIterable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addItem:(T)item __attribute__((swift_name("add(item:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BOOL)hasItem:(T)item __attribute__((swift_name("has(item:)")));
- (int32_t)indexOfItem:(T)item __attribute__((swift_name("indexOf(item:)")));
- (id<PSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)removeItem:(T)item __attribute__((swift_name("remove(item:)")));
- (void)removeIndex:(int32_t)index __attribute__((swift_name("remove(index:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@end;

__attribute__((swift_name("PodCommUtil")))
@interface PSCPodCommUtil : PSCBase
- (instancetype)initWithPodControl:(PSCPodControl *)podControl podUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("init(podControl:podUtil:logger:statusPageGenerator:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)constructCsddMessageFromResponseCommandResponse:(PSCKotlinByteArray *)commandResponse podId:(int32_t)podId lastSeqNum:(int8_t)lastSeqNum __attribute__((swift_name("constructCsddMessageFromResponse(commandResponse:podId:lastSeqNum:)")));
- (PSCKotlinByteArray *)constructTwiPacketFromCsddResponseCsdd:(PSCKotlinByteArray *)csdd __attribute__((swift_name("constructTwiPacketFromCsddResponse(csdd:)")));
- (PSCKotlinByteArray *)createAsciiTwiPacketPrefix:(NSString *)prefix response:(PSCKotlinByteArray *)response __attribute__((swift_name("createAsciiTwiPacket(prefix:response:)")));
- (PSCKotlinByteArray *)createBinaryTwiPacketPrefix:(NSString *)prefix response:(PSCKotlinByteArray *)response __attribute__((swift_name("createBinaryTwiPacket(prefix:response:)")));
- (PSCKotlinByteArray *)createTwiPacketPrefix:(NSString *)prefix isBinary:(BOOL)isBinary response:(PSCKotlinByteArray *)response __attribute__((swift_name("createTwiPacket(prefix:isBinary:response:)")));
- (NSString *)formatBooleanToIsActiveStringValue:(BOOL)value __attribute__((swift_name("formatBooleanToIsActiveString(value:)")));
- (NSString *)formatByteToIsSuccessStringValue:(int8_t)value __attribute__((swift_name("formatByteToIsSuccessString(value:)")));
- (NSString *)formatMillisToStringWithDefaultTimeZoneMillis:(int64_t)millis __attribute__((swift_name("formatMillisToStringWithDefaultTimeZone(millis:)")));
- (PSCKotlinByteArray * _Nullable)generateAlteredResponseTwiPacketFromCommandNameCmdPrefix:(NSString *)cmdPrefix hexResponse:(NSString * _Nullable)hexResponse executorFactory:(PSCExecutorFactory *)executorFactory __attribute__((swift_name("generateAlteredResponseTwiPacketFromCommandName(cmdPrefix:hexResponse:executorFactory:)")));
- (PSCKotlinByteArray *)generateNackOpcode:(int8_t)opcode __attribute__((swift_name("generateNack(opcode:)")));
- (PSCKotlinByteArray *)getAlteredLegacyCommandReponseWithCSDDMessageCsdd:(PSCKotlinByteArray *)csdd alteredReponseHex:(NSString *)alteredReponseHex __attribute__((swift_name("getAlteredLegacyCommandReponseWithCSDDMessage(csdd:alteredReponseHex:)")));
- (PSCKotlinByteArray *)getCommandFromCsddMessageCsddMessage:(PSCKotlinByteArray *)csddMessage __attribute__((swift_name("getCommandFromCsddMessage(csddMessage:)")));
- (PSCKotlinByteArray *)getCommandFromTwiMessageTwiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("getCommandFromTwiMessage(twiPacket:)")));
- (int16_t)getCrcResponse:(PSCKotlinByteArray *)response __attribute__((swift_name("getCrc(response:)")));
- (PSCKotlinByteArray *)getCsddFromTwiMessageTwiPacket:(PSCKotlinByteArray *)twiPacket __attribute__((swift_name("getCsddFromTwiMessage(twiPacket:)")));
- (int16_t)getFlagsMessageLen:(int32_t)messageLen lastSeqNum:(int8_t)lastSeqNum __attribute__((swift_name("getFlags(messageLen:lastSeqNum:)")));
- (PSCCsddHeader *)getHeaderFromCsddMessageCsddMessage:(PSCKotlinByteArray * _Nullable)csddMessage __attribute__((swift_name("getHeaderFromCsddMessage(csddMessage:)")));
- (PSCKotlinByteArray * _Nullable)getNakForCommandCmd:(NSString * _Nullable)cmd __attribute__((swift_name("getNakForCommand(cmd:)")));
- (int8_t)getOpCodeFromCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("getOpCodeFromCommand(command:)")));
- (int8_t)getOpcodeFromCsddMessageCsddMsg:(PSCKotlinByteArray * _Nullable)csddMsg __attribute__((swift_name("getOpcodeFromCsddMessage(csddMsg:)")));
- (PSCProgramStatus *)getProgramStatusParsedBasal:(int32_t)parsedBasal parsedTempBasal:(int32_t)parsedTempBasal parsedImmediateBolus:(int32_t)parsedImmediateBolus parsedExtendedBolus:(int32_t)parsedExtendedBolus __attribute__((swift_name("getProgramStatus(parsedBasal:parsedTempBasal:parsedImmediateBolus:parsedExtendedBolus:)")));
- (NSString *)getResponseStringFromCommandStringCmd:(NSString *)cmd __attribute__((swift_name("getResponseStringFromCommandString(cmd:)")));
- (PSCKotlinByteArray * _Nullable)getStatusPageCsddFromCommandCommand:(PSCKotlinByteArray * _Nullable)command __attribute__((swift_name("getStatusPageCsddFromCommand(command:)")));
- (PSCKotlinByteArray *)getTwiHeaderCsdd:(PSCKotlinByteArray *)csdd __attribute__((swift_name("getTwiHeader(csdd:)")));
- (PSCKotlinByteArray *)getTwiMessageBytes:(PSCKotlinByteArray *)bytes addPrefix:(BOOL)addPrefix addSufix:(BOOL)addSufix toPod:(BOOL)toPod __attribute__((swift_name("getTwiMessage(bytes:addPrefix:addSufix:toPod:)")));
- (BOOL)isIpCommandOpCodeOpcode:(int8_t)opcode __attribute__((swift_name("isIpCommandOpCode(opcode:)")));
- (void)parseBasalCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseBasalCommand(command:)")));
- (void)parseTempBasalCommandCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("parseTempBasalCommand(command:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodCommUtil.Companion")))
@interface PSCPodCommUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("PodUtil")))
@interface PSCPodUtil : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)cleanSimData __attribute__((swift_name("cleanSimData()")));
- (void)cleanSimPod __attribute__((swift_name("cleanSimPod()")));
- (PSCSimulatedCgm *)getCgmNonStatic __attribute__((swift_name("getCgmNonStatic()")));
- (int64_t)getDelayBetweenBolusPulsesInMs __attribute__((swift_name("getDelayBetweenBolusPulsesInMs()")));
- (int32_t)getOrGeneratePodSeqNumber __attribute__((swift_name("getOrGeneratePodSeqNumber()")));
- (NSString *)getPairingId __attribute__((swift_name("getPairingId()")));
- (PSCPodLotTypeEnum *)getPodLotTypePodLotTypeEnum:(PSCPodLotTypeEnum *)podLotTypeEnum __attribute__((swift_name("getPodLotType(podLotTypeEnum:)")));
- (PSCSimulatedPod *)getPodNonStatic __attribute__((swift_name("getPodNonStatic()")));
- (PSCPodState * _Nullable)getPodState __attribute__((swift_name("getPodState()")));
- (int8_t)getProductIdPid:(int8_t)pid __attribute__((swift_name("getProductId(pid:)")));
- (PSCSimData *)getSimData __attribute__((swift_name("getSimData()")));
- (int32_t)getUid __attribute__((swift_name("getUid()")));
- (PSCSimulatedCgm *)doInitCgm __attribute__((swift_name("doInitCgm()")));
- (PSCSimulatedPod *)doInitPod __attribute__((swift_name("doInitPod()")));
- (PSCSimData *)doInitSimData __attribute__((swift_name("doInitSimData()")));
- (BOOL)isInsulinCommandOpcode:(int8_t)opcode __attribute__((swift_name("isInsulinCommand(opcode:)")));
- (BOOL)isPdmDash __attribute__((swift_name("isPdmDash()")));
- (BOOL)isTxIdAvailable __attribute__((swift_name("isTxIdAvailable()")));
- (void)printCallStackLabel:(NSString *)label __attribute__((swift_name("printCallStack(label:)")));
- (void)resetCgm __attribute__((swift_name("resetCgm()")));
- (void)resetPodNonStatic __attribute__((swift_name("resetPodNonStatic()")));
- (void)saveCgmCgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("saveCgm(cgm:)")));
- (void)saveLastReceivedSequenceNumberSeqNumber:(int8_t)seqNumber opCode:(int8_t)opCode __attribute__((swift_name("saveLastReceivedSequenceNumber(seqNumber:opCode:)")));
- (void)saveLotSeqNumOnPodNewLotSeqNum:(int32_t)newLotSeqNum __attribute__((swift_name("saveLotSeqNumOnPod(newLotSeqNum:)")));
- (void)saveParametersOnNonStaticPodParameters:(PSCPodParameters * _Nullable)parameters __attribute__((swift_name("saveParametersOnNonStaticPod(parameters:)")));
- (void)saveParametersOnSimDataParameters:(PSCSimDataParameters *)parameters __attribute__((swift_name("saveParametersOnSimData(parameters:)")));
- (void)savePodPod:(PSCSimulatedPod *)pod __attribute__((swift_name("savePod(pod:)")));
- (void)savePodStatePodState:(PSCPodState * _Nullable)podState __attribute__((swift_name("savePodState(podState:)")));
- (void)saveSimDataSimData:(PSCSimData *)simData __attribute__((swift_name("saveSimData(simData:)")));
- (BOOL)setCommandSequenceNumberOnPodOpcode:(int8_t)opcode sequenceNumber:(int8_t)sequenceNumber __attribute__((swift_name("setCommandSequenceNumberOnPod(opcode:sequenceNumber:)")));
- (PSCSimulatedPod *)setUidNewUid:(int32_t)newUid __attribute__((swift_name("setUid(newUid:)")));
- (void)triggeredStopProgram __attribute__((swift_name("triggeredStopProgram()")));
- (void)updatePodTimeStamp0CurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("updatePodTimeStamp0(currentTimeInSeconds:)")));
@property (readonly) int8_t pdmType __attribute__((swift_name("pdmType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodUtil.Companion")))
@interface PSCPodUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (void)disablePodSim __attribute__((swift_name("disablePodSim()")));
- (BOOL)enableOrDisablePodSimContext:(id _Nullable)context enable:(BOOL)enable __attribute__((swift_name("enableOrDisablePodSim(context:enable:)")));
- (void)enablePodSimContext:(id _Nullable)context __attribute__((swift_name("enablePodSim(context:)")));
- (PSCSimulatedCgm * _Nullable)getCgm __attribute__((swift_name("getCgm()"))) __attribute__((deprecated("Should use getCgmNonStatic()")));
- (PSCPodUtil *)getInstanceRepository:(PSCRepository *)repository __attribute__((swift_name("getInstance(repository:)")));
- (PSCSimulatedPod * _Nullable)getPod __attribute__((swift_name("getPod()"))) __attribute__((deprecated("Should use getPodNonStatic()")));
- (BOOL)isPodSimEnabled __attribute__((swift_name("isPodSimEnabled()")));
- (int32_t)nextEgvEmulateStyleLogger:(PSCLogger *)logger repository:(PSCRepository *)repository __attribute__((swift_name("nextEgvEmulateStyle(logger:repository:)")));
- (NSString *)nextEgvEmulateStyleName __attribute__((swift_name("nextEgvEmulateStyleName()")));
- (void)resetPod __attribute__((swift_name("resetPod()"))) __attribute__((deprecated("Should use resetPodNonStatic()")));
- (void)saveParametersOnPodBasalParameters:(PSCPodParameters *)basalParameters __attribute__((swift_name("saveParametersOnPod(basalParameters:)"))) __attribute__((deprecated("Should use saveParametersOnNonStaticPod()")));
- (void)setTwiSimConnectErrorErrorTimes:(int32_t)errorTimes __attribute__((swift_name("setTwiSimConnectError(errorTimes:)")));
- (void)setTwiSimConnectErrorErrorCode:(int32_t)errorCode errorTimes:(int32_t)errorTimes __attribute__((swift_name("setTwiSimConnectError(errorCode:errorTimes:)")));
- (void)startPodSimInitContext:(id _Nullable)context __attribute__((swift_name("startPodSimInit(context:)")));
- (void)stopPodSimInit __attribute__((swift_name("stopPodSimInit()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property PSCLogger *logger __attribute__((swift_name("logger")));
@property PSCRepository *repository __attribute__((swift_name("repository")));
@property PSCTwiSimConnectError *twiSimConnectError __attribute__((swift_name("twiSimConnectError")));
@end;

__attribute__((swift_name("SharedPrefsUtil")))
@interface PSCSharedPrefsUtil : PSCBase
- (instancetype)initWithPreferences:(PSCPreferences * _Nullable)preferences __attribute__((swift_name("init(preferences:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("get(key:defaultValue:)")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (int32_t)getIntSharedPreferenceKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getIntSharedPreference(key:defaultValue:)")));
- (void)putIntSharedPreferenceKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putIntSharedPreference(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("set(key:value:)")));
- (void)setBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("setBoolean(key:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedPrefsUtil.Companion")))
@interface PSCSharedPrefsUtilCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimUtil")))
@interface PSCSimUtil : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)simUtil __attribute__((swift_name("init()")));
- (int64_t)daysToSecondsDays:(int32_t)days __attribute__((swift_name("daysToSeconds(days:)")));
- (NSString *)getCallerStack __attribute__((swift_name("getCallerStack()")));
- (NSString *)getChannelNameChannel:(int32_t)channel __attribute__((swift_name("getChannelName(channel:)")));
- (NSString * _Nullable)getCommandWithoutECmd:(NSString * _Nullable)cmd __attribute__((swift_name("getCommandWithoutE(cmd:)")));
- (int64_t)getCurrentTimeInMillis __attribute__((swift_name("getCurrentTimeInMillis()")));
- (int32_t)getCurrentTimeInSeconds __attribute__((swift_name("getCurrentTimeInSeconds()")));
- (PSCKotlinx_datetimeLocalDateTime *)getLocalDate __attribute__((swift_name("getLocalDate()")));
- (int32_t)getPulsesFromMicroLiterResLevelInMicroLiter:(int32_t)resLevelInMicroLiter __attribute__((swift_name("getPulsesFromMicroLiter(resLevelInMicroLiter:)")));
- (int32_t)getTimeOfDayInMillis __attribute__((swift_name("getTimeOfDayInMillis()")));
- (int32_t)hoursToMinutesHours:(int32_t)hours __attribute__((swift_name("hoursToMinutes(hours:)")));
- (int32_t)hoursToSecondsHours:(int32_t)hours __attribute__((swift_name("hoursToSeconds(hours:)")));
- (int32_t)millisToSecondsMillis:(int64_t)millis __attribute__((swift_name("millisToSeconds(millis:)")));
- (int64_t)secondsToMillisSeconds:(int32_t)seconds __attribute__((swift_name("secondsToMillis(seconds:)")));
- (int32_t)secondsToMinutesSeconds:(int32_t)seconds __attribute__((swift_name("secondsToMinutes(seconds:)")));
- (void)setStopBasalAndBolusFlagsChannels:(int8_t)channels podUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("setStopBasalAndBolusFlags(channels:podUtil:logger:)")));
@property (readonly) int32_t HOURS_IN_DAY __attribute__((swift_name("HOURS_IN_DAY")));
@property (readonly) int32_t MINUTES_IN_HOUR __attribute__((swift_name("MINUTES_IN_HOUR")));
@property (readonly) int32_t SECONDS_IN_MINUTE __attribute__((swift_name("SECONDS_IN_MINUTE")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Date")))
@interface PSCDate : PSCBase
- (instancetype)initWithYear:(NSString *)year month:(NSString *)month dayOfMonth:(NSString *)dayOfMonth hour:(NSString *)hour minute:(NSString *)minute second:(NSString *)second nanosecond:(NSString *)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (PSCDate *)doCopyYear:(NSString *)year month:(NSString *)month dayOfMonth:(NSString *)dayOfMonth hour:(NSString *)hour minute:(NSString *)minute second:(NSString *)second nanosecond:(NSString *)nanosecond __attribute__((swift_name("doCopy(year:month:dayOfMonth:hour:minute:second:nanosecond:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) NSString *hour __attribute__((swift_name("hour")));
@property (readonly) NSString *minute __attribute__((swift_name("minute")));
@property (readonly) NSString *month __attribute__((swift_name("month")));
@property (readonly) NSString *nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) NSString *second __attribute__((swift_name("second")));
@property (readonly) NSString *year __attribute__((swift_name("year")));
@end;

__attribute__((swift_name("DateProvider")))
@interface PSCDateProvider : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCDate *)getDate __attribute__((swift_name("getDate()")));
@end;

__attribute__((swift_name("CommandParser_")))
@protocol PSCCommandParser
@required
- (PSCKotlinByteArray * _Nullable)parsePacket:(PSCKotlinByteArray *)packet __attribute__((swift_name("parse(packet:)")));
@end;

__attribute__((swift_name("AsciiPayloadParser")))
@interface PSCAsciiPayloadParser : PSCBase <PSCCommandParser>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getPayloadCommand:(PSCKotlinByteArray * _Nullable)command __attribute__((swift_name("getPayload(command:)")));
- (PSCKotlinByteArray * _Nullable)parsePacket:(PSCKotlinByteArray *)packet __attribute__((swift_name("parse(packet:)")));
@end;

__attribute__((swift_name("BinaryPayloadParser")))
@interface PSCBinaryPayloadParser : PSCBase <PSCCommandParser>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray *)parsePacket:(PSCKotlinByteArray *)packet __attribute__((swift_name("parse(packet:)")));
@end;

__attribute__((swift_name("NoPayloadParser")))
@interface PSCNoPayloadParser : PSCBase <PSCCommandParser>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray *)parsePacket:(PSCKotlinByteArray *)packet __attribute__((swift_name("parse(packet:)")));
@end;

__attribute__((swift_name("IAutoOffSharedPreferenceData")))
@protocol PSCIAutoOffSharedPreferenceData
@required
- (void)clearDurationValueMinutes __attribute__((swift_name("clearDurationValueMinutes()")));
- (void)clearTriggerValueMinutes __attribute__((swift_name("clearTriggerValueMinutes()")));
- (int64_t)getAlarmInitialElapseTime __attribute__((swift_name("getAlarmInitialElapseTime()")));
- (int64_t)getAlertInitialElapseTime __attribute__((swift_name("getAlertInitialElapseTime()")));
- (int64_t)getCurrentMillisFromSystem __attribute__((swift_name("getCurrentMillisFromSystem()")));
- (int32_t)getDurationValueMinutesPod:(PSCSimulatedPod *)pod __attribute__((swift_name("getDurationValueMinutes(pod:)")));
- (PSCAutoOffState *)getState __attribute__((swift_name("getState()")));
- (int32_t)getTriggerValueMinutesPod:(PSCSimulatedPod *)pod __attribute__((swift_name("getTriggerValueMinutes(pod:)")));
- (void)overwriteDurationMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteDurationMinutes(minutes:)")));
- (void)overwriteTriggerValueMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteTriggerValueMinutes(minutes:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetAlarmInitialElapseTime __attribute__((swift_name("resetAlarmInitialElapseTime()")));
- (void)resetInitialElapseTime __attribute__((swift_name("resetInitialElapseTime()")));
- (void)setAlarmInitialElapseTime __attribute__((swift_name("setAlarmInitialElapseTime()")));
- (void)setInitialAlertElapseTime __attribute__((swift_name("setInitialAlertElapseTime()")));
- (void)setStateState:(PSCAutoOffState *)state __attribute__((swift_name("setState(state:)")));
@end;

__attribute__((swift_name("AutoOffSharedPreferenceData")))
@interface PSCAutoOffSharedPreferenceData : PSCBase <PSCIAutoOffSharedPreferenceData>
- (instancetype)initWithPreferences:(PSCPreferences *)preferences pod:(PSCSimulatedPod * _Nullable)pod __attribute__((swift_name("init(preferences:pod:)"))) __attribute__((objc_designated_initializer));
- (void)clearDurationValueMinutes __attribute__((swift_name("clearDurationValueMinutes()")));
- (void)clearTriggerValueMinutes __attribute__((swift_name("clearTriggerValueMinutes()")));
- (int64_t)getAlarmInitialElapseTime __attribute__((swift_name("getAlarmInitialElapseTime()")));
- (int64_t)getAlertInitialElapseTime __attribute__((swift_name("getAlertInitialElapseTime()")));
- (int64_t)getCurrentMillisFromSystem __attribute__((swift_name("getCurrentMillisFromSystem()")));
- (int32_t)getDurationValueMinutesPod:(PSCSimulatedPod *)pod __attribute__((swift_name("getDurationValueMinutes(pod:)")));
- (PSCAutoOffState *)getState __attribute__((swift_name("getState()")));
- (int32_t)getTriggerValueMinutesPod:(PSCSimulatedPod *)pod __attribute__((swift_name("getTriggerValueMinutes(pod:)")));
- (void)overwriteDurationMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteDurationMinutes(minutes:)")));
- (void)overwriteTriggerValueMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteTriggerValueMinutes(minutes:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetAlarmInitialElapseTime __attribute__((swift_name("resetAlarmInitialElapseTime()")));
- (void)resetInitialElapseTime __attribute__((swift_name("resetInitialElapseTime()")));
- (void)setAlarmInitialElapseTime __attribute__((swift_name("setAlarmInitialElapseTime()")));
- (void)setInitialAlertElapseTime __attribute__((swift_name("setInitialAlertElapseTime()")));
- (void)setStateState:(PSCAutoOffState *)state __attribute__((swift_name("setState(state:)")));
@property (readonly) PSCSimulatedPod * _Nullable pod __attribute__((swift_name("pod")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoOffSharedPreferenceData.Companion")))
@interface PSCAutoOffSharedPreferenceDataCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int64_t AUTO_OFF_INVALID_TIME_VALUE __attribute__((swift_name("AUTO_OFF_INVALID_TIME_VALUE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoOffState")))
@interface PSCAutoOffState : PSCKotlinEnum<PSCAutoOffState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCAutoOffState *notEnabled __attribute__((swift_name("notEnabled")));
@property (class, readonly) PSCAutoOffState *idle __attribute__((swift_name("idle")));
@property (class, readonly) PSCAutoOffState *onAlert __attribute__((swift_name("onAlert")));
@property (class, readonly) PSCAutoOffState *onAlarm __attribute__((swift_name("onAlarm")));
+ (PSCKotlinArray<PSCAutoOffState *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoOffState.Companion")))
@interface PSCAutoOffStateCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCAutoOffState *)getInstanceValue:(int32_t)value __attribute__((swift_name("getInstance(value:)")));
@end;

__attribute__((swift_name("AutoOffStateMachine")))
@interface PSCAutoOffStateMachine : PSCBase
- (instancetype)initWithAutoOffFlowValue:(id<PSCIAutoOffSharedPreferenceData>)autoOffFlowValue turnOnPodAlert:(void (^)(void))turnOnPodAlert turnOffPodAlert:(void (^)(void))turnOffPodAlert turnOnPodAlarm:(void (^)(void))turnOnPodAlarm __attribute__((swift_name("init(autoOffFlowValue:turnOnPodAlert:turnOffPodAlert:turnOnPodAlarm:)"))) __attribute__((objc_designated_initializer));
- (void)clearDurationValueMinutes __attribute__((swift_name("clearDurationValueMinutes()")));
- (void)clearTriggerValueMinutes __attribute__((swift_name("clearTriggerValueMinutes()")));
- (void)handleFlowStatesPod:(PSCSimulatedPod *)pod cmdName:(NSString *)cmdName __attribute__((swift_name("handleFlowStates(pod:cmdName:)")));
- (void)overwriteDurationMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteDurationMinutes(minutes:)")));
- (void)overwriteTriggerValueMinutesMinutes:(int32_t)minutes __attribute__((swift_name("overwriteTriggerValueMinutes(minutes:)")));
- (void)reset __attribute__((swift_name("reset()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoOffStateMachine.Companion")))
@interface PSCAutoOffStateMachineCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) PSCAutoOffStateMachine *instance __attribute__((swift_name("instance")));
@end;

__attribute__((swift_name("CommandExecutor")))
@protocol PSCCommandExecutor
@required
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalExecutor")))
@interface PSCBasalExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@property (readonly) PSCBasalParameters * _Nullable basalParameters __attribute__((swift_name("basalParameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalExecutor.Companion")))
@interface PSCBasalExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BeepExecutor")))
@interface PSCBeepExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithStatusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("init(statusPageGenerator:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusExecutor")))
@interface PSCBolusExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:podControl:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BolusExecutor.Companion")))
@interface PSCBolusExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandExecutorCompanion")))
@interface PSCCommandExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeactivateExecutor")))
@interface PSCDeactivateExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:statusPageGenerator:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultExecutor")))
@interface PSCDefaultExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithStatusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator logger:(PSCLogger *)logger __attribute__((swift_name("init(statusPageGenerator:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorFactory")))
@interface PSCExecutorFactory : PSCBase
- (instancetype)initWithRequestBroker:(PSCRequestBroker *)requestBroker podUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil logger:(PSCLogger *)logger podControl:(PSCPodControl *)podControl alertUtil:(PSCAlertUtil *)alertUtil statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator __attribute__((swift_name("init(requestBroker:podUtil:podCommUtil:logger:podControl:alertUtil:statusPageGenerator:)"))) __attribute__((objc_designated_initializer));
- (id<PSCCommandExecutor> _Nullable)getExecutorOpcode:(int8_t)opcode __attribute__((swift_name("getExecutor(opcode:)")));
- (id<PSCCommandExecutor> _Nullable)getTwiCommandHandlerPrefix:(NSString *)prefix __attribute__((swift_name("getTwiCommandHandler(prefix:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecutorFactory.Companion")))
@interface PSCExecutorFactoryCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("GetAidStatusExecutor")))
@interface PSCGetAidStatusExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodControl:(PSCPodControl *)podControl logger:(PSCLogger *)logger podCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podControl:logger:podCommUtil:podUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (int32_t)getCurrentTimeInSeconds __attribute__((swift_name("getCurrentTimeInSeconds()")));
- (int32_t)getLastPodTimeStampInSeconds __attribute__((swift_name("getLastPodTimeStampInSeconds()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAidStatusExecutor.Companion")))
@interface PSCGetAidStatusExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCorrectionFactorExecutor")))
@interface PSCGetCorrectionFactorExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDiaExecutor")))
@interface PSCGetDiaExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podControl:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetEgvThresholdExecutor")))
@interface PSCGetEgvThresholdExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podControl:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetHypoProtectionExecutor")))
@interface PSCGetHypoProtectionExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podCommUtil:podUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInsulinHistoryLengthExecutor")))
@interface PSCGetInsulinHistoryLengthExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInsulinHistoryRecordExecutor")))
@interface PSCGetInsulinHistoryRecordExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLoopStateExecutor")))
@interface PSCGetLoopStateExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podControl:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPatientHistoryLogEnabledResponseExecutor")))
@interface PSCGetPatientHistoryLogEnabledResponseExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((swift_name("GetPatientHistoryLogExecutor")))
@interface PSCGetPatientHistoryLogExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podControl:podCommUtil:podUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (PSCKMMByteBuffer *)getPatientHistoryLogs __attribute__((swift_name("getPatientHistoryLogs()")));
@property int32_t lastLoggerTimeStamp __attribute__((swift_name("lastLoggerTimeStamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPatientHistoryLogExecutor.Companion")))
@interface PSCGetPatientHistoryLogExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetStatusExecutor")))
@interface PSCGetStatusExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger alertUtil:(PSCAlertUtil *)alertUtil statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:alertUtil:statusPageGenerator:podUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTargetBgProfileExecutor")))
@interface PSCGetTargetBgProfileExecutor : PSCNoPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podUtil:podControl:podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTdiExecutor")))
@interface PSCGetTdiExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl podCommUtil:(PSCPodCommUtil *)podCommUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:podControl:podCommUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (PSCKotlinByteArray *)getTdi __attribute__((swift_name("getTdi()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTransmitterInfoExecutor")))
@interface PSCGetTransmitterInfoExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podCommUtil:podUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((swift_name("GetUtcTimeExecutor")))
@interface PSCGetUtcTimeExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (int32_t)getCurrentTimeInSeconds __attribute__((swift_name("getCurrentTimeInSeconds()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVersionExecutor")))
@interface PSCGetVersionExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterlockCommandAdapter")))
@interface PSCInterlockCommandAdapter : PSCBase
- (instancetype)initWithInterlockChannel:(int8_t)interlockChannel logger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(interlockChannel:logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PSCCommandExecutor> _Nullable insulinExecutor __attribute__((swift_name("insulinExecutor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterlockCommandAdapter.Companion")))
@interface PSCInterlockCommandAdapterCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterlockExecutor")))
@interface PSCInterlockExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterlockExecutor.Companion")))
@interface PSCInterlockExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidCommandExecutor")))
@interface PSCInvalidCommandExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyCommandExecutor")))
@interface PSCLegacyCommandExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithRequestBroker:(PSCRequestBroker *)requestBroker podUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil logger:(PSCLogger *)logger podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(requestBroker:podUtil:podCommUtil:logger:podControl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyCommandExecutor.Companion")))
@interface PSCLegacyCommandExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyResponseExecutor")))
@interface PSCLegacyResponseExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodCommUtil:(PSCPodCommUtil *)podCommUtil __attribute__((swift_name("init(podCommUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgramAlertExecutor")))
@interface PSCProgramAlertExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl alertUtil:(PSCAlertUtil *)alertUtil __attribute__((swift_name("init(logger:podUtil:podControl:alertUtil:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetCorrectionFactorExecutor")))
@interface PSCSetCorrectionFactorExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetDiaExecutor")))
@interface PSCSetDiaExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetEgvThresholdExecutor")))
@interface PSCSetEgvThresholdExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@property (readonly) int32_t highEgvThreshold __attribute__((swift_name("highEgvThreshold")));
@property (readonly) int32_t lowEgvThreshold __attribute__((swift_name("lowEgvThreshold")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetHypoProtectionExecutor")))
@interface PSCSetHypoProtectionExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetInsulinHistoryLengthExecutor")))
@interface PSCSetInsulinHistoryLengthExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetInsulinHistoryRecordExecutor")))
@interface PSCSetInsulinHistoryRecordExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetLoopStateExecutor")))
@interface PSCSetLoopStateExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (BOOL)isCloseLoopWithoutValidTxIdNewLoopState:(PSCAidLoopStateEnum *)newLoopState __attribute__((swift_name("isCloseLoopWithoutValidTxId(newLoopState:)")));
- (void)setLoopStateOnPodNewLoopState:(PSCAidLoopStateEnum *)newLoopState __attribute__((swift_name("setLoopStateOnPod(newLoopState:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetLoopStateExecutor.Companion")))
@interface PSCSetLoopStateExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetPatientHistoryLogEnabledExecutor")))
@interface PSCSetPatientHistoryLogEnabledExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetResetPatientHistoryBufferIndexExecutor")))
@interface PSCSetResetPatientHistoryBufferIndexExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podCommUtil:(PSCPodCommUtil *)podCommUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:podCommUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetResetPatientHistoryBufferIndexExecutor.Companion")))
@interface PSCSetResetPatientHistoryBufferIndexExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetTargetBgProfileExecutor")))
@interface PSCSetTargetBgProfileExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetTdiExecutor")))
@interface PSCSetTdiExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
- (void)setTdiCommand:(PSCKotlinByteArray *)command __attribute__((swift_name("setTdi(command:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetTdiExecutor.Companion")))
@interface PSCSetTdiExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetTransmitterInfoExecutor")))
@interface PSCSetTransmitterInfoExecutor : PSCBinaryPayloadParser <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(logger:podUtil:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetTransmitterInfoExecutor.Companion")))
@interface PSCSetTransmitterInfoExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("SetUidExecutor")))
@interface PSCSetUidExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetUtcTimeExecutor")))
@interface PSCSetUtcTimeExecutor : PSCAsciiPayloadParser <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SilenceAlertExecutor")))
@interface PSCSilenceAlertExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator logger:(PSCLogger *)logger __attribute__((swift_name("init(podUtil:statusPageGenerator:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopExecutor")))
@interface PSCStopExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil statusPageGenerator:(PSCStatusPageGenerator *)statusPageGenerator logger:(PSCLogger *)logger sendInsulinDeliveryCommand:(void (^)(PSCKotlinByteArray *))sendInsulinDeliveryCommand __attribute__((swift_name("init(podUtil:statusPageGenerator:logger:sendInsulinDeliveryCommand:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasalExecutor")))
@interface PSCTempBasalExecutor : PSCBase <PSCCommandExecutor>
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)executeCommand:(PSCKotlinByteArray * _Nullable)command lastOpCode:(int8_t)lastOpCode executorFactory:(PSCExecutorFactory *)executorFactory lastResponse:(PSCKotlinByteArray * _Nullable)lastResponse __attribute__((swift_name("execute(command:lastOpCode:executorFactory:lastResponse:)")));
@property (readonly) PSCBasalParameters * _Nullable basalParameters __attribute__((swift_name("basalParameters")));
@property int64_t currentTimeInMillis __attribute__((swift_name("currentTimeInMillis")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasalExecutor.Companion")))
@interface PSCTempBasalExecutorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVersionResponse")))
@interface PSCGetVersionResponse : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray *)generateResponseProductId:(int8_t)productId podState:(int32_t)podState podLotNumber:(int32_t)podLotNumber sequenceNumber:(int32_t)sequenceNumber uid:(int32_t)uid __attribute__((swift_name("generateResponse(productId:podState:podLotNumber:sequenceNumber:uid:)")));
@property (readonly) PSCKotlinByteArray *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVersionResponse.Companion")))
@interface PSCGetVersionResponseCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int8_t ACK_LENGTH __attribute__((swift_name("ACK_LENGTH")));
@property (readonly) int8_t RESPONSE_LENGTH __attribute__((swift_name("RESPONSE_LENGTH")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetUidResponse")))
@interface PSCSetUidResponse : PSCBase
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)getResponse __attribute__((swift_name("getResponse()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetUidResponse.Companion")))
@interface PSCSetUidResponseCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int8_t ACK_LENGTH __attribute__((swift_name("ACK_LENGTH")));
@property (readonly) int8_t RESPONSE_LENGTH __attribute__((swift_name("RESPONSE_LENGTH")));
@end;

__attribute__((swift_name("StatusPageGenerator")))
@interface PSCStatusPageGenerator : PSCBase
- (instancetype)initWithLogger:(PSCLogger *)logger podUtil:(PSCPodUtil *)podUtil podControl:(PSCPodControl *)podControl __attribute__((swift_name("init(logger:podUtil:podControl:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray *)createAlarmPageSimulatedPod:(PSCSimulatedPod *)simulatedPod __attribute__((swift_name("createAlarmPage(simulatedPod:)")));
- (PSCKotlinByteArray *)createStatusPod:(PSCSimulatedPod *)pod pageNumber:(int8_t)pageNumber __attribute__((swift_name("createStatus(pod:pageNumber:)")));
- (PSCKotlinByteArray *)createStatusPage0Pod:(PSCSimulatedPod *)pod __attribute__((swift_name("createStatusPage0(pod:)")));
- (int8_t)getActiveBolusBasalFlagsPod:(PSCSimulatedPod *)pod __attribute__((swift_name("getActiveBolusBasalFlags(pod:)")));
- (int8_t)getAlarmInfoIsBolusActiveAtAlarm:(BOOL)isBolusActiveAtAlarm podStateAtAlarm:(int32_t)podStateAtAlarm __attribute__((swift_name("getAlarmInfo(isBolusActiveAtAlarm:podStateAtAlarm:)")));
- (PSCKotlinByteArray *)getStatusPagePageNumber:(int8_t)pageNumber __attribute__((swift_name("getStatusPage(pageNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusPageGenerator.Companion")))
@interface PSCStatusPageGeneratorCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("BaseNudgeData")))
@interface PSCBaseNudgeData : PSCBase
- (instancetype)initWithIsLastMessage:(BOOL)isLastMessage __attribute__((swift_name("init(isLastMessage:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL isLastMessage __attribute__((swift_name("isLastMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlarmReceivedData")))
@interface PSCAlarmReceivedData : PSCBaseNudgeData
- (instancetype)initWithData:(PSCKotlinByteArray *)data isLastMessage:(BOOL)isLastMessage commonAlertType:(PSCAlertType *)commonAlertType __attribute__((swift_name("init(data:isLastMessage:commonAlertType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIsLastMessage:(BOOL)isLastMessage __attribute__((swift_name("init(isLastMessage:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PSCAlertType *)getAlertType __attribute__((swift_name("getAlertType()")));
- (PSCKotlinByteArray *)getData __attribute__((swift_name("getData()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property PSCAlertType *commonAlertType __attribute__((swift_name("commonAlertType")));
@property PSCKotlinByteArray *data __attribute__((swift_name("data")));
@property BOOL isLastMessage __attribute__((swift_name("isLastMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basal")))
@interface PSCBasal : PSCBase
- (instancetype)initWithBasalData:(PSCKotlinByteArray * _Nullable)basalData logger:(PSCLogger *)logger __attribute__((swift_name("init(basalData:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinByteArray * _Nullable)getBasalBytes __attribute__((swift_name("getBasalBytes()")));
- (PSCKotlinByteArray * _Nullable)getBasalInitBytes __attribute__((swift_name("getBasalInitBytes()")));
- (PSCBasalStep * _Nullable)getCurrentStepTimeOfDayInMillis:(int32_t)timeOfDayInMillis __attribute__((swift_name("getCurrentStep(timeOfDayInMillis:)")));
@property (getter=doInitStep) PSCBasalInitStep * _Nullable initStep __attribute__((swift_name("initStep")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property (readonly) int32_t numSteps __attribute__((swift_name("numSteps")));
@property NSMutableArray<PSCBasalStep *> *steps __attribute__((swift_name("steps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Basal.Companion")))
@interface PSCBasalCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Step")))
@interface PSCStep : PSCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCKotlinByteArray * _Nullable)getStepAsBytes __attribute__((swift_name("getStepAsBytes()")));
- (NSString * _Nullable)getStepHexString __attribute__((swift_name("getStepHexString()")));
- (BOOL)shouldAddPPAfterSleep __attribute__((swift_name("shouldAddPPAfterSleep()")));
@property int32_t delayBetweenPPInMillis __attribute__((swift_name("delayBetweenPPInMillis")));
@property BOOL isZeroBasalSegment __attribute__((swift_name("isZeroBasalSegment")));
@property int32_t ppInStep __attribute__((swift_name("ppInStep")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalInitStep")))
@interface PSCBasalInitStep : PSCStep
- (instancetype)initWithPpInStep:(int32_t)ppInStep delayUntilFirstPPInMillis:(int32_t)delayUntilFirstPPInMillis delayBetweenPPInMillis:(int32_t)delayBetweenPPInMillis isZeroBasalSegment:(BOOL)isZeroBasalSegment __attribute__((swift_name("init(ppInStep:delayUntilFirstPPInMillis:delayBetweenPPInMillis:isZeroBasalSegment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PSCKotlinByteArray *)getStepAsBytes __attribute__((swift_name("getStepAsBytes()")));
- (NSString *)getStepHexString __attribute__((swift_name("getStepHexString()")));
@property int32_t delayBetweenPPInMillis __attribute__((swift_name("delayBetweenPPInMillis")));
@property int32_t delayUntilFirstPPInMillis __attribute__((swift_name("delayUntilFirstPPInMillis")));
@property BOOL isZeroBasalSegment __attribute__((swift_name("isZeroBasalSegment")));
@property int32_t ppInStep __attribute__((swift_name("ppInStep")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalInitStep.Companion")))
@interface PSCBasalInitStepCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalStep")))
@interface PSCBasalStep : PSCStep
- (instancetype)initWithBasalStepBytes:(PSCKotlinByteArray *)basalStepBytes logger:(PSCLogger *)logger __attribute__((swift_name("init(basalStepBytes:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStartSlotNum:(int8_t)startSlotNum numSlotsInStep:(int8_t)numSlotsInStep ppInStep:(int32_t)ppInStep delayBetweenPPInMillis:(int32_t)delayBetweenPPInMillis isZeroBasalSegment:(BOOL)isZeroBasalSegment __attribute__((swift_name("init(startSlotNum:numSlotsInStep:ppInStep:delayBetweenPPInMillis:isZeroBasalSegment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)getEffectiveDelayInPPCurrentTimeOfDay:(int32_t)currentTimeOfDay __attribute__((swift_name("getEffectiveDelayInPP(currentTimeOfDay:)")));
- (PSCKotlinByteArray *)getStepAsBytes __attribute__((swift_name("getStepAsBytes()")));
- (NSString *)getStepHexString __attribute__((swift_name("getStepHexString()")));
- (BOOL)isInCurrentStepCurrentTimeOfDayInMillis:(int32_t)currentTimeOfDayInMillis __attribute__((swift_name("isInCurrentStep(currentTimeOfDayInMillis:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t delayBetweenPPInMillis __attribute__((swift_name("delayBetweenPPInMillis")));
@property BOOL isZeroBasalSegment __attribute__((swift_name("isZeroBasalSegment")));
@property int8_t numSlotsInStep __attribute__((swift_name("numSlotsInStep")));
@property int32_t ppInStep __attribute__((swift_name("ppInStep")));
@property int8_t startSlotNum __attribute__((swift_name("startSlotNum")));
@property int32_t stepEndTime __attribute__((swift_name("stepEndTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BasalStep.Companion")))
@interface PSCBasalStepCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bolus")))
@interface PSCBolus : PSCBase
- (instancetype)initWithPodUtil:(PSCPodUtil *)podUtil __attribute__((swift_name("init(podUtil:)"))) __attribute__((objc_designated_initializer));
- (int32_t)getDelayBetweenPPExtended __attribute__((swift_name("getDelayBetweenPPExtended()")));
- (int32_t)getDelayBetweenPPExtendedInMils __attribute__((swift_name("getDelayBetweenPPExtendedInMils()")));
- (int32_t)getDelayBetweenPPImmediate __attribute__((swift_name("getDelayBetweenPPImmediate()")));
- (int32_t)getDelayBetweenPPImmediateInMils __attribute__((swift_name("getDelayBetweenPPImmediateInMils()")));
- (int32_t)getExtendedPartialPulses __attribute__((swift_name("getExtendedPartialPulses()")));
- (int32_t)getExtendedPulses __attribute__((swift_name("getExtendedPulses()")));
- (int32_t)getImmediatePartialPulses __attribute__((swift_name("getImmediatePartialPulses()")));
- (int32_t)getImmediatePulses __attribute__((swift_name("getImmediatePulses()")));
- (int16_t)getNumberPPImmediateCorrectBolus __attribute__((swift_name("getNumberPPImmediateCorrectBolus()")));
- (int16_t)getNumberPPImmediateMealBolus __attribute__((swift_name("getNumberPPImmediateMealBolus()")));
- (int32_t)getTotalPartialPulses __attribute__((swift_name("getTotalPartialPulses()")));
- (int32_t)getTotalPulses __attribute__((swift_name("getTotalPulses()")));
- (BOOL)isAGCBolus __attribute__((swift_name("isAGCBolus()")));
- (BOOL)isPDMBolus __attribute__((swift_name("isPDMBolus()")));
- (void)setBolusSourceBolusSource:(int8_t)bolusSource __attribute__((swift_name("setBolusSource(bolusSource:)")));
- (void)setDelayBetweenPPExtendedDelayBetweenPPExtended:(int32_t)delayBetweenPPExtended __attribute__((swift_name("setDelayBetweenPPExtended(delayBetweenPPExtended:)")));
- (void)setDelayBetweenPPImmediateDelayBetweenPPImmediate:(int32_t)delayBetweenPPImmediate __attribute__((swift_name("setDelayBetweenPPImmediate(delayBetweenPPImmediate:)")));
- (void)setExtendedPartialPulsesExtendedPartialPulses:(int32_t)extendedPartialPulses __attribute__((swift_name("setExtendedPartialPulses(extendedPartialPulses:)")));
- (void)setImmediatePartialPulsesImmediatePartialPulses:(int32_t)immediatePartialPulses __attribute__((swift_name("setImmediatePartialPulses(immediatePartialPulses:)")));
- (void)setNumberPPImmediateCorrectBolusNumberPPImmediateCorrectBolus:(int16_t)numberPPImmediateCorrectBolus __attribute__((swift_name("setNumberPPImmediateCorrectBolus(numberPPImmediateCorrectBolus:)")));
- (void)setNumberPPImmediateMealBolusNumberPPImmediateMealBolus:(int16_t)numberPPImmediateMealBolus __attribute__((swift_name("setNumberPPImmediateMealBolus(numberPPImmediateMealBolus:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bolus.Companion")))
@interface PSCBolusCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IPCommandTestForNextStep")))
@interface PSCIPCommandTestForNextStep : PSCBase
- (instancetype)initWithUsecase:(NSString *)usecase alarmValue:(int32_t)alarmValue ipResponse:(int32_t)ipResponse setCommLossBefore:(BOOL)setCommLossBefore holdTime:(int32_t)holdTime clbCount:(int32_t)clbCount __attribute__((swift_name("init(usecase:alarmValue:ipResponse:setCommLossBefore:holdTime:clbCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (PSCIPCommandTestForNextStep *)doCopyUsecase:(NSString *)usecase alarmValue:(int32_t)alarmValue ipResponse:(int32_t)ipResponse setCommLossBefore:(BOOL)setCommLossBefore holdTime:(int32_t)holdTime clbCount:(int32_t)clbCount __attribute__((swift_name("doCopy(usecase:alarmValue:ipResponse:setCommLossBefore:holdTime:clbCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t alarmValue __attribute__((swift_name("alarmValue")));
@property int32_t clbCount __attribute__((swift_name("clbCount")));
@property (readonly) int32_t holdTime __attribute__((swift_name("holdTime")));
@property (readonly) int32_t ipResponse __attribute__((swift_name("ipResponse")));
@property BOOL setCommLossBefore __attribute__((swift_name("setCommLossBefore")));
@property (readonly) NSString *usecase __attribute__((swift_name("usecase")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinCommand")))
@interface PSCInsulinCommand : PSCBase
- (instancetype)initWithChannel:(int8_t)channel command:(PSCKotlinByteArray *)command __attribute__((swift_name("init(channel:command:)"))) __attribute__((objc_designated_initializer));
- (int8_t)component1 __attribute__((swift_name("component1()")));
- (PSCKotlinByteArray *)component2 __attribute__((swift_name("component2()")));
- (PSCInsulinCommand *)doCopyChannel:(int8_t)channel command:(PSCKotlinByteArray *)command __attribute__((swift_name("doCopy(channel:command:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int8_t channel __attribute__((swift_name("channel")));
@property (readonly) PSCKotlinByteArray *command __attribute__((swift_name("command")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsulinHistory")))
@interface PSCInsulinHistory : PSCBase
- (instancetype)initWithUtcTimeStampSeconds:(int32_t)utcTimeStampSeconds sum_algorithm:(int8_t)sum_algorithm sum_user_bolus_meal:(int8_t)sum_user_bolus_meal sum_user_bolus_correction:(int8_t)sum_user_bolus_correction __attribute__((swift_name("init(utcTimeStampSeconds:sum_algorithm:sum_user_bolus_meal:sum_user_bolus_correction:)"))) __attribute__((objc_designated_initializer));
- (int8_t)component2 __attribute__((swift_name("component2()")));
- (int8_t)component3 __attribute__((swift_name("component3()")));
- (int8_t)component4 __attribute__((swift_name("component4()")));
- (PSCInsulinHistory *)doCopyUtcTimeStampSeconds:(int32_t)utcTimeStampSeconds sum_algorithm:(int8_t)sum_algorithm sum_user_bolus_meal:(int8_t)sum_user_bolus_meal sum_user_bolus_correction:(int8_t)sum_user_bolus_correction __attribute__((swift_name("doCopy(utcTimeStampSeconds:sum_algorithm:sum_user_bolus_meal:sum_user_bolus_correction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PSCKotlinByteArray *)getByteArray __attribute__((swift_name("getByteArray()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int8_t sum_algorithm __attribute__((swift_name("sum_algorithm")));
@property int8_t sum_user_bolus_correction __attribute__((swift_name("sum_user_bolus_correction")));
@property int8_t sum_user_bolus_meal __attribute__((swift_name("sum_user_bolus_meal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientHistoryLog")))
@interface PSCPatientHistoryLog : PSCBase
- (instancetype)initWithRecordTimeStampInSeconds:(int32_t)recordTimeStampInSeconds egvTimeStampInUTC:(int32_t)egvTimeStampInUTC egv:(int16_t)egv egvBackfill1:(int16_t)egvBackfill1 egvBackfill2:(int16_t)egvBackfill2 cgmRssi:(int8_t)cgmRssi cgmMissedCount:(int16_t)cgmMissedCount cgmMissedReason:(int8_t)cgmMissedReason sumUserBolusCorrection:(int8_t)sumUserBolusCorrection sumUserBolusMeal:(int8_t)sumUserBolusMeal sumAlgorithm:(int8_t)sumAlgorithm iobAlgorithm:(int32_t)iobAlgorithm iobUserMeal:(int32_t)iobUserMeal iobUserCorrection:(int32_t)iobUserCorrection oneTimeConstraint2xOr4x:(int8_t)oneTimeConstraint2xOr4x setPoint:(int8_t)setPoint userInputBasal:(int16_t)userInputBasal tdi:(int16_t)tdi hypointensity:(int8_t)hypointensity inputFlags:(int16_t)inputFlags carryOver:(int32_t)carryOver lastValidCGM:(int16_t)lastValidCGM carryOverCHODetectionDefault:(int8_t)carryOverCHODetectionDefault rescureCHODetectionSetPoint:(int8_t)rescureCHODetectionSetPoint lastSetPoint:(int8_t)lastSetPoint x0:(int32_t)x0 x1:(int32_t)x1 x2:(int32_t)x2 yPredictionUpdate:(PSCKotlinIntArray *)yPredictionUpdate consecutiveMissingPoints:(int16_t)consecutiveMissingPoints cgmAfterRoCFilt:(int16_t)cgmAfterRoCFilt totalSuggestedInsulin:(int32_t)totalSuggestedInsulin suspensionDuringFirst3MissingCount:(int8_t)suspensionDuringFirst3MissingCount postCalibrationCount:(int8_t)postCalibrationCount initializationCount:(int8_t)initializationCount integralCount:(int16_t)integralCount negativeIOBCount:(int16_t)negativeIOBCount previousOutputFlags:(int16_t)previousOutputFlags insulinRequest:(int8_t)insulinRequest outputFlags:(int16_t)outputFlags algorithmStatus:(int16_t)algorithmStatus totalPolusDelivered:(int16_t)totalPolusDelivered crc:(int16_t)crc __attribute__((swift_name("init(recordTimeStampInSeconds:egvTimeStampInUTC:egv:egvBackfill1:egvBackfill2:cgmRssi:cgmMissedCount:cgmMissedReason:sumUserBolusCorrection:sumUserBolusMeal:sumAlgorithm:iobAlgorithm:iobUserMeal:iobUserCorrection:oneTimeConstraint2xOr4x:setPoint:userInputBasal:tdi:hypointensity:inputFlags:carryOver:lastValidCGM:carryOverCHODetectionDefault:rescureCHODetectionSetPoint:lastSetPoint:x0:x1:x2:yPredictionUpdate:consecutiveMissingPoints:cgmAfterRoCFilt:totalSuggestedInsulin:suspensionDuringFirst3MissingCount:postCalibrationCount:initializationCount:integralCount:negativeIOBCount:previousOutputFlags:insulinRequest:outputFlags:algorithmStatus:totalPolusDelivered:crc:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int8_t)component10 __attribute__((swift_name("component10()")));
- (int8_t)component11 __attribute__((swift_name("component11()")));
- (int32_t)component12 __attribute__((swift_name("component12()")));
- (int32_t)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int8_t)component15 __attribute__((swift_name("component15()")));
- (int8_t)component16 __attribute__((swift_name("component16()")));
- (int16_t)component17 __attribute__((swift_name("component17()")));
- (int16_t)component18 __attribute__((swift_name("component18()")));
- (int8_t)component19 __attribute__((swift_name("component19()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int16_t)component20 __attribute__((swift_name("component20()")));
- (int32_t)component21 __attribute__((swift_name("component21()")));
- (int16_t)component22 __attribute__((swift_name("component22()")));
- (int8_t)component23 __attribute__((swift_name("component23()")));
- (int8_t)component24 __attribute__((swift_name("component24()")));
- (int8_t)component25 __attribute__((swift_name("component25()")));
- (int32_t)component26 __attribute__((swift_name("component26()")));
- (int32_t)component27 __attribute__((swift_name("component27()")));
- (int32_t)component28 __attribute__((swift_name("component28()")));
- (PSCKotlinIntArray *)component29 __attribute__((swift_name("component29()")));
- (int16_t)component3 __attribute__((swift_name("component3()")));
- (int16_t)component30 __attribute__((swift_name("component30()")));
- (int16_t)component31 __attribute__((swift_name("component31()")));
- (int32_t)component32 __attribute__((swift_name("component32()")));
- (int8_t)component33 __attribute__((swift_name("component33()")));
- (int8_t)component34 __attribute__((swift_name("component34()")));
- (int8_t)component35 __attribute__((swift_name("component35()")));
- (int16_t)component36 __attribute__((swift_name("component36()")));
- (int16_t)component37 __attribute__((swift_name("component37()")));
- (int16_t)component38 __attribute__((swift_name("component38()")));
- (int8_t)component39 __attribute__((swift_name("component39()")));
- (int16_t)component4 __attribute__((swift_name("component4()")));
- (int16_t)component40 __attribute__((swift_name("component40()")));
- (int16_t)component41 __attribute__((swift_name("component41()")));
- (int16_t)component42 __attribute__((swift_name("component42()")));
- (int16_t)component43 __attribute__((swift_name("component43()")));
- (int16_t)component5 __attribute__((swift_name("component5()")));
- (int8_t)component6 __attribute__((swift_name("component6()")));
- (int16_t)component7 __attribute__((swift_name("component7()")));
- (int8_t)component8 __attribute__((swift_name("component8()")));
- (int8_t)component9 __attribute__((swift_name("component9()")));
- (PSCPatientHistoryLog *)doCopyRecordTimeStampInSeconds:(int32_t)recordTimeStampInSeconds egvTimeStampInUTC:(int32_t)egvTimeStampInUTC egv:(int16_t)egv egvBackfill1:(int16_t)egvBackfill1 egvBackfill2:(int16_t)egvBackfill2 cgmRssi:(int8_t)cgmRssi cgmMissedCount:(int16_t)cgmMissedCount cgmMissedReason:(int8_t)cgmMissedReason sumUserBolusCorrection:(int8_t)sumUserBolusCorrection sumUserBolusMeal:(int8_t)sumUserBolusMeal sumAlgorithm:(int8_t)sumAlgorithm iobAlgorithm:(int32_t)iobAlgorithm iobUserMeal:(int32_t)iobUserMeal iobUserCorrection:(int32_t)iobUserCorrection oneTimeConstraint2xOr4x:(int8_t)oneTimeConstraint2xOr4x setPoint:(int8_t)setPoint userInputBasal:(int16_t)userInputBasal tdi:(int16_t)tdi hypointensity:(int8_t)hypointensity inputFlags:(int16_t)inputFlags carryOver:(int32_t)carryOver lastValidCGM:(int16_t)lastValidCGM carryOverCHODetectionDefault:(int8_t)carryOverCHODetectionDefault rescureCHODetectionSetPoint:(int8_t)rescureCHODetectionSetPoint lastSetPoint:(int8_t)lastSetPoint x0:(int32_t)x0 x1:(int32_t)x1 x2:(int32_t)x2 yPredictionUpdate:(PSCKotlinIntArray *)yPredictionUpdate consecutiveMissingPoints:(int16_t)consecutiveMissingPoints cgmAfterRoCFilt:(int16_t)cgmAfterRoCFilt totalSuggestedInsulin:(int32_t)totalSuggestedInsulin suspensionDuringFirst3MissingCount:(int8_t)suspensionDuringFirst3MissingCount postCalibrationCount:(int8_t)postCalibrationCount initializationCount:(int8_t)initializationCount integralCount:(int16_t)integralCount negativeIOBCount:(int16_t)negativeIOBCount previousOutputFlags:(int16_t)previousOutputFlags insulinRequest:(int8_t)insulinRequest outputFlags:(int16_t)outputFlags algorithmStatus:(int16_t)algorithmStatus totalPolusDelivered:(int16_t)totalPolusDelivered crc:(int16_t)crc __attribute__((swift_name("doCopy(recordTimeStampInSeconds:egvTimeStampInUTC:egv:egvBackfill1:egvBackfill2:cgmRssi:cgmMissedCount:cgmMissedReason:sumUserBolusCorrection:sumUserBolusMeal:sumAlgorithm:iobAlgorithm:iobUserMeal:iobUserCorrection:oneTimeConstraint2xOr4x:setPoint:userInputBasal:tdi:hypointensity:inputFlags:carryOver:lastValidCGM:carryOverCHODetectionDefault:rescureCHODetectionSetPoint:lastSetPoint:x0:x1:x2:yPredictionUpdate:consecutiveMissingPoints:cgmAfterRoCFilt:totalSuggestedInsulin:suspensionDuringFirst3MissingCount:postCalibrationCount:initializationCount:integralCount:negativeIOBCount:previousOutputFlags:insulinRequest:outputFlags:algorithmStatus:totalPolusDelivered:crc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PSCKotlinByteArray *)getLoggerByteBuffer __attribute__((swift_name("getLoggerByteBuffer()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int16_t algorithmStatus __attribute__((swift_name("algorithmStatus")));
@property int32_t carryOver __attribute__((swift_name("carryOver")));
@property int8_t carryOverCHODetectionDefault __attribute__((swift_name("carryOverCHODetectionDefault")));
@property int16_t cgmAfterRoCFilt __attribute__((swift_name("cgmAfterRoCFilt")));
@property int16_t cgmMissedCount __attribute__((swift_name("cgmMissedCount")));
@property int8_t cgmMissedReason __attribute__((swift_name("cgmMissedReason")));
@property int8_t cgmRssi __attribute__((swift_name("cgmRssi")));
@property int16_t consecutiveMissingPoints __attribute__((swift_name("consecutiveMissingPoints")));
@property int16_t crc __attribute__((swift_name("crc")));
@property int16_t egv __attribute__((swift_name("egv")));
@property int16_t egvBackfill1 __attribute__((swift_name("egvBackfill1")));
@property int16_t egvBackfill2 __attribute__((swift_name("egvBackfill2")));
@property int32_t egvTimeStampInUTC __attribute__((swift_name("egvTimeStampInUTC")));
@property int8_t hypointensity __attribute__((swift_name("hypointensity")));
@property int8_t initializationCount __attribute__((swift_name("initializationCount")));
@property int16_t inputFlags __attribute__((swift_name("inputFlags")));
@property int8_t insulinRequest __attribute__((swift_name("insulinRequest")));
@property int16_t integralCount __attribute__((swift_name("integralCount")));
@property int32_t iobAlgorithm __attribute__((swift_name("iobAlgorithm")));
@property int32_t iobUserCorrection __attribute__((swift_name("iobUserCorrection")));
@property int32_t iobUserMeal __attribute__((swift_name("iobUserMeal")));
@property int8_t lastSetPoint __attribute__((swift_name("lastSetPoint")));
@property int16_t lastValidCGM __attribute__((swift_name("lastValidCGM")));
@property int16_t negativeIOBCount __attribute__((swift_name("negativeIOBCount")));
@property int8_t oneTimeConstraint2xOr4x __attribute__((swift_name("oneTimeConstraint2xOr4x")));
@property int16_t outputFlags __attribute__((swift_name("outputFlags")));
@property int8_t postCalibrationCount __attribute__((swift_name("postCalibrationCount")));
@property int16_t previousOutputFlags __attribute__((swift_name("previousOutputFlags")));
@property int32_t recordTimeStampInSeconds __attribute__((swift_name("recordTimeStampInSeconds")));
@property int8_t rescureCHODetectionSetPoint __attribute__((swift_name("rescureCHODetectionSetPoint")));
@property int8_t setPoint __attribute__((swift_name("setPoint")));
@property int8_t sumAlgorithm __attribute__((swift_name("sumAlgorithm")));
@property int8_t sumUserBolusCorrection __attribute__((swift_name("sumUserBolusCorrection")));
@property int8_t sumUserBolusMeal __attribute__((swift_name("sumUserBolusMeal")));
@property int8_t suspensionDuringFirst3MissingCount __attribute__((swift_name("suspensionDuringFirst3MissingCount")));
@property int16_t tdi __attribute__((swift_name("tdi")));
@property int16_t totalPolusDelivered __attribute__((swift_name("totalPolusDelivered")));
@property int32_t totalSuggestedInsulin __attribute__((swift_name("totalSuggestedInsulin")));
@property int16_t userInputBasal __attribute__((swift_name("userInputBasal")));
@property int32_t x0 __attribute__((swift_name("x0")));
@property int32_t x1 __attribute__((swift_name("x1")));
@property int32_t x2 __attribute__((swift_name("x2")));
@property PSCKotlinIntArray *yPredictionUpdate __attribute__((swift_name("yPredictionUpdate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PatientHistoryLogHeader")))
@interface PSCPatientHistoryLogHeader : PSCBase
- (instancetype)initWithTimeFromStartLogging:(int32_t)timeFromStartLogging loggerIntervalSeconds:(int32_t)loggerIntervalSeconds numberOfUnreadLogs:(int32_t)numberOfUnreadLogs dataInformation:(int16_t)dataInformation readIndex:(int32_t)readIndex extendedHeader:(int16_t)extendedHeader __attribute__((swift_name("init(timeFromStartLogging:loggerIntervalSeconds:numberOfUnreadLogs:dataInformation:readIndex:extendedHeader:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int16_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int16_t)component6 __attribute__((swift_name("component6()")));
- (PSCPatientHistoryLogHeader *)doCopyTimeFromStartLogging:(int32_t)timeFromStartLogging loggerIntervalSeconds:(int32_t)loggerIntervalSeconds numberOfUnreadLogs:(int32_t)numberOfUnreadLogs dataInformation:(int16_t)dataInformation readIndex:(int32_t)readIndex extendedHeader:(int16_t)extendedHeader __attribute__((swift_name("doCopy(timeFromStartLogging:loggerIntervalSeconds:numberOfUnreadLogs:dataInformation:readIndex:extendedHeader:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PSCKotlinByteArray *)getLogHeaderByteBuffer __attribute__((swift_name("getLogHeaderByteBuffer()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setNumberOfLogsNumOfLogs:(int16_t)numOfLogs __attribute__((swift_name("setNumberOfLogs(numOfLogs:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int16_t dataInformation __attribute__((swift_name("dataInformation")));
@property int16_t extendedHeader __attribute__((swift_name("extendedHeader")));
@property int32_t loggerIntervalSeconds __attribute__((swift_name("loggerIntervalSeconds")));
@property int32_t numberOfUnreadLogs __attribute__((swift_name("numberOfUnreadLogs")));
@property int32_t readIndex __attribute__((swift_name("readIndex")));
@property int32_t timeFromStartLogging __attribute__((swift_name("timeFromStartLogging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgrammedAlert")))
@interface PSCProgrammedAlert : PSCBase
- (instancetype)initWithRawData:(int16_t)rawData rawTrigger:(int16_t)rawTrigger rawBeep:(int16_t)rawBeep __attribute__((swift_name("init(rawData:rawTrigger:rawBeep:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRawAlertData:(int64_t)rawAlertData __attribute__((swift_name("init(rawAlertData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getNamePod:(PSCSimulatedPod *)pod __attribute__((swift_name("getName(pod:)")));
- (NSString *)toStringPod:(PSCSimulatedPod *)pod __attribute__((swift_name("toString(pod:)")));
@property int64_t combinedAlertData __attribute__((swift_name("combinedAlertData")));
@property (readonly) int32_t durationMinutes __attribute__((swift_name("durationMinutes")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property int16_t rawBeep __attribute__((swift_name("rawBeep")));
@property int16_t rawData __attribute__((swift_name("rawData")));
@property int16_t rawTrigger __attribute__((swift_name("rawTrigger")));
@property (readonly) BOOL setAlarm __attribute__((swift_name("setAlarm")));
@property (readonly) int32_t triggerValue __attribute__((swift_name("triggerValue")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgrammedAlert.CloseLoopAlert")))
@interface PSCProgrammedAlertCloseLoopAlert : PSCKotlinEnum<PSCProgrammedAlertCloseLoopAlert *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *autooff __attribute__((swift_name("autooff")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *egvBelow55 __attribute__((swift_name("egvBelow55")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *expireimminent __attribute__((swift_name("expireimminent")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *expireusertime __attribute__((swift_name("expireusertime")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *lowreservoir __attribute__((swift_name("lowreservoir")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *missing12egvs __attribute__((swift_name("missing12egvs")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *existcloseloop __attribute__((swift_name("existcloseloop")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *podexpiration __attribute__((swift_name("podexpiration")));
@property (class, readonly) PSCProgrammedAlertCloseLoopAlert *none __attribute__((swift_name("none")));
+ (PSCKotlinArray<PSCProgrammedAlertCloseLoopAlert *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgrammedAlert.CloseLoopAlertCompanion")))
@interface PSCProgrammedAlertCloseLoopAlertCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCProgrammedAlertCloseLoopAlert *)getInstanceIndex:(int32_t)index __attribute__((swift_name("getInstance(index:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgrammedAlert.OpenLoopAlert")))
@interface PSCProgrammedAlertOpenLoopAlert : PSCKotlinEnum<PSCProgrammedAlertOpenLoopAlert *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *autooff __attribute__((swift_name("autooff")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *egvBelow55 __attribute__((swift_name("egvBelow55")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *expireimminent __attribute__((swift_name("expireimminent")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *expireusertime __attribute__((swift_name("expireusertime")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *lowreservoir __attribute__((swift_name("lowreservoir")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *suspendinprogress __attribute__((swift_name("suspendinprogress")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *suspendended __attribute__((swift_name("suspendended")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *podexpiration __attribute__((swift_name("podexpiration")));
@property (class, readonly) PSCProgrammedAlertOpenLoopAlert *none __attribute__((swift_name("none")));
+ (PSCKotlinArray<PSCProgrammedAlertOpenLoopAlert *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgrammedAlert.OpenLoopAlertCompanion")))
@interface PSCProgrammedAlertOpenLoopAlertCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCProgrammedAlertOpenLoopAlert *)getInstanceIndex:(int32_t)index __attribute__((swift_name("getInstance(index:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservoirSim")))
@interface PSCReservoirSim : PSCBase
- (instancetype)initWithPod:(PSCSimulatedPod *)pod __attribute__((swift_name("init(pod:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRemaining:(int32_t)remaining delivered:(int32_t)delivered __attribute__((swift_name("init(remaining:delivered:)"))) __attribute__((objc_designated_initializer));
- (PSCReservoirSim *)fastForwardToRemainingFinalRemaining:(int32_t)finalRemaining __attribute__((swift_name("fastForwardToRemaining(finalRemaining:)")));
- (int32_t)getDelivered __attribute__((swift_name("getDelivered()")));
- (int32_t)getRemaining __attribute__((swift_name("getRemaining()")));
@end;

__attribute__((swift_name("SimData")))
@interface PSCSimData : PSCBase
- (instancetype)initWithId:(int64_t)id seqNums:(NSString *)seqNums commLossErrorType:(int32_t)commLossErrorType commLossErrorCount:(int32_t)commLossErrorCount commLossErrorCode:(int32_t)commLossErrorCode commLossBeforeHoldingTimeInMillis:(int64_t)commLossBeforeHoldingTimeInMillis commLossBeforeHoldingErrorNo:(int64_t)commLossBeforeHoldingErrorNo logger:(PSCLogger *)logger __attribute__((swift_name("init(id:seqNums:commLossErrorType:commLossErrorCount:commLossErrorCode:commLossBeforeHoldingTimeInMillis:commLossBeforeHoldingErrorNo:logger:)"))) __attribute__((objc_designated_initializer));
- (void)appendSeqNumNum:(int8_t)num __attribute__((swift_name("appendSeqNum(num:)")));
- (void)clearCommLossErrors __attribute__((swift_name("clearCommLossErrors()")));
- (int32_t)getCommLossBeforeHoldingErrorCode __attribute__((swift_name("getCommLossBeforeHoldingErrorCode()")));
- (int32_t)getCommLossErrorCodeErrorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("getCommLossErrorCode(errorType:)")));
- (int32_t)getCommLossErrorCountErrorEnum:(PSCCommLossErrorEnum *)errorEnum __attribute__((swift_name("getCommLossErrorCount(errorEnum:)")));
- (int32_t)getSeqNumsCount __attribute__((swift_name("getSeqNumsCount()")));
- (BOOL)isCommLossErrorSetErrorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("isCommLossErrorSet(errorType:)")));
- (void)reduceCommLossErrorCountOrShiftErrorType __attribute__((swift_name("reduceCommLossErrorCountOrShiftErrorType()")));
- (void)saveCommLossBeforeHoldingTimeHoldingTimeInMills:(int64_t)holdingTimeInMills errorReasonNumber:(int32_t)errorReasonNumber __attribute__((swift_name("saveCommLossBeforeHoldingTime(holdingTimeInMills:errorReasonNumber:)")));
- (void)setCommLossErrorErrCount:(int32_t)errCount errCode:(int32_t)errCode errorEnum:(PSCCommLossErrorEnum *)errorEnum __attribute__((swift_name("setCommLossError(errCount:errCode:errorEnum:)")));
- (PSCSimDataTable *)toTable __attribute__((swift_name("toTable()")));
@property int32_t commLossErrorCount __attribute__((swift_name("commLossErrorCount")));
@property int32_t commLossErrorType __attribute__((swift_name("commLossErrorType")));
@property int64_t id __attribute__((swift_name("id")));
@property NSString *seqNums __attribute__((swift_name("seqNums")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimData.Companion")))
@interface PSCSimDataCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCSimData *)fromTableSimDataTable:(PSCSimDataTable *)simDataTable logger:(PSCLogger *)logger __attribute__((swift_name("fromTable(simDataTable:logger:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("SimulatedCgm")))
@interface PSCSimulatedCgm : PSCBase
- (instancetype)initWithCgmTxId:(NSString *)cgmTxId txLifeInDays:(int32_t)txLifeInDays isValidCgmStarted:(BOOL)isValidCgmStarted cgmAlgorithmState:(int32_t)cgmAlgorithmState logger:(PSCLogger *)logger __attribute__((swift_name("init(cgmTxId:txLifeInDays:isValidCgmStarted:cgmAlgorithmState:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCCgmAlgoStateEnum *)getCgmAlgorithmStateEnum __attribute__((swift_name("getCgmAlgorithmStateEnum()")));
- (PSCKotlinByteArray *)getCgmBleMacAddress __attribute__((swift_name("getCgmBleMacAddress()")));
- (PSCCgmStateEnum *)getCgmStateEnum __attribute__((swift_name("getCgmStateEnum()")));
- (PSCCgmTxStateEnum *)getCgmTransmitterStateEnum __attribute__((swift_name("getCgmTransmitterStateEnum()")));
- (NSString *)getPodCgmConditions __attribute__((swift_name("getPodCgmConditions()")));
- (int16_t)getTempSensorError __attribute__((swift_name("getTempSensorError()")));
- (int32_t)getTimeStamp0 __attribute__((swift_name("getTimeStamp0()")));
- (BOOL)hasValidBleAddress __attribute__((swift_name("hasValidBleAddress()")));
- (BOOL)hasValidCgmTxId __attribute__((swift_name("hasValidCgmTxId()")));
- (void)increase_cgm_signal_loss_count __attribute__((swift_name("increase_cgm_signal_loss_count()")));
- (void)increase_txid_ble_wait_count __attribute__((swift_name("increase_txid_ble_wait_count()")));
- (void)increase_txid_wait_count __attribute__((swift_name("increase_txid_wait_count()")));
- (BOOL)isHoldingCgmStateForTesting __attribute__((swift_name("isHoldingCgmStateForTesting()")));
- (BOOL)isTxExpiredCurrentTime:(int32_t)currentTime __attribute__((swift_name("isTxExpired(currentTime:)")));
- (NSString *)printMacAddress __attribute__((swift_name("printMacAddress()")));
- (void)setCgmBleMacAddressBleAddress:(PSCKotlinByteArray * _Nullable)bleAddress __attribute__((swift_name("setCgmBleMacAddress(bleAddress:)")));
- (int32_t)setEgvAndTimeStamp0Egv0:(int16_t)egv0 timeStampInSeconds:(int32_t)timeStampInSeconds podEgvTimeStamp0:(int32_t)podEgvTimeStamp0 __attribute__((swift_name("setEgvAndTimeStamp0(egv0:timeStampInSeconds:podEgvTimeStamp0:)")));
- (void)setPodCgmDriverCondCond:(NSString * _Nullable)cond __attribute__((swift_name("setPodCgmDriverCond(cond:)")));
- (void)setTempSensorErrorError:(int16_t)error __attribute__((swift_name("setTempSensorError(error:)")));
- (int32_t)setTimeStamp0TimeStamp:(int32_t)timeStamp __attribute__((swift_name("setTimeStamp0(timeStamp:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PSCCgmTable *)toTable __attribute__((swift_name("toTable()")));
@property int32_t cgmAlgorithmState __attribute__((swift_name("cgmAlgorithmState")));
@property int32_t cgmSensorState __attribute__((swift_name("cgmSensorState")));
@property int8_t cgmState __attribute__((swift_name("cgmState")));
@property int32_t cgmTransmitterState __attribute__((swift_name("cgmTransmitterState")));
@property NSString *cgmTxId __attribute__((swift_name("cgmTxId")));
@property int32_t cgm_signal_loss_count __attribute__((swift_name("cgm_signal_loss_count")));
@property int16_t egv0 __attribute__((swift_name("egv0")));
@property int64_t egvReferenceTime __attribute__((swift_name("egvReferenceTime")));
@property BOOL holdingCgmStateForTesting __attribute__((swift_name("holdingCgmStateForTesting")));
@property int64_t id __attribute__((swift_name("id")));
@property BOOL isValidCgmStarted __attribute__((swift_name("isValidCgmStarted")));
@property PSCLogger *logger __attribute__((swift_name("logger")));
@property int64_t txBirthTimeInSeconds __attribute__((swift_name("txBirthTimeInSeconds")));
@property int32_t txLifeInDays __attribute__((swift_name("txLifeInDays")));
@property int32_t txOperationIntervalInSeconds __attribute__((swift_name("txOperationIntervalInSeconds")));
@property int32_t txid_ble_wait_count __attribute__((swift_name("txid_ble_wait_count")));
@property int32_t txid_wait_count __attribute__((swift_name("txid_wait_count")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimulatedCgm.Companion")))
@interface PSCSimulatedCgmCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCSimulatedCgm *)fromTableCgmTable:(PSCCgmTable *)cgmTable logger:(PSCLogger *)logger __attribute__((swift_name("fromTable(cgmTable:logger:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("SimulatedPod")))
@interface PSCSimulatedPod : PSCBase
- (instancetype)initWithId:(int64_t)id pairingId:(NSString *)pairingId uid:(int32_t)uid podState:(int32_t)podState pulsesRemainingInReservoir:(int32_t)pulsesRemainingInReservoir podActivationTimeMillis:(int64_t)podActivationTimeMillis lastIPCommandSeqNum:(int16_t)lastIPCommandSeqNum lastIPCommandOpCode:(int8_t)lastIPCommandOpCode egvTimeStamp0:(int32_t)egvTimeStamp0 qnActivationStatus:(int8_t)qnActivationStatus autoOffAlertData:(int64_t)autoOffAlertData logger:(PSCLogger *)logger process:(PSCProcess *)process __attribute__((swift_name("init(id:pairingId:uid:podState:pulsesRemainingInReservoir:podActivationTimeMillis:lastIPCommandSeqNum:lastIPCommandOpCode:egvTimeStamp0:qnActivationStatus:autoOffAlertData:logger:process:)"))) __attribute__((objc_designated_initializer));
- (BOOL)activeAlertHaveNewBitsFromThisMaskAlertFlags:(int8_t)alertFlags __attribute__((swift_name("activeAlertHaveNewBitsFromThisMask(alertFlags:)")));
- (void)decreaseBolusPulsesRemainingPulsesDelivered:(int32_t)pulsesDelivered __attribute__((swift_name("decreaseBolusPulsesRemaining(pulsesDelivered:)")));
- (int32_t)decreaseIobAlgMicroUnit:(int32_t)microUnit __attribute__((swift_name("decreaseIobAlg(microUnit:)")));
- (void)decreasePulsesRemainingInReservoirPulsesDelivered:(int32_t)pulsesDelivered __attribute__((swift_name("decreasePulsesRemainingInReservoir(pulsesDelivered:)")));
- (int32_t)getAuditAlertMask __attribute__((swift_name("getAuditAlertMask()")));
- (BOOL)getBasalBolusActiveStatusFromPodBasalBolus:(NSString * _Nullable)basalBolus __attribute__((swift_name("getBasalBolusActiveStatusFromPod(basalBolus:)")));
- (int32_t)getBasalChannel __attribute__((swift_name("getBasalChannel()")));
- (NSString *)getBasalChannelName __attribute__((swift_name("getBasalChannelName()")));
- (int32_t)getBasalDataLength __attribute__((swift_name("getBasalDataLength()")));
- (int32_t)getBolusPulsesRemaining __attribute__((swift_name("getBolusPulsesRemaining()")));
- (PSCCgmStateEnum *)getCgmState __attribute__((swift_name("getCgmState()")));
- (int8_t)getDurationCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getDuration(currentTimeInSeconds:)")));
- (int16_t)getEgv0 __attribute__((swift_name("getEgv0()")));
- (int16_t)getEgvBelow55TimeStampInMinutes __attribute__((swift_name("getEgvBelow55TimeStampInMinutes()")));
- (int16_t)getEgvHighThreshold __attribute__((swift_name("getEgvHighThreshold()")));
- (int16_t)getEgvLowThreshold __attribute__((swift_name("getEgvLowThreshold()")));
- (int8_t)getEgvRate __attribute__((swift_name("getEgvRate()")));
- (int32_t)getEgvTimeStamp0LastPodTimeStampInSeconds:(int32_t)lastPodTimeStampInSeconds __attribute__((swift_name("getEgvTimeStamp0(lastPodTimeStampInSeconds:)")));
- (BOOL)getExtBolusActive __attribute__((swift_name("getExtBolusActive()")));
- (int32_t)getHypoProtectExpTime __attribute__((swift_name("getHypoProtectExpTime()")));
- (int8_t)getHypoProtectMode __attribute__((swift_name("getHypoProtectMode()")));
- (int8_t)getHypoProtectModeCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getHypoProtectMode(currentTimeInSeconds:)")));
- (int32_t)getIndexOfTargetBgAtCurrentTime __attribute__((swift_name("getIndexOfTargetBgAtCurrentTime()")));
- (int16_t)getInsulinHistoryRecordsIndexOffset __attribute__((swift_name("getInsulinHistoryRecordsIndexOffset()")));
- (int16_t)getInsulinHistoryRetrieveCount __attribute__((swift_name("getInsulinHistoryRetrieveCount()")));
- (BOOL)getIsBolusActive __attribute__((swift_name("getIsBolusActive()")));
- (BOOL)getIsExtBolusActive __attribute__((swift_name("getIsExtBolusActive()")));
- (int16_t)getLastIPCommandSeqNum __attribute__((swift_name("getLastIPCommandSeqNum()")));
- (NSString *)getLoopName __attribute__((swift_name("getLoopName()")));
- (int8_t)getMissedEgvCount __attribute__((swift_name("getMissedEgvCount()")));
- (BOOL)getMissingValidEgvs __attribute__((swift_name("getMissingValidEgvs()")));
- (int16_t)getNextTotalSuggestedInsulinSeqIndex __attribute__((swift_name("getNextTotalSuggestedInsulinSeqIndex()")));
- (int32_t)getPdmTimeOfDayCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getPdmTimeOfDay(currentTimeInSeconds:)")));
- (int32_t)getPodActivationTimeInSeconds __attribute__((swift_name("getPodActivationTimeInSeconds()")));
- (int16_t)getPodLifeInMinutesPodLifeInSeconds:(int32_t)podLifeInSeconds __attribute__((swift_name("getPodLifeInMinutes(podLifeInSeconds:)")));
- (int32_t)getPodLifeInSeconds __attribute__((swift_name("getPodLifeInSeconds()")));
- (int16_t)getPodLiveTimeInMinutesCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getPodLiveTimeInMinutes(currentTimeInSeconds:)")));
- (PSCPodQnState *)getPodQnState __attribute__((swift_name("getPodQnState()")));
- (int32_t)getPodRemainingTimeInMinutesPodLifeInHours:(int32_t)podLifeInHours currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getPodRemainingTimeInMinutes(podLifeInHours:currentTimeInSeconds:)")));
- (int32_t)getPodState __attribute__((swift_name("getPodState()")));
- (int32_t)getPulsesRemainingInReservoir __attribute__((swift_name("getPulsesRemainingInReservoir()")));
- (PSCKotlinByteArray *)getTargetBgProfile __attribute__((swift_name("getTargetBgProfile()")));
- (int8_t)getTargetBgSetPoint __attribute__((swift_name("getTargetBgSetPoint()")));
- (BOOL)hasMissed12Egv __attribute__((swift_name("hasMissed12Egv()")));
- (BOOL)hypoProtectExpiredCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("hypoProtectExpired(currentTimeInSeconds:)")));
- (void)increaseInsulinHistoryTotalNumberCount:(int16_t)count __attribute__((swift_name("increaseInsulinHistoryTotalNumber(count:)")));
- (void)increasePulsesDeliveredTotalOnPodPulsesDelivered:(int32_t)pulsesDelivered addIob:(BOOL)addIob __attribute__((swift_name("increasePulsesDeliveredTotalOnPod(pulsesDelivered:addIob:)")));
- (BOOL)isActiveAlertOnThisTypeAlert:(int8_t)alert __attribute__((swift_name("isActiveAlertOnThisType(alert:)")));
- (BOOL)isAuditAlertOnThisTypeAlert:(int8_t)alert __attribute__((swift_name("isAuditAlertOnThisType(alert:)")));
- (BOOL)isBasalRunning __attribute__((swift_name("isBasalRunning()")));
- (BOOL)isDuplicatedWithLastIPCommandSeq:(int16_t)seq opCode:(int8_t)opCode isNotDuplicatedIpCommandInControl:(BOOL)isNotDuplicatedIpCommandInControl __attribute__((swift_name("isDuplicatedWithLastIPCommand(seq:opCode:isNotDuplicatedIpCommandInControl:)")));
- (BOOL)isNotRunInsulin __attribute__((swift_name("isNotRunInsulin()")));
- (BOOL)isPodAlarming __attribute__((swift_name("isPodAlarming()")));
- (BOOL)isPodExpiredPodLifeInHours:(int32_t)podLifeInHours __attribute__((swift_name("isPodExpired(podLifeInHours:)")));
- (BOOL)isPodInCloseLoop __attribute__((swift_name("isPodInCloseLoop()")));
- (BOOL)isPodReservoirEmpty __attribute__((swift_name("isPodReservoirEmpty()")));
- (BOOL)isProgrammingAuditedAlert __attribute__((swift_name("isProgrammingAuditedAlert()")));
- (BOOL)isReadyToReceiveEgv __attribute__((swift_name("isReadyToReceiveEgv()")));
- (void)resetMissingEgvCount __attribute__((swift_name("resetMissingEgvCount()")));
- (void)setAuditAlertMaskAlertMask:(int32_t)alertMask __attribute__((swift_name("setAuditAlertMask(alertMask:)")));
- (void)setBasalDataLengthBasalData:(NSString * _Nullable)basalData __attribute__((swift_name("setBasalDataLength(basalData:)")));
- (void)setBasalLimitedModeOff __attribute__((swift_name("setBasalLimitedModeOff()")));
- (void)setBasalLimitedModeOn __attribute__((swift_name("setBasalLimitedModeOn()")));
- (BOOL)setBolusActiveBolusActive:(BOOL)bolusActive __attribute__((swift_name("setBolusActive(bolusActive:)")));
- (void)setBolusPulsesRemainingBolusPulsesRemaining:(int32_t)bolusPulsesRemaining __attribute__((swift_name("setBolusPulsesRemaining(bolusPulsesRemaining:)")));
- (void)setCgmStateValueCgmState:(int8_t)cgmState __attribute__((swift_name("setCgmStateValue(cgmState:)")));
- (void)setDurationDuration:(int8_t)duration currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setDuration(duration:currentTimeInSeconds:)")));
- (void)setEgv0Egv:(int16_t)egv __attribute__((swift_name("setEgv0(egv:)")));
- (void)setEgvBelow55TimeStampInMinutes __attribute__((swift_name("setEgvBelow55TimeStampInMinutes()")));
- (void)setEgvFromCgmEgv:(int16_t)egv timeStamp:(int32_t)timeStamp __attribute__((swift_name("setEgvFromCgm(egv:timeStamp:)")));
- (void)setEgvRateEgvRate:(int8_t)egvRate __attribute__((swift_name("setEgvRate(egvRate:)")));
- (void)setEgvTimeStamp0EgvTimeStamp0:(int32_t)egvTimeStamp0 __attribute__((swift_name("setEgvTimeStamp0(egvTimeStamp0:)")));
- (BOOL)setExtBolusActiveValue:(BOOL)value __attribute__((swift_name("setExtBolusActive(value:)")));
- (void)setHypoProtectModeHypoProtectMode:(int8_t)hypoProtectMode __attribute__((swift_name("setHypoProtectMode(hypoProtectMode:)")));
- (void)setInsulinHistoryRecordsIndexOffsetInsulinHistoryRecordsIndexOffset:(int16_t)insulinHistoryRecordsIndexOffset __attribute__((swift_name("setInsulinHistoryRecordsIndexOffset(insulinHistoryRecordsIndexOffset:)")));
- (void)setInsulinHistoryRetrieveCountCount:(int16_t)count __attribute__((swift_name("setInsulinHistoryRetrieveCount(count:)")));
- (void)setLastIPCommandSequenceNumberLastIPCommandSeqNum:(int16_t)lastIPCommandSeqNum lastIPCommandOpCode:(int8_t)lastIPCommandOpCode __attribute__((swift_name("setLastIPCommandSequenceNumber(lastIPCommandSeqNum:lastIPCommandOpCode:)")));
- (void)setMissedEgvCountMissedEgvCount:(int8_t)missedEgvCount __attribute__((swift_name("setMissedEgvCount(missedEgvCount:)")));
- (void)setMissingValidEgvsMissingValidEgvs:(int32_t)missingValidEgvs __attribute__((swift_name("setMissingValidEgvs(missingValidEgvs:)")));
- (void)setPdmTimeDeviationInSecondsPdmTimeDeviationInSeconds:(int32_t)pdmTimeDeviationInSeconds __attribute__((swift_name("setPdmTimeDeviationInSeconds(pdmTimeDeviationInSeconds:)")));
- (void)setPodQnStatePodQnState:(PSCPodQnState *)podQnState __attribute__((swift_name("setPodQnState(podQnState:)")));
- (void)setPodStatePodState:(PSCPodState *)podState __attribute__((swift_name("setPodState(podState:)")));
- (void)setPodStatePodState_:(int32_t)podState __attribute__((swift_name("setPodState(podState_:)")));
- (void)setPulsesRemainingInReservoirPulsesRemainingInReservoir:(int32_t)pulsesRemainingInReservoir __attribute__((swift_name("setPulsesRemainingInReservoir(pulsesRemainingInReservoir:)")));
- (void)setTargetBgProfileAlgorithmSetPointValues:(PSCKotlinByteArray * _Nullable)algorithmSetPointValues __attribute__((swift_name("setTargetBgProfile(algorithmSetPointValues:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PSCSimPodTable *)toTable __attribute__((swift_name("toTable()")));
- (BOOL)turnOffActiveAlertMaskAlertFlags:(int8_t)alertFlags __attribute__((swift_name("turnOffActiveAlertMask(alertFlags:)")));
- (BOOL)turnOffAuditAlertMaskAlertFlags:(int8_t)alertFlags __attribute__((swift_name("turnOffAuditAlertMask(alertFlags:)")));
- (void)turnOffEgvBelow55Alert __attribute__((swift_name("turnOffEgvBelow55Alert()")));
- (void)turnOffSuspendEndedAlert __attribute__((swift_name("turnOffSuspendEndedAlert()")));
- (void)turnOffSuspendInProgressAlert __attribute__((swift_name("turnOffSuspendInProgressAlert()")));
- (BOOL)turnOnActiveAlertMaskAlertFlags:(int8_t)alertFlags __attribute__((swift_name("turnOnActiveAlertMask(alertFlags:)")));
- (BOOL)turnOnAuditAlertMaskAlertFlags:(int8_t)alertFlags __attribute__((swift_name("turnOnAuditAlertMask(alertFlags:)")));
- (void)turnOnEgvBelow55Alert __attribute__((swift_name("turnOnEgvBelow55Alert()")));
- (void)turnOnSuspendEndedAlert __attribute__((swift_name("turnOnSuspendEndedAlert()")));
- (void)turnOnSuspendInProgressAlert __attribute__((swift_name("turnOnSuspendInProgressAlert()")));
@property int32_t accumulatedPPCount __attribute__((swift_name("accumulatedPPCount")));
@property int32_t activeAlertsMask __attribute__((swift_name("activeAlertsMask")));
@property BOOL add_PPWhenWakeup __attribute__((swift_name("add_PPWhenWakeup")));
@property int8_t aidStatusWarningFlag __attribute__((swift_name("aidStatusWarningFlag")));
@property int16_t alarmTimeSincePodActivateInMinutes __attribute__((swift_name("alarmTimeSincePodActivateInMinutes")));
@property int32_t alarmValue __attribute__((swift_name("alarmValue")));
@property BOOL algoFirstRunFlag __attribute__((swift_name("algoFirstRunFlag")));
@property int64_t autoOffAlertData __attribute__((swift_name("autoOffAlertData")));
@property NSString * _Nullable basalData __attribute__((swift_name("basalData")));
@property NSString *basalInitData __attribute__((swift_name("basalInitData")));
@property BOOL basalInitStarter __attribute__((swift_name("basalInitStarter")));
@property BOOL basalInitState __attribute__((swift_name("basalInitState")));
@property int8_t basalLimitedMode __attribute__((swift_name("basalLimitedMode")));
@property BOOL bolusActiveAtAlarm __attribute__((swift_name("bolusActiveAtAlarm")));
@property int32_t bolusPulsesDelivered __attribute__((swift_name("bolusPulsesDelivered")));
@property int32_t bolusPulsesTotal __attribute__((swift_name("bolusPulsesTotal")));
@property int32_t bolusState __attribute__((swift_name("bolusState")));
@property PSCKotlinByteArray * _Nullable correctionFactorProfile __attribute__((swift_name("correctionFactorProfile")));
@property int32_t delayBetweenPPExtendedInMils __attribute__((swift_name("delayBetweenPPExtendedInMils")));
@property int32_t delayBetweenPPImmediateInMils __attribute__((swift_name("delayBetweenPPImmediateInMils")));
@property int32_t delayUntilFirstPP __attribute__((swift_name("delayUntilFirstPP")));
@property int8_t dia __attribute__((swift_name("dia")));
@property int64_t egvBelow55AlertData __attribute__((swift_name("egvBelow55AlertData")));
@property int32_t egvThreshold __attribute__((swift_name("egvThreshold")));
@property int8_t er48ActivationStatus __attribute__((swift_name("er48ActivationStatus")));
@property BOOL existCloseLoopAlert __attribute__((swift_name("existCloseLoopAlert")));
@property int32_t extBolusExpireTimeInSec __attribute__((swift_name("extBolusExpireTimeInSec")));
@property int32_t extendedBolusPulses __attribute__((swift_name("extendedBolusPulses")));
@property BOOL hittingMax __attribute__((swift_name("hittingMax")));
@property int64_t id __attribute__((swift_name("id")));
@property int32_t immediateBolusPulses __attribute__((swift_name("immediateBolusPulses")));
@property int64_t imminentExpirationAlertData __attribute__((swift_name("imminentExpirationAlertData")));
@property int16_t insulinHistoryTotalNumber __attribute__((swift_name("insulinHistoryTotalNumber")));
@property int8_t intensity __attribute__((swift_name("intensity")));
@property int32_t iobAlg __attribute__((swift_name("iobAlg")));
@property BOOL isBasalActive __attribute__((swift_name("isBasalActive")));
@property BOOL isSeqNumDuplicated __attribute__((swift_name("isSeqNumDuplicated")));
@property BOOL isTempBasalActive __attribute__((swift_name("isTempBasalActive")));
@property int8_t lastCommandOpcode __attribute__((swift_name("lastCommandOpcode")));
@property int8_t lastIPCommandOpCode __attribute__((swift_name("lastIPCommandOpCode")));
@property int64_t locAlertData __attribute__((swift_name("locAlertData")));
@property PSCLogger *logger __attribute__((swift_name("logger")));
@property int8_t loopState __attribute__((swift_name("loopState")));
@property int32_t lotSeqNum __attribute__((swift_name("lotSeqNum")));
@property int64_t lowResAlertData __attribute__((swift_name("lowResAlertData")));
@property BOOL missCgmAlert __attribute__((swift_name("missCgmAlert")));
@property int32_t nextLoggerTimeInSeconds __attribute__((swift_name("nextLoggerTimeInSeconds")));
@property BOOL occlusionAlert __attribute__((swift_name("occlusionAlert")));
@property NSString *pairingId __attribute__((swift_name("pairingId")));
@property int64_t podActivationTimeMillis __attribute__((swift_name("podActivationTimeMillis")));
@property int32_t podExpHourAlerted __attribute__((swift_name("podExpHourAlerted")));
@property int64_t podExpirationAlertData __attribute__((swift_name("podExpirationAlertData")));
@property int32_t podStateAtAlarm __attribute__((swift_name("podStateAtAlarm")));
@property PSCProcess *process __attribute__((swift_name("process")));
@property BOOL programmingAuditedAlert __attribute__((swift_name("programmingAuditedAlert")));
@property int32_t pulsesDeliveredTotalOnPod __attribute__((swift_name("pulsesDeliveredTotalOnPod")));
@property int8_t qnActivationStatus __attribute__((swift_name("qnActivationStatus")));
@property BOOL stopBolus __attribute__((swift_name("stopBolus")));
@property BOOL stopBolusForTesting __attribute__((swift_name("stopBolusForTesting")));
@property int64_t suspendEndedAlertData __attribute__((swift_name("suspendEndedAlertData")));
@property int64_t suspendInProgressAlertData __attribute__((swift_name("suspendInProgressAlertData")));
@property BOOL suspension __attribute__((swift_name("suspension")));
@property int16_t tdi __attribute__((swift_name("tdi")));
@property BOOL tdiSihnFlag __attribute__((swift_name("tdiSihnFlag")));
@property NSString *tempBasalData __attribute__((swift_name("tempBasalData")));
@property BOOL tempBasalInitState __attribute__((swift_name("tempBasalInitState")));
@property int32_t uid __attribute__((swift_name("uid")));
@property int64_t userExpirationAlertData __attribute__((swift_name("userExpirationAlertData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimulatedPod.Companion")))
@interface PSCSimulatedPodCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCSimulatedPod *)fromTablePodTable:(PSCSimPodTable *)podTable logger:(PSCLogger *)logger __attribute__((swift_name("fromTable(podTable:logger:)")));
@property (readonly) NSString *AUTO_OFF_ALERT_DATA __attribute__((swift_name("AUTO_OFF_ALERT_DATA")));
@property (readonly) NSString *LOC_ALERT_DATA __attribute__((swift_name("LOC_ALERT_DATA")));
@property (readonly) NSString *LOW_RESERVOIR_ALERT_DATA __attribute__((swift_name("LOW_RESERVOIR_ALERT_DATA")));
@property (readonly) NSString *PROGRAMMED_ALERT_MASK __attribute__((swift_name("PROGRAMMED_ALERT_MASK")));
@property (readonly) NSString *RESERVOIR_LEVEL_FIELD __attribute__((swift_name("RESERVOIR_LEVEL_FIELD")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *USER_SET_EXPIRATION_ALERT_DATA __attribute__((swift_name("USER_SET_EXPIRATION_ALERT_DATA")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasal")))
@interface PSCTempBasal : PSCBase
- (instancetype)initWithTempBasalData:(PSCKotlinByteArray * _Nullable)tempBasalData logger:(PSCLogger *)logger __attribute__((swift_name("init(tempBasalData:logger:)"))) __attribute__((objc_designated_initializer));
- (PSCTempBasalStep * _Nullable)getCurrentStepTimeInMillis:(int64_t)timeInMillis __attribute__((swift_name("getCurrentStep(timeInMillis:)")));
- (PSCTempBasalStep * _Nullable)getInitTempBasalStep __attribute__((swift_name("getInitTempBasalStep()")));
- (PSCKotlinByteArray * _Nullable)getTempBasalStepBytes __attribute__((swift_name("getTempBasalStepBytes()")));
@property int32_t delayUntilFirstPP __attribute__((swift_name("delayUntilFirstPP")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property (readonly) int32_t numSteps __attribute__((swift_name("numSteps")));
@property NSMutableArray<PSCTempBasalStep *> *steps __attribute__((swift_name("steps")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasal.Companion")))
@interface PSCTempBasalCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasalStep")))
@interface PSCTempBasalStep : PSCStep
- (instancetype)initWithTempBasalData:(PSCKotlinByteArray *)tempBasalData logger:(PSCLogger *)logger __attribute__((swift_name("init(tempBasalData:logger:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithStartTimeInMilSeconds:(int64_t)startTimeInMilSeconds durationInMillis:(int32_t)durationInMillis ppInStep:(int32_t)ppInStep delayBetweenPPInMillis:(int32_t)delayBetweenPPInMillis isZeroBasalSegment:(BOOL)isZeroBasalSegment __attribute__((swift_name("init(startTimeInMilSeconds:durationInMillis:ppInStep:delayBetweenPPInMillis:isZeroBasalSegment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (PSCTempBasalStep *)doCopyStartTimeInMilSeconds:(int64_t)startTimeInMilSeconds durationInMillis:(int32_t)durationInMillis ppInStep:(int32_t)ppInStep delayBetweenPPInMillis:(int32_t)delayBetweenPPInMillis isZeroBasalSegment:(BOOL)isZeroBasalSegment __attribute__((swift_name("doCopy(startTimeInMilSeconds:durationInMillis:ppInStep:delayBetweenPPInMillis:isZeroBasalSegment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int64_t)getDurationInMillis __attribute__((swift_name("getDurationInMillis()")));
- (PSCKotlinByteArray *)getStepAsBytes __attribute__((swift_name("getStepAsBytes()")));
- (NSString *)getStepHexString __attribute__((swift_name("getStepHexString()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isInCurrentStepCurrentTimeInMilSeconds:(int64_t)currentTimeInMilSeconds __attribute__((swift_name("isInCurrentStep(currentTimeInMilSeconds:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t delayBetweenPPInMillis __attribute__((swift_name("delayBetweenPPInMillis")));
@property int32_t durationInMillis __attribute__((swift_name("durationInMillis")));
@property int64_t endTimeInMilSeconds __attribute__((swift_name("endTimeInMilSeconds")));
@property BOOL isZeroBasalSegment __attribute__((swift_name("isZeroBasalSegment")));
@property int32_t ppInStep __attribute__((swift_name("ppInStep")));
@property int64_t startTimeInMilSeconds __attribute__((swift_name("startTimeInMilSeconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TempBasalStep.Companion")))
@interface PSCTempBasalStepCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("AdbCommand")))
@protocol PSCAdbCommand
@required
- (void)execute __attribute__((swift_name("execute()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FastModeCommand")))
@interface PSCFastModeCommand : PSCBase <PSCAdbCommand>
- (instancetype)initWithPodControl:(PSCPodControl *)podControl logger:(PSCLogger *)logger enableFastPodSim:(BOOL)enableFastPodSim __attribute__((swift_name("init(podControl:logger:enableFastPodSim:)"))) __attribute__((objc_designated_initializer));
- (void)execute __attribute__((swift_name("execute()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FastModeCommand.Companion")))
@interface PSCFastModeCommandCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *EXTRA_SET_FAST_MODE_PODSIM __attribute__((swift_name("EXTRA_SET_FAST_MODE_PODSIM")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogCommand")))
@interface PSCLogCommand : PSCBase <PSCAdbCommand>
- (instancetype)initWithLogger:(PSCLogger *)logger __attribute__((swift_name("init(logger:)"))) __attribute__((objc_designated_initializer));
- (void)execute __attribute__((swift_name("execute()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogCommand.Companion")))
@interface PSCLogCommandCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@end;

__attribute__((swift_name("PodControl")))
@interface PSCPodControl : PSCBase
- (instancetype)initWithSimulateMoreThanOnePod:(BOOL)simulateMoreThanOnePod podUtil:(PSCPodUtil *)podUtil logger:(PSCLogger *)logger comm_error_map:(PSCKeyValueCountMap *)comm_error_map Unconfirmed_Send_Map:(PSCKeyCountMap *)Unconfirmed_Send_Map bolus_basal_map:(PSCKeyValueCountMap *)bolus_basal_map alter_response_cmd_map:(PSCKeyValueResultMap *)alter_response_cmd_map ErrorCommand_map:(PSCKeyValueCountMap *)ErrorCommand_map shared_attribute_map:(PSCKeyValueCountMap *)shared_attribute_map command_nak_response:(PSCKeyCountMap *)command_nak_response mismatchedCommandResponse:(PSCKeyCountMap *)mismatchedCommandResponse flag_set_map:(PSCKeyCountMap *)flag_set_map ipCommandTestForNextStep:(PSCIPCommandTestForNextStep * _Nullable)ipCommandTestForNextStep ipCommandTestResponseResult:(int32_t)ipCommandTestResponseResult alterSeqNumberCount:(int32_t)alterSeqNumberCount testingTimeSinceActivation:(int32_t)testingTimeSinceActivation testingRemainingPulses:(int32_t)testingRemainingPulses testingDeliveredPulses:(int32_t)testingDeliveredPulses repository:(PSCRepository *)repository __attribute__((swift_name("init(simulateMoreThanOnePod:podUtil:logger:comm_error_map:Unconfirmed_Send_Map:bolus_basal_map:alter_response_cmd_map:ErrorCommand_map:shared_attribute_map:command_nak_response:mismatchedCommandResponse:flag_set_map:ipCommandTestForNextStep:ipCommandTestResponseResult:alterSeqNumberCount:testingTimeSinceActivation:testingRemainingPulses:testingDeliveredPulses:repository:)"))) __attribute__((objc_designated_initializer));
- (void)agePodValue:(int64_t)value timeUnit:(PSCKotlinDurationUnit *)timeUnit __attribute__((swift_name("agePod(value:timeUnit:)")));
- (void)appendCmdSeqNumArraySeqNum:(int8_t)seqNum isIPCommand:(BOOL)isIPCommand simData:(PSCSimData *)simData __attribute__((swift_name("appendCmdSeqNumArray(seqNum:isIPCommand:simData:)")));
- (void)cleanCmdSeqArray __attribute__((swift_name("cleanCmdSeqArray()")));
- (void)clearAllSimulationsAutoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine sharedPrefsUtil:(PSCSharedPrefsUtil *)sharedPrefsUtil __attribute__((swift_name("clearAllSimulations(autoOffStateMachine:sharedPrefsUtil:)")));
- (void)clearAutoOffStateMachineDurationValueAutoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine __attribute__((swift_name("clearAutoOffStateMachineDurationValue(autoOffStateMachine:)")));
- (void)clearAutoOffStateMachineTriggerValueAutoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine __attribute__((swift_name("clearAutoOffStateMachineTriggerValue(autoOffStateMachine:)")));
- (void)clearPodErrorCommandErrorCodesCmd:(NSString * _Nullable)cmd __attribute__((swift_name("clearPodErrorCommandErrorCodes(cmd:)")));
- (void)clearUnconfirmedSendMap __attribute__((swift_name("clearUnconfirmedSendMap()")));
- (void)enableFastPodSimEnableFastPodSim:(BOOL)enableFastPodSim __attribute__((swift_name("enableFastPodSim(enableFastPodSim:)")));
- (BOOL)getAndRemoveMisMatchCommandResponseCmd:(NSString *)cmd __attribute__((swift_name("getAndRemoveMisMatchCommandResponse(cmd:)")));
- (int32_t)getBolus_CLA_ResponseType __attribute__((swift_name("getBolus_CLA_ResponseType()")));
- (int32_t)getCommLossErrorCodeAndReduceCountErrorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("getCommLossErrorCodeAndReduceCount(errorType:)")));
- (NSString * _Nullable)getCommandAlteredResponseCmdName:(NSString * _Nullable)cmdName __attribute__((swift_name("getCommandAlteredResponse(cmdName:)")));
- (int32_t)getCommandErrorCodeCmd:(NSString * _Nullable)cmd __attribute__((swift_name("getCommandErrorCode(cmd:)")));
- (PSCIPCommandTestForNextStep * _Nullable)getIpCommandTestForNextStep __attribute__((swift_name("getIpCommandTestForNextStep()")));
- (int32_t)getLastCycleTimeCgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("getLastCycleTime(cgm:currentTimeInSeconds:)")));
- (int32_t)getLastPodTimeStampInSeconds __attribute__((swift_name("getLastPodTimeStampInSeconds()")));
- (int8_t)getModifiedStatusPage __attribute__((swift_name("getModifiedStatusPage()")));
- (int16_t)getPodActivationTimeForAlarmPage2 __attribute__((swift_name("getPodActivationTimeForAlarmPage2()")));
- (int32_t)getPodLifeInHoursSharedPrefsUtil:(PSCSharedPrefsUtil *)sharedPrefsUtil __attribute__((swift_name("getPodLifeInHours(sharedPrefsUtil:)")));
- (NSString * _Nullable)getPodStateFromEgvEgv:(int32_t)egv __attribute__((swift_name("getPodStateFromEgv(egv:)")));
- (int8_t)getProductId __attribute__((swift_name("getProductId()")));
- (int32_t)getPulsesDeliveredTotal __attribute__((swift_name("getPulsesDeliveredTotal()")));
- (PSCSharedPrefsUtil *)getSharedPrefUtil __attribute__((swift_name("getSharedPrefUtil()")));
- (int32_t)getSimulatedPodQnState __attribute__((swift_name("getSimulatedPodQnState()")));
- (BOOL)getUnconfirmedSendErrorAndReduceCountInCmd:(NSString *)inCmd __attribute__((swift_name("getUnconfirmedSendErrorAndReduceCount(inCmd:)")));
- (void)ipCommandAlarmInResponseUsecase:(NSString *)usecase alarm_Value:(int32_t)alarm_Value ip_response:(int32_t)ip_response __attribute__((swift_name("ipCommandAlarmInResponse(usecase:alarm_Value:ip_response:)")));
- (PSCDisconnectionReason * _Nullable)isCommLossAfterErrorSet __attribute__((swift_name("isCommLossAfterErrorSet()")));
- (PSCDisconnectionReason * _Nullable)isCommLossBeforeErrorSet __attribute__((swift_name("isCommLossBeforeErrorSet()")));
- (BOOL)isCommandAlterResponseWholeCmdName:(NSString *)cmdName __attribute__((swift_name("isCommandAlterResponseWhole(cmdName:)")));
- (PSCDisconnectionReason * _Nullable)isConnectErrorSet __attribute__((swift_name("isConnectErrorSet()")));
- (BOOL)isFastPodSimEnabled __attribute__((swift_name("isFastPodSimEnabled()")));
- (BOOL)isQnStateSetInSimulation __attribute__((swift_name("isQnStateSetInSimulation()")));
- (BOOL)isSimulatePage2ForRAMReset __attribute__((swift_name("isSimulatePage2ForRAMReset()")));
- (BOOL)isThisCommandNakCmd:(NSString * _Nullable)cmd __attribute__((swift_name("isThisCommandNak(cmd:)")));
- (BOOL)isThisCommandResponseAlteredCmdName:(NSString *)cmdName __attribute__((swift_name("isThisCommandResponseAltered(cmdName:)")));
- (int32_t)nextEgvEmulateStyle __attribute__((swift_name("nextEgvEmulateStyle()")));
- (BOOL)notDuplicatedIpCmd __attribute__((swift_name("notDuplicatedIpCmd()")));
- (void)printPodErrorCommandErrorCode __attribute__((swift_name("printPodErrorCommandErrorCode()")));
- (void)printPodsimCGMStatusCgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("printPodsimCGMStatus(cgm:)")));
- (void)printUnconfirmedSendMap __attribute__((swift_name("printUnconfirmedSendMap()")));
- (void)receiveSpecialEgvFromCgmEgv:(int32_t)egv currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("receiveSpecialEgvFromCgm(egv:currentTimeInSeconds:)")));
- (PSCCommLossParameters *)reduceCommLossErrorCountInSimDataErrorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("reduceCommLossErrorCountInSimData(errorType:)")));
- (void)removeEgvAndTimeStampHolding __attribute__((swift_name("removeEgvAndTimeStampHolding()")));
- (void)removePodErrorCommandCmd:(NSString *)cmd __attribute__((swift_name("removePodErrorCommand(cmd:)")));
- (void)resetAutoOffStateMachineAutoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine __attribute__((swift_name("resetAutoOffStateMachine(autoOffStateMachine:)")));
- (void)setActionSimulateConnectErrorError_reason:(int32_t)error_reason error_count:(int32_t)error_count __attribute__((swift_name("setActionSimulateConnectError(error_reason:error_count:)")));
- (void)setActionSimulatorCommLossAfterReceivingError_reason:(int32_t)error_reason error_count:(int32_t)error_count __attribute__((swift_name("setActionSimulatorCommLossAfterReceiving(error_reason:error_count:)")));
- (PSCCommLossParameters *)setActionSimulatorCommLossBeforeReceivingErrorReason:(int32_t)errorReason errorCount:(int32_t)errorCount __attribute__((swift_name("setActionSimulatorCommLossBeforeReceiving(errorReason:errorCount:)")));
- (void)setActionSimulatorCommLossBeforeReceivingWithHoldingTimeErrorReason:(int32_t)errorReason holdTimeInSeconds:(int32_t)holdTimeInSeconds __attribute__((swift_name("setActionSimulatorCommLossBeforeReceivingWithHoldingTime(errorReason:holdTimeInSeconds:)")));
- (void)setActionSimulatorCommLossBeforeReceivingWithHoldingTimeError_reason:(int32_t)error_reason error_count:(int32_t)error_count holdTimeInSeconds:(int32_t)holdTimeInSeconds __attribute__((swift_name("setActionSimulatorCommLossBeforeReceivingWithHoldingTime(error_reason:error_count:holdTimeInSeconds:)")));
- (void)setActivationTimeActivationTime:(int64_t)activationTime __attribute__((swift_name("setActivationTime(activationTime:)")));
- (void)setActiveCgmAlgoWithEgvForTestingCgmAlgoStateEnum:(PSCCgmAlgoStateEnum *)cgmAlgoStateEnum cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds cgmUtil:(PSCCgmUtil *)cgmUtil __attribute__((swift_name("setActiveCgmAlgoWithEgvForTesting(cgmAlgoStateEnum:cgm:currentTimeInSeconds:cgmUtil:)")));
- (void)setActiveCgmEgvAndTimeStampEgv:(int16_t)egv timeStampInSeconds:(int32_t)timeStampInSeconds cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setActiveCgmEgvAndTimeStamp(egv:timeStampInSeconds:cgm:)")));
- (void)setActiveCgmTempEgvEgv:(int16_t)egv updateTimeStamp:(BOOL)updateTimeStamp cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setActiveCgmTempEgv(egv:updateTimeStamp:cgm:currentTimeInSeconds:)")));
- (void)setActiveCgmTempEgvEgv:(int16_t)egv currentTimeInSeconds:(int32_t)currentTimeInSeconds cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setActiveCgmTempEgv(egv:currentTimeInSeconds:cgm:)")));
- (void)setActiveCgmWithErrorForTestingAlgoState:(NSString *)algoState cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds cgmUtil:(PSCCgmUtil *)cgmUtil __attribute__((swift_name("setActiveCgmWithErrorForTesting(algoState:cgm:currentTimeInSeconds:cgmUtil:)")));
- (void)setActiveCgmWithFixedEgvEgv:(int16_t)egv cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setActiveCgmWithFixedEgv(egv:cgm:currentTimeInSeconds:)")));
- (void)setActiveCgmWithTempSensorErrorCgmSpecialEgv:(PSCCgmSpecialEgvEnum *)cgmSpecialEgv currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setActiveCgmWithTempSensorError(cgmSpecialEgv:currentTimeInSeconds:)")));
- (void)setAidLoopStateLoopStateValue:(int32_t)loopStateValue __attribute__((swift_name("setAidLoopState(loopStateValue:)")));
- (void)setAidStatusWarningFlagFlag:(int8_t)flag __attribute__((swift_name("setAidStatusWarningFlag(flag:)")));
- (void)setAlarmAlarmValue:(int8_t)alarmValue __attribute__((swift_name("setAlarm(alarmValue:)")));
- (void)setAlarmAlarmValue:(int8_t)alarmValue podActivationTime:(int16_t)podActivationTime __attribute__((swift_name("setAlarm(alarmValue:podActivationTime:)")));
- (void)setAlarmWithOverrideValueInPage2AlarmValue:(int8_t)alarmValue podActivationTime:(int16_t)podActivationTime __attribute__((swift_name("setAlarmWithOverrideValueInPage2(alarmValue:podActivationTime:)")));
- (void)setAlertAlertMask:(int32_t)alertMask on_off:(int32_t)on_off __attribute__((swift_name("setAlert(alertMask:on_off:)")));
- (void)setAlterCommandResponseCmdName:(NSString *)cmdName cmdReponse:(NSString *)cmdReponse result:(int32_t)result __attribute__((swift_name("setAlterCommandResponse(cmdName:cmdReponse:result:)")));
- (void)setAlterResponseForTestKeyValue:(NSString * _Nullable)keyValue value:(NSString * _Nullable)value result:(int32_t)result __attribute__((swift_name("setAlterResponseForTest(keyValue:value:result:)")));
- (void)setAutoOffDurationValueMinutesMinutes:(int32_t)minutes autoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine __attribute__((swift_name("setAutoOffDurationValueMinutes(minutes:autoOffStateMachine:)")));
- (void)setAutoOffTriggerValueMinutesMinutes:(int32_t)minutes autoOffStateMachine:(PSCAutoOffStateMachine *)autoOffStateMachine __attribute__((swift_name("setAutoOffTriggerValueMinutes(minutes:autoOffStateMachine:)")));
- (void)setBasalBolusActiveStateBasal:(int32_t)basal tempBasal:(int32_t)tempBasal bolus:(int32_t)bolus extBolus:(int32_t)extBolus __attribute__((swift_name("setBasalBolusActiveState(basal:tempBasal:bolus:extBolus:)")));
- (void)setBasalLimitedModeLimitedMode:(int32_t)limitedMode __attribute__((swift_name("setBasalLimitedMode(limitedMode:)")));
- (void)setBolusOverBolusCommLossAfterReceivingErrCode:(int32_t)errCode errCount:(int32_t)errCount __attribute__((swift_name("setBolusOverBolusCommLossAfterReceiving(errCode:errCount:)")));
- (void)setCgmAlgoStateErrorEgvAlgoState:(PSCCgmAlgoStateEnum *)algoState cgmUtil:(PSCCgmUtil *)cgmUtil cgm:(PSCSimulatedCgm *)cgm nowInSeconds:(int32_t)nowInSeconds __attribute__((swift_name("setCgmAlgoStateErrorEgv(algoState:cgmUtil:cgm:nowInSeconds:)")));
- (void)setCgmAlgorithmStateState:(PSCCgmAlgoStateEnum *)state __attribute__((swift_name("setCgmAlgorithmState(state:)")));
- (void)setCgmBleAddressBle_address:(NSString * _Nullable)ble_address cgmUtil:(PSCCgmUtil *)cgmUtil __attribute__((swift_name("setCgmBleAddress(ble_address:cgmUtil:)")));
- (void)setCgmEgvAndTimeStampChangeInSecondsEgv4:(int32_t)egv4 egvTimeChange:(int32_t)egvTimeChange cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setCgmEgvAndTimeStampChangeInSeconds(egv4:egvTimeChange:cgm:currentTimeInSeconds:)")));
- (void)setCgmInSearchingStateCgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setCgmInSearchingState(cgm:currentTimeInSeconds:)")));
- (void)setCgmInSensorWarmupStateNowInSeconds:(int32_t)nowInSeconds cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setCgmInSensorWarmupState(nowInSeconds:cgm:)")));
- (void)setCgmLifeInDaysCgmLifeInDays:(int32_t)cgmLifeInDays cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setCgmLifeInDays(cgmLifeInDays:cgm:)")));
- (void)setCgmLifeTimeInDaysDays:(int32_t)days __attribute__((swift_name("setCgmLifeTimeInDays(days:)")));
- (void)setCgmStateAlgoState:(PSCCgmAlgoStateEnum *)algoState txState:(PSCCgmTxStateEnum *)txState egv:(int16_t)egv timestampInSeconds:(int32_t)timestampInSeconds cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setCgmState(algoState:txState:egv:timestampInSeconds:cgm:currentTimeInSeconds:)")));
- (void)setCgmStateToNoTxIdCgm:(PSCSimulatedCgm *)cgm nowInSeconds:(int32_t)nowInSeconds __attribute__((swift_name("setCgmStateToNoTxId(cgm:nowInSeconds:)")));
- (void)setCgmTempSensorErrorErrorType:(int32_t)errorType nowInSeconds:(int32_t)nowInSeconds __attribute__((swift_name("setCgmTempSensorError(errorType:nowInSeconds:)")));
- (void)setCgmTxStateState:(PSCCgmTxStateEnum *)state __attribute__((swift_name("setCgmTxState(state:)")));
- (void)setCgmWithFaultedErrorNowInSeconds:(int32_t)nowInSeconds cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setCgmWithFaultedError(nowInSeconds:cgm:)")));
- (void)setCgmWithPersistentErrorError:(int32_t)error nowInSeconds:(int32_t)nowInSeconds cgm:(PSCSimulatedCgm *)cgm cgmUtil:(PSCCgmUtil *)cgmUtil __attribute__((swift_name("setCgmWithPersistentError(error:nowInSeconds:cgm:cgmUtil:)")));
- (void)setCommandResponseNakCmds:(NSString *)cmds __attribute__((swift_name("setCommandResponseNak(cmds:)")));
- (void)setEgvEmulateStyleStyle:(int32_t)style __attribute__((swift_name("setEgvEmulateStyle(style:)")));
- (void)setExpiredCgmNowInSeconds:(int64_t)nowInSeconds __attribute__((swift_name("setExpiredCgm(nowInSeconds:)")));
- (void)setHoldingCgmStateForTestingHolding:(BOOL)holding cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("setHoldingCgmStateForTesting(holding:cgm:)")));
- (void)setHypoProtectHypoProtectMode:(int32_t)hypoProtectMode intensity:(int32_t)intensity durationInHours:(int32_t)durationInHours currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setHypoProtect(hypoProtectMode:intensity:durationInHours:currentTimeInSeconds:)")));
- (void)setLumpOfCoal1Hr __attribute__((swift_name("setLumpOfCoal1Hr()")));
- (void)setLumpOfCoal2Hr __attribute__((swift_name("setLumpOfCoal2Hr()")));
- (void)setMismatchedCommandResponseCmds:(NSString *)cmds __attribute__((swift_name("setMismatchedCommandResponse(cmds:)")));
- (void)setModifiedStatusPageModifiedStatusPage:(int8_t)modifiedStatusPage __attribute__((swift_name("setModifiedStatusPage(modifiedStatusPage:)")));
- (void)setPodErrorCommandErrorCodeCmd:(NSString *)cmd errorCode:(int32_t)errorCode errorCount:(int32_t)errorCount __attribute__((swift_name("setPodErrorCommandErrorCode(cmd:errorCode:errorCount:)")));
- (void)setPodInsulinConditionHit_max:(int32_t)hit_max suspension:(int32_t)suspension __attribute__((swift_name("setPodInsulinCondition(hit_max:suspension:)")));
- (void)setPodLifeInHoursHours:(int32_t)hours pod:(PSCSimulatedPod *)pod sharedPrefsUtil:(PSCSharedPrefsUtil *)sharedPrefsUtil __attribute__((swift_name("setPodLifeInHours(hours:pod:sharedPrefsUtil:)")));
- (void)setPodLifeInHoursHours:(int32_t)hours sharedPrefsUtil:(PSCSharedPrefsUtil *)sharedPrefsUtil __attribute__((swift_name("setPodLifeInHours(hours:sharedPrefsUtil:)")));
- (void)setPodLotTypeAndProductIdLotTypeStr:(NSString * _Nullable)lotTypeStr product_id:(int32_t)product_id __attribute__((swift_name("setPodLotTypeAndProductId(lotTypeStr:product_id:)")));
- (void)setPodMissingEgvsMissingEgvs:(int32_t)missingEgvs __attribute__((swift_name("setPodMissingEgvs(missingEgvs:)")));
- (void)setPodQnStateState:(PSCPodQnState *)state __attribute__((swift_name("setPodQnState(state:)")));
- (void)setPodTimeStampToCurrentInSecondsCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("setPodTimeStampToCurrentInSeconds(currentTimeInSeconds:)")));
- (void)setReservoirLevelReservoirLevel:(int32_t)reservoirLevel __attribute__((swift_name("setReservoirLevel(reservoirLevel:)")));
- (PSCCommLossParameters *)setSimulateCommErrorErrorType:(PSCCommLossErrorEnum *)errorType errorReason:(int32_t)errorReason count:(int32_t)count __attribute__((swift_name("setSimulateCommError(errorType:errorReason:count:)")));
- (void)setSimulatePage2ForRAMReset __attribute__((swift_name("setSimulatePage2ForRAMReset()")));
- (void)setSimulatePodQnStateState:(int32_t)state times:(int32_t)times __attribute__((swift_name("setSimulatePodQnState(state:times:)")));
- (void)setTestingBasalBolusValueAndCountBasalOrBolus:(NSString *)basalOrBolus value:(int32_t)value count:(int32_t)count __attribute__((swift_name("setTestingBasalBolusValueAndCount(basalOrBolus:value:count:)")));
- (void)setUnconfirmedSendCommandCmd:(NSString *)cmd count:(int32_t)count __attribute__((swift_name("setUnconfirmedSendCommand(cmd:count:)")));
- (void)setUnconfirmedSendErrorCmdsCmds:(NSString *)cmds __attribute__((swift_name("setUnconfirmedSendErrorCmds(cmds:)")));
- (BOOL)shouldAlterSeqNumber __attribute__((swift_name("shouldAlterSeqNumber()")));
- (BOOL)shouldAlterSeqNumberRecover __attribute__((swift_name("shouldAlterSeqNumberRecover()")));
- (void)splitListAndSetKeyCountInMapCmdsValue:(NSString * _Nullable)cmdsValue __attribute__((swift_name("splitListAndSetKeyCountInMap(cmdsValue:)")));
- (void)testIpCommandAlarmUsecase:(NSString *)usecase alarm_Value:(int32_t)alarm_Value clb_count:(int32_t)clb_count ip_response:(int32_t)ip_response holdingTime:(int32_t)holdingTime __attribute__((swift_name("testIpCommandAlarm(usecase:alarm_Value:clb_count:ip_response:holdingTime:)")));
- (PSCDisconnectionReason * _Nullable)testingCommunicationErrorErrorType:(PSCCommLossErrorEnum *)errorType __attribute__((swift_name("testingCommunicationError(errorType:)")));
- (BOOL)testingIsBasalBolusActiveTrueBasalOrBolusChannel:(NSString * _Nullable)basalOrBolusChannel __attribute__((swift_name("testingIsBasalBolusActiveTrue(basalOrBolusChannel:)")));
- (void)testingSetCgmAlgoStateEnumEnumNo:(int8_t)enumNo cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("testingSetCgmAlgoStateEnum(enumNo:cgm:)")));
- (void)testingSetCgmFixedEgvValueEgv:(int16_t)egv cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("testingSetCgmFixedEgvValue(egv:cgm:currentTimeInSeconds:)")));
- (void)testingSetCgmStateEnumEnumNo:(int32_t)enumNo cgmUtil:(PSCCgmUtil *)cgmUtil __attribute__((swift_name("testingSetCgmStateEnum(enumNo:cgmUtil:)")));
- (void)testingSetCgmTxStateEnumEnumNo:(int32_t)enumNo cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("testingSetCgmTxStateEnum(enumNo:cgm:)")));
- (void)testingSetEgvRateEgvRate:(int32_t)egvRate __attribute__((swift_name("testingSetEgvRate(egvRate:)")));
- (void)updateActiveCGmInSetUpWarmingUpStateNowInSeconds:(int32_t)nowInSeconds cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("updateActiveCGmInSetUpWarmingUpState(nowInSeconds:cgm:)")));
- (void)updateActiveCgmInPairingStateEgv_error_code:(int32_t)egv_error_code cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("updateActiveCgmInPairingState(egv_error_code:cgm:currentTimeInSeconds:)")));
- (void)updateActiveCgmWithEgvEgv:(PSCEgvSample *)egv cgm:(PSCSimulatedCgm *)cgm __attribute__((swift_name("updateActiveCgmWithEgv(egv:cgm:)")));
- (void)updateActiveCgmWithErrorStateEgv_error_no:(int32_t)egv_error_no cgmAlgoStateEnum:(PSCCgmAlgoStateEnum *)cgmAlgoStateEnum cgmTxStateEnum:(PSCCgmTxStateEnum *)cgmTxStateEnum cgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("updateActiveCgmWithErrorState(egv_error_no:cgmAlgoStateEnum:cgmTxStateEnum:cgm:currentTimeInSeconds:)")));
- (void)updateCgmAlgoStateNoneCgm:(PSCSimulatedCgm *)cgm currentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("updateCgmAlgoStateNone(cgm:currentTimeInSeconds:)")));
- (void)updatePodTimeStampToNowCurrentTimeInSeconds:(int32_t)currentTimeInSeconds __attribute__((swift_name("updatePodTimeStampToNow(currentTimeInSeconds:)")));
@property int8_t POD_EXPIRATION_IN_HRS __attribute__((swift_name("POD_EXPIRATION_IN_HRS")));
@property int32_t alterSeqNumberCount __attribute__((swift_name("alterSeqNumberCount")));
@property int32_t ipCommandTestResponseResult __attribute__((swift_name("ipCommandTestResponseResult")));
@property (readonly) PSCLogger *logger __attribute__((swift_name("logger")));
@property PSCPodLotTypeEnum *podLot __attribute__((swift_name("podLot")));
@property (readonly) PSCPodUtil *podUtil __attribute__((swift_name("podUtil")));
@property (readonly) PSCRepository *repository __attribute__((swift_name("repository")));
@property BOOL simulateMoreThanOnePod __attribute__((swift_name("simulateMoreThanOnePod")));
@property int32_t testingDeliveredPulses __attribute__((swift_name("testingDeliveredPulses")));
@property int32_t testingRemainingPulses __attribute__((swift_name("testingRemainingPulses")));
@property int32_t testingTimeSinceActivation __attribute__((swift_name("testingTimeSinceActivation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodControl.Companion")))
@interface PSCPodControlCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PSCPodControl *)getInstanceRepository:(PSCRepository *)repository __attribute__((swift_name("getInstance(repository:)")));
- (void)pokeCgmForNextStateContext:(id)context __attribute__((swift_name("pokeCgmForNextState(context:)")));
@property (readonly) int32_t ALTER_RESPONSE_PART __attribute__((swift_name("ALTER_RESPONSE_PART")));
@property (readonly) int32_t ALTER_RESPONSE_WHOLE __attribute__((swift_name("ALTER_RESPONSE_WHOLE")));
@property (readonly) NSString *POD_LIFE_IN_HOURS __attribute__((swift_name("POD_LIFE_IN_HOURS")));
@property (readonly) NSString *QN_STATUS_READINESS __attribute__((swift_name("QN_STATUS_READINESS")));
@property (readonly) NSString *SIM_RAM_RESET __attribute__((swift_name("SIM_RAM_RESET")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *accumulatedPP __attribute__((swift_name("accumulatedPP")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preferences")))
@interface PSCPreferences : PSCBase
- (instancetype)initWithName:(NSString * _Nullable)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (PSCBoolean * _Nullable)getBooleanKey:(NSString *)key __attribute__((swift_name("getBoolean(key:)")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (PSCFloat * _Nullable)getFloatKey:(NSString *)key __attribute__((swift_name("getFloat(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (PSCInt * _Nullable)getIntKey:(NSString *)key __attribute__((swift_name("getInt(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (PSCLong * _Nullable)getLongKey:(NSString *)key __attribute__((swift_name("getLong(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (NSString * _Nullable)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (void)setBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("setBoolean(key:value:)")));
- (void)setFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("setFloat(key:value:)")));
- (void)setIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("setInt(key:value:)")));
- (void)setLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("setLong(key:value:)")));
- (void)setStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setString(key:value:)")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol PSCRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<PSCRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<PSCRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("CgmDatabaseQueries")))
@protocol PSCCgmDatabaseQueries <PSCRuntimeTransacter>
@required
- (void)deleteCgm __attribute__((swift_name("deleteCgm()")));
- (PSCRuntimeQuery<PSCCgmTable *> *)getCgm __attribute__((swift_name("getCgm()")));
- (PSCRuntimeQuery<id> *)getCgmMapper:(id (^)(PSCLong *, PSCInt *, NSString *, NSString *, PSCShort *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCShort *, PSCInt *, PSCLong *, PSCLong *, PSCInt *, PSCLong *, PSCShort *, PSCInt *, PSCInt *, PSCInt *, NSString *))mapper __attribute__((swift_name("getCgm(mapper:)")));
- (PSCRuntimeQuery<PSCLong *> *)getCgmCount __attribute__((swift_name("getCgmCount()")));
- (void)insertOrUpdateCgmCgmTable:(PSCCgmTable *)CgmTable __attribute__((swift_name("insertOrUpdateCgm(CgmTable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CgmTable")))
@interface PSCCgmTable : PSCBase
- (instancetype)initWithId:(int64_t)id cgmAlgorithmState:(int32_t)cgmAlgorithmState cgmTxid:(NSString *)cgmTxid cgmBleMacAddress:(NSString *)cgmBleMacAddress egv0:(int16_t)egv0 timeStamp:(int32_t)timeStamp cgmSensorState:(int32_t)cgmSensorState cgmTransmitterState:(int32_t)cgmTransmitterState holdingCgmStateForTesting:(int32_t)holdingCgmStateForTesting txLifeInDays:(int16_t)txLifeInDays txOperationIntervalInSeconds:(int32_t)txOperationIntervalInSeconds txBirthTimeInSeconds:(int64_t)txBirthTimeInSeconds egvReferenceTime:(int64_t)egvReferenceTime validCgmStarted:(int32_t)validCgmStarted cgmState:(int64_t)cgmState tempSensorError:(int16_t)tempSensorError txid_wait_count:(int32_t)txid_wait_count txid_ble_wait_count:(int32_t)txid_ble_wait_count cgm_signal_loss_count:(int32_t)cgm_signal_loss_count podCgmConditions:(NSString *)podCgmConditions __attribute__((swift_name("init(id:cgmAlgorithmState:cgmTxid:cgmBleMacAddress:egv0:timeStamp:cgmSensorState:cgmTransmitterState:holdingCgmStateForTesting:txLifeInDays:txOperationIntervalInSeconds:txBirthTimeInSeconds:egvReferenceTime:validCgmStarted:cgmState:tempSensorError:txid_wait_count:txid_ble_wait_count:cgm_signal_loss_count:podCgmConditions:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int16_t)component10 __attribute__((swift_name("component10()")));
- (int32_t)component11 __attribute__((swift_name("component11()")));
- (int64_t)component12 __attribute__((swift_name("component12()")));
- (int64_t)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int64_t)component15 __attribute__((swift_name("component15()")));
- (int16_t)component16 __attribute__((swift_name("component16()")));
- (int32_t)component17 __attribute__((swift_name("component17()")));
- (int32_t)component18 __attribute__((swift_name("component18()")));
- (int32_t)component19 __attribute__((swift_name("component19()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int16_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (PSCCgmTable *)doCopyId:(int64_t)id cgmAlgorithmState:(int32_t)cgmAlgorithmState cgmTxid:(NSString *)cgmTxid cgmBleMacAddress:(NSString *)cgmBleMacAddress egv0:(int16_t)egv0 timeStamp:(int32_t)timeStamp cgmSensorState:(int32_t)cgmSensorState cgmTransmitterState:(int32_t)cgmTransmitterState holdingCgmStateForTesting:(int32_t)holdingCgmStateForTesting txLifeInDays:(int16_t)txLifeInDays txOperationIntervalInSeconds:(int32_t)txOperationIntervalInSeconds txBirthTimeInSeconds:(int64_t)txBirthTimeInSeconds egvReferenceTime:(int64_t)egvReferenceTime validCgmStarted:(int32_t)validCgmStarted cgmState:(int64_t)cgmState tempSensorError:(int16_t)tempSensorError txid_wait_count:(int32_t)txid_wait_count txid_ble_wait_count:(int32_t)txid_ble_wait_count cgm_signal_loss_count:(int32_t)cgm_signal_loss_count podCgmConditions:(NSString *)podCgmConditions __attribute__((swift_name("doCopy(id:cgmAlgorithmState:cgmTxid:cgmBleMacAddress:egv0:timeStamp:cgmSensorState:cgmTransmitterState:holdingCgmStateForTesting:txLifeInDays:txOperationIntervalInSeconds:txBirthTimeInSeconds:egvReferenceTime:validCgmStarted:cgmState:tempSensorError:txid_wait_count:txid_ble_wait_count:cgm_signal_loss_count:podCgmConditions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t cgmAlgorithmState __attribute__((swift_name("cgmAlgorithmState")));
@property (readonly) NSString *cgmBleMacAddress __attribute__((swift_name("cgmBleMacAddress")));
@property (readonly) int32_t cgmSensorState __attribute__((swift_name("cgmSensorState")));
@property (readonly) int64_t cgmState __attribute__((swift_name("cgmState")));
@property (readonly) int32_t cgmTransmitterState __attribute__((swift_name("cgmTransmitterState")));
@property (readonly) NSString *cgmTxid __attribute__((swift_name("cgmTxid")));
@property (readonly) int32_t cgm_signal_loss_count __attribute__((swift_name("cgm_signal_loss_count")));
@property (readonly) int16_t egv0 __attribute__((swift_name("egv0")));
@property (readonly) int64_t egvReferenceTime __attribute__((swift_name("egvReferenceTime")));
@property (readonly) int32_t holdingCgmStateForTesting __attribute__((swift_name("holdingCgmStateForTesting")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *podCgmConditions __attribute__((swift_name("podCgmConditions")));
@property (readonly) int16_t tempSensorError __attribute__((swift_name("tempSensorError")));
@property (readonly) int32_t timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) int64_t txBirthTimeInSeconds __attribute__((swift_name("txBirthTimeInSeconds")));
@property (readonly) int16_t txLifeInDays __attribute__((swift_name("txLifeInDays")));
@property (readonly) int32_t txOperationIntervalInSeconds __attribute__((swift_name("txOperationIntervalInSeconds")));
@property (readonly) int32_t txid_ble_wait_count __attribute__((swift_name("txid_ble_wait_count")));
@property (readonly) int32_t txid_wait_count __attribute__((swift_name("txid_wait_count")));
@property (readonly) int32_t validCgmStarted __attribute__((swift_name("validCgmStarted")));
@end;

__attribute__((swift_name("PodDatabase")))
@protocol PSCPodDatabase <PSCRuntimeTransacter>
@required
@property (readonly) id<PSCCgmDatabaseQueries> cgmDatabaseQueries __attribute__((swift_name("cgmDatabaseQueries")));
@property (readonly) id<PSCPodDatabaseQueries> podDatabaseQueries __attribute__((swift_name("podDatabaseQueries")));
@property (readonly) id<PSCSimDataDatabaseQueries> simDataDatabaseQueries __attribute__((swift_name("simDataDatabaseQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PodDatabaseCompanion")))
@interface PSCPodDatabaseCompanion : PSCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PSCPodDatabase>)invokeDriver:(id<PSCRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<PSCRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("PodDatabaseQueries")))
@protocol PSCPodDatabaseQueries <PSCRuntimeTransacter>
@required
- (void)deletePod __attribute__((swift_name("deletePod()")));
- (PSCRuntimeQuery<PSCSimPodTable *> *)getPod __attribute__((swift_name("getPod()")));
- (PSCRuntimeQuery<id> *)getPodMapper:(id (^)(PSCLong *, NSString *, PSCInt *, PSCLong *, PSCInt *, PSCInt *, PSCShort *, PSCShort *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCInt *, PSCBoolean *, PSCBoolean *, PSCInt *, PSCInt *, PSCBoolean *, NSString *, PSCInt *, NSString *, NSString *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCInt *, PSCInt *, PSCInt *, PSCLong *, PSCInt *, PSCInt *, PSCInt *, PSCBoolean *, PSCBoolean *, PSCInt *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCLong *, PSCShort *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCBoolean *, PSCInt *, PSCShort *, PSCInt *, PSCBoolean *, NSString *, NSString *, PSCLong *, PSCShort *, PSCBoolean *, PSCInt *, PSCInt *, PSCShort *, PSCLong *, PSCLong *, PSCLong *, PSCInt *, PSCInt *, PSCLong *, PSCLong *, PSCInt *, PSCInt *, PSCLong *, PSCLong *, PSCLong *, PSCShort *, PSCShort *, PSCShort *, PSCShort *))mapper __attribute__((swift_name("getPod(mapper:)")));
- (PSCRuntimeQuery<PSCLong *> *)getPodCount __attribute__((swift_name("getPodCount()")));
- (void)insertOrUpdatePodSimPodTable:(PSCSimPodTable *)SimPodTable __attribute__((swift_name("insertOrUpdatePod(SimPodTable:)")));
@end;

__attribute__((swift_name("SimDataDatabaseQueries")))
@protocol PSCSimDataDatabaseQueries <PSCRuntimeTransacter>
@required
- (void)deleteSimData __attribute__((swift_name("deleteSimData()")));
- (PSCRuntimeQuery<PSCSimDataTable *> *)getSimData __attribute__((swift_name("getSimData()")));
- (PSCRuntimeQuery<id> *)getSimDataMapper:(id (^)(PSCLong *, NSString *, PSCInt *, PSCInt *, PSCInt *, PSCLong *, PSCInt *))mapper __attribute__((swift_name("getSimData(mapper:)")));
- (PSCRuntimeQuery<PSCLong *> *)getSimDataCount __attribute__((swift_name("getSimDataCount()")));
- (void)insertOrUpdateSimDataSimDataTable:(PSCSimDataTable *)SimDataTable __attribute__((swift_name("insertOrUpdateSimData(SimDataTable:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimDataTable")))
@interface PSCSimDataTable : PSCBase
- (instancetype)initWithId:(int64_t)id seqNum:(NSString *)seqNum commLossErrorType:(int32_t)commLossErrorType commLossErrorCount:(int32_t)commLossErrorCount commLossErrorCode:(int32_t)commLossErrorCode commLossBeforeHoldingTimeInMillis:(int64_t)commLossBeforeHoldingTimeInMillis commLossBeforeHoldingErrorNo:(int32_t)commLossBeforeHoldingErrorNo __attribute__((swift_name("init(id:seqNum:commLossErrorType:commLossErrorCount:commLossErrorCode:commLossBeforeHoldingTimeInMillis:commLossBeforeHoldingErrorNo:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int32_t)component7 __attribute__((swift_name("component7()")));
- (PSCSimDataTable *)doCopyId:(int64_t)id seqNum:(NSString *)seqNum commLossErrorType:(int32_t)commLossErrorType commLossErrorCount:(int32_t)commLossErrorCount commLossErrorCode:(int32_t)commLossErrorCode commLossBeforeHoldingTimeInMillis:(int64_t)commLossBeforeHoldingTimeInMillis commLossBeforeHoldingErrorNo:(int32_t)commLossBeforeHoldingErrorNo __attribute__((swift_name("doCopy(id:seqNum:commLossErrorType:commLossErrorCount:commLossErrorCode:commLossBeforeHoldingTimeInMillis:commLossBeforeHoldingErrorNo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t commLossBeforeHoldingErrorNo __attribute__((swift_name("commLossBeforeHoldingErrorNo")));
@property (readonly) int64_t commLossBeforeHoldingTimeInMillis __attribute__((swift_name("commLossBeforeHoldingTimeInMillis")));
@property (readonly) int32_t commLossErrorCode __attribute__((swift_name("commLossErrorCode")));
@property (readonly) int32_t commLossErrorCount __attribute__((swift_name("commLossErrorCount")));
@property (readonly) int32_t commLossErrorType __attribute__((swift_name("commLossErrorType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *seqNum __attribute__((swift_name("seqNum")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimPodTable")))
@interface PSCSimPodTable : PSCBase
- (instancetype)initWithId:(int64_t)id pairingId:(NSString *)pairingId podState:(int32_t)podState lastCommandOpcode:(int64_t)lastCommandOpcode uid:(int32_t)uid lotSeqNum:(int32_t)lotSeqNum lastIPCommandSeqNum:(int16_t)lastIPCommandSeqNum lastIPCommandOpCode:(int16_t)lastIPCommandOpCode seqNumDuplicated:(BOOL)seqNumDuplicated isBasalActive:(BOOL)isBasalActive isTempBasalActive:(BOOL)isTempBasalActive isBolusActive:(BOOL)isBolusActive isExtBolusActive:(BOOL)isExtBolusActive bolusState:(int32_t)bolusState bolusPulsesTotal:(int32_t)bolusPulsesTotal bolusPulsesDelivered:(int32_t)bolusPulsesDelivered bolusPulsesRemaining:(int32_t)bolusPulsesRemaining immediateBolusPulses:(int32_t)immediateBolusPulses extendedBolusPulses:(int32_t)extendedBolusPulses extBolusExpireTimeInSec:(int32_t)extBolusExpireTimeInSec delayBetweenPPImmediateInMils:(int32_t)delayBetweenPPImmediateInMils delayBetweenPPExtendedInMils:(int32_t)delayBetweenPPExtendedInMils stopBolus:(BOOL)stopBolus stopBolusForTesting:(BOOL)stopBolusForTesting pulsesDeliveredTotalOnPod:(int32_t)pulsesDeliveredTotalOnPod pulsesRemainingInReservoir:(int32_t)pulsesRemainingInReservoir basalInitState:(BOOL)basalInitState basalData:(NSString *)basalData basalDataLength:(int32_t)basalDataLength basalInitData:(NSString *)basalInitData tempBasalData:(NSString *)tempBasalData tempBasalInitState:(BOOL)tempBasalInitState basalInitStarter:(BOOL)basalInitStarter add_PPWhenWakeup:(BOOL)add_PPWhenWakeup accumulatedPPCount:(int32_t)accumulatedPPCount delayUntilFirstPP:(int32_t)delayUntilFirstPP pdmTimeDeviationInSeconds:(int32_t)pdmTimeDeviationInSeconds podActivationTimeMillis:(int64_t)podActivationTimeMillis nextLoggerTimeInSeconds:(int32_t)nextLoggerTimeInSeconds auditAlertMask:(int32_t)auditAlertMask activeAlertsMask:(int32_t)activeAlertsMask programmingAuditedAlert:(BOOL)programmingAuditedAlert occlusionAlert:(BOOL)occlusionAlert podExpHourAlerted:(int32_t)podExpHourAlerted lowResAlertData:(int64_t)lowResAlertData podExpirationAlertData:(int64_t)podExpirationAlertData userExpirationAlertData:(int64_t)userExpirationAlertData imminentExpirationAlertData:(int64_t)imminentExpirationAlertData autoOffAlertData:(int64_t)autoOffAlertData locAlertData:(int64_t)locAlertData suspendEndedAlertData:(int64_t)suspendEndedAlertData suspendInProgressAlertData:(int64_t)suspendInProgressAlertData egvBelow55AlertData:(int64_t)egvBelow55AlertData egvBelow55TimeStampInMinutes:(int16_t)egvBelow55TimeStampInMinutes missCgmAlert:(BOOL)missCgmAlert existCloseLoopAlert:(BOOL)existCloseLoopAlert hittingMax:(BOOL)hittingMax suspension:(BOOL)suspension algoFirstRunFlag:(BOOL)algoFirstRunFlag alarmValue:(int32_t)alarmValue alarmTimeSincePodActivateInMinutes:(int16_t)alarmTimeSincePodActivateInMinutes podStateAtAlarm:(int32_t)podStateAtAlarm bolusActiveAtAlarm:(BOOL)bolusActiveAtAlarm targetBgProfile:(NSString *)targetBgProfile correctionFactorProfile:(NSString *)correctionFactorProfile aidStatusWarningFlag:(int64_t)aidStatusWarningFlag tdi:(int16_t)tdi tdiSihnFlag:(BOOL)tdiSihnFlag egvRate:(int32_t)egvRate iobAlg:(int32_t)iobAlg egv0:(int16_t)egv0 missedEgvCount:(int64_t)missedEgvCount cgmState:(int64_t)cgmState dia:(int64_t)dia egvThreshold:(int32_t)egvThreshold loopState:(int32_t)loopState hypoProtectMode:(int64_t)hypoProtectMode intensity:(int64_t)intensity hypoProtectExpTime:(int32_t)hypoProtectExpTime egvTimeStamp0:(int32_t)egvTimeStamp0 qnActivationStatus:(int64_t)qnActivationStatus er48ActivationStatus:(int64_t)er48ActivationStatus basalLimitedMode:(int64_t)basalLimitedMode totalSuggestedInsulinSeq:(int16_t)totalSuggestedInsulinSeq insulinHistoryRecordsIndexOffset:(int16_t)insulinHistoryRecordsIndexOffset insulinHistoryTotalNumber:(int16_t)insulinHistoryTotalNumber insulinHistoryRetrieveCount:(int16_t)insulinHistoryRetrieveCount __attribute__((swift_name("init(id:pairingId:podState:lastCommandOpcode:uid:lotSeqNum:lastIPCommandSeqNum:lastIPCommandOpCode:seqNumDuplicated:isBasalActive:isTempBasalActive:isBolusActive:isExtBolusActive:bolusState:bolusPulsesTotal:bolusPulsesDelivered:bolusPulsesRemaining:immediateBolusPulses:extendedBolusPulses:extBolusExpireTimeInSec:delayBetweenPPImmediateInMils:delayBetweenPPExtendedInMils:stopBolus:stopBolusForTesting:pulsesDeliveredTotalOnPod:pulsesRemainingInReservoir:basalInitState:basalData:basalDataLength:basalInitData:tempBasalData:tempBasalInitState:basalInitStarter:add_PPWhenWakeup:accumulatedPPCount:delayUntilFirstPP:pdmTimeDeviationInSeconds:podActivationTimeMillis:nextLoggerTimeInSeconds:auditAlertMask:activeAlertsMask:programmingAuditedAlert:occlusionAlert:podExpHourAlerted:lowResAlertData:podExpirationAlertData:userExpirationAlertData:imminentExpirationAlertData:autoOffAlertData:locAlertData:suspendEndedAlertData:suspendInProgressAlertData:egvBelow55AlertData:egvBelow55TimeStampInMinutes:missCgmAlert:existCloseLoopAlert:hittingMax:suspension:algoFirstRunFlag:alarmValue:alarmTimeSincePodActivateInMinutes:podStateAtAlarm:bolusActiveAtAlarm:targetBgProfile:correctionFactorProfile:aidStatusWarningFlag:tdi:tdiSihnFlag:egvRate:iobAlg:egv0:missedEgvCount:cgmState:dia:egvThreshold:loopState:hypoProtectMode:intensity:hypoProtectExpTime:egvTimeStamp0:qnActivationStatus:er48ActivationStatus:basalLimitedMode:totalSuggestedInsulinSeq:insulinHistoryRecordsIndexOffset:insulinHistoryTotalNumber:insulinHistoryRetrieveCount:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (BOOL)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (int32_t)component14 __attribute__((swift_name("component14()")));
- (int32_t)component15 __attribute__((swift_name("component15()")));
- (int32_t)component16 __attribute__((swift_name("component16()")));
- (int32_t)component17 __attribute__((swift_name("component17()")));
- (int32_t)component18 __attribute__((swift_name("component18()")));
- (int32_t)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component20 __attribute__((swift_name("component20()")));
- (int32_t)component21 __attribute__((swift_name("component21()")));
- (int32_t)component22 __attribute__((swift_name("component22()")));
- (BOOL)component23 __attribute__((swift_name("component23()")));
- (BOOL)component24 __attribute__((swift_name("component24()")));
- (int32_t)component25 __attribute__((swift_name("component25()")));
- (int32_t)component26 __attribute__((swift_name("component26()")));
- (BOOL)component27 __attribute__((swift_name("component27()")));
- (NSString *)component28 __attribute__((swift_name("component28()")));
- (int32_t)component29 __attribute__((swift_name("component29()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component30 __attribute__((swift_name("component30()")));
- (NSString *)component31 __attribute__((swift_name("component31()")));
- (BOOL)component32 __attribute__((swift_name("component32()")));
- (BOOL)component33 __attribute__((swift_name("component33()")));
- (BOOL)component34 __attribute__((swift_name("component34()")));
- (int32_t)component35 __attribute__((swift_name("component35()")));
- (int32_t)component36 __attribute__((swift_name("component36()")));
- (int32_t)component37 __attribute__((swift_name("component37()")));
- (int64_t)component38 __attribute__((swift_name("component38()")));
- (int32_t)component39 __attribute__((swift_name("component39()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component40 __attribute__((swift_name("component40()")));
- (int32_t)component41 __attribute__((swift_name("component41()")));
- (BOOL)component42 __attribute__((swift_name("component42()")));
- (BOOL)component43 __attribute__((swift_name("component43()")));
- (int32_t)component44 __attribute__((swift_name("component44()")));
- (int64_t)component45 __attribute__((swift_name("component45()")));
- (int64_t)component46 __attribute__((swift_name("component46()")));
- (int64_t)component47 __attribute__((swift_name("component47()")));
- (int64_t)component48 __attribute__((swift_name("component48()")));
- (int64_t)component49 __attribute__((swift_name("component49()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int64_t)component50 __attribute__((swift_name("component50()")));
- (int64_t)component51 __attribute__((swift_name("component51()")));
- (int64_t)component52 __attribute__((swift_name("component52()")));
- (int64_t)component53 __attribute__((swift_name("component53()")));
- (int16_t)component54 __attribute__((swift_name("component54()")));
- (BOOL)component55 __attribute__((swift_name("component55()")));
- (BOOL)component56 __attribute__((swift_name("component56()")));
- (BOOL)component57 __attribute__((swift_name("component57()")));
- (BOOL)component58 __attribute__((swift_name("component58()")));
- (BOOL)component59 __attribute__((swift_name("component59()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (int32_t)component60 __attribute__((swift_name("component60()")));
- (int16_t)component61 __attribute__((swift_name("component61()")));
- (int32_t)component62 __attribute__((swift_name("component62()")));
- (BOOL)component63 __attribute__((swift_name("component63()")));
- (NSString *)component64 __attribute__((swift_name("component64()")));
- (NSString *)component65 __attribute__((swift_name("component65()")));
- (int64_t)component66 __attribute__((swift_name("component66()")));
- (int16_t)component67 __attribute__((swift_name("component67()")));
- (BOOL)component68 __attribute__((swift_name("component68()")));
- (int32_t)component69 __attribute__((swift_name("component69()")));
- (int16_t)component7 __attribute__((swift_name("component7()")));
- (int32_t)component70 __attribute__((swift_name("component70()")));
- (int16_t)component71 __attribute__((swift_name("component71()")));
- (int64_t)component72 __attribute__((swift_name("component72()")));
- (int64_t)component73 __attribute__((swift_name("component73()")));
- (int64_t)component74 __attribute__((swift_name("component74()")));
- (int32_t)component75 __attribute__((swift_name("component75()")));
- (int32_t)component76 __attribute__((swift_name("component76()")));
- (int64_t)component77 __attribute__((swift_name("component77()")));
- (int64_t)component78 __attribute__((swift_name("component78()")));
- (int32_t)component79 __attribute__((swift_name("component79()")));
- (int16_t)component8 __attribute__((swift_name("component8()")));
- (int32_t)component80 __attribute__((swift_name("component80()")));
- (int64_t)component81 __attribute__((swift_name("component81()")));
- (int64_t)component82 __attribute__((swift_name("component82()")));
- (int64_t)component83 __attribute__((swift_name("component83()")));
- (int16_t)component84 __attribute__((swift_name("component84()")));
- (int16_t)component85 __attribute__((swift_name("component85()")));
- (int16_t)component86 __attribute__((swift_name("component86()")));
- (int16_t)component87 __attribute__((swift_name("component87()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (PSCSimPodTable *)doCopyId:(int64_t)id pairingId:(NSString *)pairingId podState:(int32_t)podState lastCommandOpcode:(int64_t)lastCommandOpcode uid:(int32_t)uid lotSeqNum:(int32_t)lotSeqNum lastIPCommandSeqNum:(int16_t)lastIPCommandSeqNum lastIPCommandOpCode:(int16_t)lastIPCommandOpCode seqNumDuplicated:(BOOL)seqNumDuplicated isBasalActive:(BOOL)isBasalActive isTempBasalActive:(BOOL)isTempBasalActive isBolusActive:(BOOL)isBolusActive isExtBolusActive:(BOOL)isExtBolusActive bolusState:(int32_t)bolusState bolusPulsesTotal:(int32_t)bolusPulsesTotal bolusPulsesDelivered:(int32_t)bolusPulsesDelivered bolusPulsesRemaining:(int32_t)bolusPulsesRemaining immediateBolusPulses:(int32_t)immediateBolusPulses extendedBolusPulses:(int32_t)extendedBolusPulses extBolusExpireTimeInSec:(int32_t)extBolusExpireTimeInSec delayBetweenPPImmediateInMils:(int32_t)delayBetweenPPImmediateInMils delayBetweenPPExtendedInMils:(int32_t)delayBetweenPPExtendedInMils stopBolus:(BOOL)stopBolus stopBolusForTesting:(BOOL)stopBolusForTesting pulsesDeliveredTotalOnPod:(int32_t)pulsesDeliveredTotalOnPod pulsesRemainingInReservoir:(int32_t)pulsesRemainingInReservoir basalInitState:(BOOL)basalInitState basalData:(NSString *)basalData basalDataLength:(int32_t)basalDataLength basalInitData:(NSString *)basalInitData tempBasalData:(NSString *)tempBasalData tempBasalInitState:(BOOL)tempBasalInitState basalInitStarter:(BOOL)basalInitStarter add_PPWhenWakeup:(BOOL)add_PPWhenWakeup accumulatedPPCount:(int32_t)accumulatedPPCount delayUntilFirstPP:(int32_t)delayUntilFirstPP pdmTimeDeviationInSeconds:(int32_t)pdmTimeDeviationInSeconds podActivationTimeMillis:(int64_t)podActivationTimeMillis nextLoggerTimeInSeconds:(int32_t)nextLoggerTimeInSeconds auditAlertMask:(int32_t)auditAlertMask activeAlertsMask:(int32_t)activeAlertsMask programmingAuditedAlert:(BOOL)programmingAuditedAlert occlusionAlert:(BOOL)occlusionAlert podExpHourAlerted:(int32_t)podExpHourAlerted lowResAlertData:(int64_t)lowResAlertData podExpirationAlertData:(int64_t)podExpirationAlertData userExpirationAlertData:(int64_t)userExpirationAlertData imminentExpirationAlertData:(int64_t)imminentExpirationAlertData autoOffAlertData:(int64_t)autoOffAlertData locAlertData:(int64_t)locAlertData suspendEndedAlertData:(int64_t)suspendEndedAlertData suspendInProgressAlertData:(int64_t)suspendInProgressAlertData egvBelow55AlertData:(int64_t)egvBelow55AlertData egvBelow55TimeStampInMinutes:(int16_t)egvBelow55TimeStampInMinutes missCgmAlert:(BOOL)missCgmAlert existCloseLoopAlert:(BOOL)existCloseLoopAlert hittingMax:(BOOL)hittingMax suspension:(BOOL)suspension algoFirstRunFlag:(BOOL)algoFirstRunFlag alarmValue:(int32_t)alarmValue alarmTimeSincePodActivateInMinutes:(int16_t)alarmTimeSincePodActivateInMinutes podStateAtAlarm:(int32_t)podStateAtAlarm bolusActiveAtAlarm:(BOOL)bolusActiveAtAlarm targetBgProfile:(NSString *)targetBgProfile correctionFactorProfile:(NSString *)correctionFactorProfile aidStatusWarningFlag:(int64_t)aidStatusWarningFlag tdi:(int16_t)tdi tdiSihnFlag:(BOOL)tdiSihnFlag egvRate:(int32_t)egvRate iobAlg:(int32_t)iobAlg egv0:(int16_t)egv0 missedEgvCount:(int64_t)missedEgvCount cgmState:(int64_t)cgmState dia:(int64_t)dia egvThreshold:(int32_t)egvThreshold loopState:(int32_t)loopState hypoProtectMode:(int64_t)hypoProtectMode intensity:(int64_t)intensity hypoProtectExpTime:(int32_t)hypoProtectExpTime egvTimeStamp0:(int32_t)egvTimeStamp0 qnActivationStatus:(int64_t)qnActivationStatus er48ActivationStatus:(int64_t)er48ActivationStatus basalLimitedMode:(int64_t)basalLimitedMode totalSuggestedInsulinSeq:(int16_t)totalSuggestedInsulinSeq insulinHistoryRecordsIndexOffset:(int16_t)insulinHistoryRecordsIndexOffset insulinHistoryTotalNumber:(int16_t)insulinHistoryTotalNumber insulinHistoryRetrieveCount:(int16_t)insulinHistoryRetrieveCount __attribute__((swift_name("doCopy(id:pairingId:podState:lastCommandOpcode:uid:lotSeqNum:lastIPCommandSeqNum:lastIPCommandOpCode:seqNumDuplicated:isBasalActive:isTempBasalActive:isBolusActive:isExtBolusActive:bolusState:bolusPulsesTotal:bolusPulsesDelivered:bolusPulsesRemaining:immediateBolusPulses:extendedBolusPulses:extBolusExpireTimeInSec:delayBetweenPPImmediateInMils:delayBetweenPPExtendedInMils:stopBolus:stopBolusForTesting:pulsesDeliveredTotalOnPod:pulsesRemainingInReservoir:basalInitState:basalData:basalDataLength:basalInitData:tempBasalData:tempBasalInitState:basalInitStarter:add_PPWhenWakeup:accumulatedPPCount:delayUntilFirstPP:pdmTimeDeviationInSeconds:podActivationTimeMillis:nextLoggerTimeInSeconds:auditAlertMask:activeAlertsMask:programmingAuditedAlert:occlusionAlert:podExpHourAlerted:lowResAlertData:podExpirationAlertData:userExpirationAlertData:imminentExpirationAlertData:autoOffAlertData:locAlertData:suspendEndedAlertData:suspendInProgressAlertData:egvBelow55AlertData:egvBelow55TimeStampInMinutes:missCgmAlert:existCloseLoopAlert:hittingMax:suspension:algoFirstRunFlag:alarmValue:alarmTimeSincePodActivateInMinutes:podStateAtAlarm:bolusActiveAtAlarm:targetBgProfile:correctionFactorProfile:aidStatusWarningFlag:tdi:tdiSihnFlag:egvRate:iobAlg:egv0:missedEgvCount:cgmState:dia:egvThreshold:loopState:hypoProtectMode:intensity:hypoProtectExpTime:egvTimeStamp0:qnActivationStatus:er48ActivationStatus:basalLimitedMode:totalSuggestedInsulinSeq:insulinHistoryRecordsIndexOffset:insulinHistoryTotalNumber:insulinHistoryRetrieveCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t accumulatedPPCount __attribute__((swift_name("accumulatedPPCount")));
@property (readonly) int32_t activeAlertsMask __attribute__((swift_name("activeAlertsMask")));
@property (readonly) BOOL add_PPWhenWakeup __attribute__((swift_name("add_PPWhenWakeup")));
@property (readonly) int64_t aidStatusWarningFlag __attribute__((swift_name("aidStatusWarningFlag")));
@property (readonly) int16_t alarmTimeSincePodActivateInMinutes __attribute__((swift_name("alarmTimeSincePodActivateInMinutes")));
@property (readonly) int32_t alarmValue __attribute__((swift_name("alarmValue")));
@property (readonly) BOOL algoFirstRunFlag __attribute__((swift_name("algoFirstRunFlag")));
@property (readonly) int32_t auditAlertMask __attribute__((swift_name("auditAlertMask")));
@property (readonly) int64_t autoOffAlertData __attribute__((swift_name("autoOffAlertData")));
@property (readonly) NSString *basalData __attribute__((swift_name("basalData")));
@property (readonly) int32_t basalDataLength __attribute__((swift_name("basalDataLength")));
@property (readonly) NSString *basalInitData __attribute__((swift_name("basalInitData")));
@property (readonly) BOOL basalInitStarter __attribute__((swift_name("basalInitStarter")));
@property (readonly) BOOL basalInitState __attribute__((swift_name("basalInitState")));
@property (readonly) int64_t basalLimitedMode __attribute__((swift_name("basalLimitedMode")));
@property (readonly) BOOL bolusActiveAtAlarm __attribute__((swift_name("bolusActiveAtAlarm")));
@property (readonly) int32_t bolusPulsesDelivered __attribute__((swift_name("bolusPulsesDelivered")));
@property (readonly) int32_t bolusPulsesRemaining __attribute__((swift_name("bolusPulsesRemaining")));
@property (readonly) int32_t bolusPulsesTotal __attribute__((swift_name("bolusPulsesTotal")));
@property (readonly) int32_t bolusState __attribute__((swift_name("bolusState")));
@property (readonly) int64_t cgmState __attribute__((swift_name("cgmState")));
@property (readonly) NSString *correctionFactorProfile __attribute__((swift_name("correctionFactorProfile")));
@property (readonly) int32_t delayBetweenPPExtendedInMils __attribute__((swift_name("delayBetweenPPExtendedInMils")));
@property (readonly) int32_t delayBetweenPPImmediateInMils __attribute__((swift_name("delayBetweenPPImmediateInMils")));
@property (readonly) int32_t delayUntilFirstPP __attribute__((swift_name("delayUntilFirstPP")));
@property (readonly) int64_t dia __attribute__((swift_name("dia")));
@property (readonly) int16_t egv0 __attribute__((swift_name("egv0")));
@property (readonly) int64_t egvBelow55AlertData __attribute__((swift_name("egvBelow55AlertData")));
@property (readonly) int16_t egvBelow55TimeStampInMinutes __attribute__((swift_name("egvBelow55TimeStampInMinutes")));
@property (readonly) int32_t egvRate __attribute__((swift_name("egvRate")));
@property (readonly) int32_t egvThreshold __attribute__((swift_name("egvThreshold")));
@property (readonly) int32_t egvTimeStamp0 __attribute__((swift_name("egvTimeStamp0")));
@property (readonly) int64_t er48ActivationStatus __attribute__((swift_name("er48ActivationStatus")));
@property (readonly) BOOL existCloseLoopAlert __attribute__((swift_name("existCloseLoopAlert")));
@property (readonly) int32_t extBolusExpireTimeInSec __attribute__((swift_name("extBolusExpireTimeInSec")));
@property (readonly) int32_t extendedBolusPulses __attribute__((swift_name("extendedBolusPulses")));
@property (readonly) BOOL hittingMax __attribute__((swift_name("hittingMax")));
@property (readonly) int32_t hypoProtectExpTime __attribute__((swift_name("hypoProtectExpTime")));
@property (readonly) int64_t hypoProtectMode __attribute__((swift_name("hypoProtectMode")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t immediateBolusPulses __attribute__((swift_name("immediateBolusPulses")));
@property (readonly) int64_t imminentExpirationAlertData __attribute__((swift_name("imminentExpirationAlertData")));
@property (readonly) int16_t insulinHistoryRecordsIndexOffset __attribute__((swift_name("insulinHistoryRecordsIndexOffset")));
@property (readonly) int16_t insulinHistoryRetrieveCount __attribute__((swift_name("insulinHistoryRetrieveCount")));
@property (readonly) int16_t insulinHistoryTotalNumber __attribute__((swift_name("insulinHistoryTotalNumber")));
@property (readonly) int64_t intensity __attribute__((swift_name("intensity")));
@property (readonly) int32_t iobAlg __attribute__((swift_name("iobAlg")));
@property (readonly) BOOL isBasalActive __attribute__((swift_name("isBasalActive")));
@property (readonly) BOOL isBolusActive __attribute__((swift_name("isBolusActive")));
@property (readonly) BOOL isExtBolusActive __attribute__((swift_name("isExtBolusActive")));
@property (readonly) BOOL isTempBasalActive __attribute__((swift_name("isTempBasalActive")));
@property (readonly) int64_t lastCommandOpcode __attribute__((swift_name("lastCommandOpcode")));
@property (readonly) int16_t lastIPCommandOpCode __attribute__((swift_name("lastIPCommandOpCode")));
@property (readonly) int16_t lastIPCommandSeqNum __attribute__((swift_name("lastIPCommandSeqNum")));
@property (readonly) int64_t locAlertData __attribute__((swift_name("locAlertData")));
@property (readonly) int32_t loopState __attribute__((swift_name("loopState")));
@property (readonly) int32_t lotSeqNum __attribute__((swift_name("lotSeqNum")));
@property (readonly) int64_t lowResAlertData __attribute__((swift_name("lowResAlertData")));
@property (readonly) BOOL missCgmAlert __attribute__((swift_name("missCgmAlert")));
@property (readonly) int64_t missedEgvCount __attribute__((swift_name("missedEgvCount")));
@property (readonly) int32_t nextLoggerTimeInSeconds __attribute__((swift_name("nextLoggerTimeInSeconds")));
@property (readonly) BOOL occlusionAlert __attribute__((swift_name("occlusionAlert")));
@property (readonly) NSString *pairingId __attribute__((swift_name("pairingId")));
@property (readonly) int32_t pdmTimeDeviationInSeconds __attribute__((swift_name("pdmTimeDeviationInSeconds")));
@property (readonly) int64_t podActivationTimeMillis __attribute__((swift_name("podActivationTimeMillis")));
@property (readonly) int32_t podExpHourAlerted __attribute__((swift_name("podExpHourAlerted")));
@property (readonly) int64_t podExpirationAlertData __attribute__((swift_name("podExpirationAlertData")));
@property (readonly) int32_t podState __attribute__((swift_name("podState")));
@property (readonly) int32_t podStateAtAlarm __attribute__((swift_name("podStateAtAlarm")));
@property (readonly) BOOL programmingAuditedAlert __attribute__((swift_name("programmingAuditedAlert")));
@property (readonly) int32_t pulsesDeliveredTotalOnPod __attribute__((swift_name("pulsesDeliveredTotalOnPod")));
@property (readonly) int32_t pulsesRemainingInReservoir __attribute__((swift_name("pulsesRemainingInReservoir")));
@property (readonly) int64_t qnActivationStatus __attribute__((swift_name("qnActivationStatus")));
@property (readonly) BOOL seqNumDuplicated __attribute__((swift_name("seqNumDuplicated")));
@property (readonly) BOOL stopBolus __attribute__((swift_name("stopBolus")));
@property (readonly) BOOL stopBolusForTesting __attribute__((swift_name("stopBolusForTesting")));
@property (readonly) int64_t suspendEndedAlertData __attribute__((swift_name("suspendEndedAlertData")));
@property (readonly) int64_t suspendInProgressAlertData __attribute__((swift_name("suspendInProgressAlertData")));
@property (readonly) BOOL suspension __attribute__((swift_name("suspension")));
@property (readonly) NSString *targetBgProfile __attribute__((swift_name("targetBgProfile")));
@property (readonly) int16_t tdi __attribute__((swift_name("tdi")));
@property (readonly) BOOL tdiSihnFlag __attribute__((swift_name("tdiSihnFlag")));
@property (readonly) NSString *tempBasalData __attribute__((swift_name("tempBasalData")));
@property (readonly) BOOL tempBasalInitState __attribute__((swift_name("tempBasalInitState")));
@property (readonly) int16_t totalSuggestedInsulinSeq __attribute__((swift_name("totalSuggestedInsulinSeq")));
@property (readonly) int32_t uid __attribute__((swift_name("uid")));
@property (readonly) int64_t userExpirationAlertData __attribute__((swift_name("userExpirationAlertData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PSCKotlinArray<T> : PSCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface PSCKotlinArray (Extensions)
- (BOOL)includesTargetString:(NSString *)targetString __attribute__((swift_name("includes(targetString:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PSCKotlinByteArray : PSCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PSCByte *(^)(PSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PSCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface PSCKotlinByteArray (Extensions)
- (NSData *)toData __attribute__((swift_name("toData()")));
- (NSString *)toHex __attribute__((swift_name("toHex()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int32_t)toIntOffset:(int32_t)offset __attribute__((swift_name("toInt(offset:)")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
- (int16_t)toShortOffset:(int32_t)offset __attribute__((swift_name("toShort(offset:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface PSCDispatchersKt : PSCBase
+ (void)ktorScopeBlock:(id<PSCKotlinSuspendFunction0>)block __attribute__((swift_name("ktorScope(block:)")));
@property (class, readonly) id<PSCKotlinCoroutineContext> ioDispatcher __attribute__((swift_name("ioDispatcher")));
@property (class, readonly) id<PSCKotlinCoroutineContext> uiDispatcher __attribute__((swift_name("uiDispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteArrayExtensionsKt")))
@interface PSCByteArrayExtensionsKt : PSCBase
+ (PSCKotlinByteArray *)toByteArray:(int32_t)receiver __attribute__((swift_name("toByteArray(_:)")));
+ (PSCKotlinByteArray *)toByteArray_:(int64_t)receiver __attribute__((swift_name("toByteArray(__:)")));
+ (PSCKotlinByteArray *)toByteArray__:(int16_t)receiver __attribute__((swift_name("toByteArray(___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataByteArrayKt")))
@interface PSCNSDataByteArrayKt : PSCBase
+ (PSCKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataStringKt")))
@interface PSCNSDataStringKt : PSCBase
+ (NSData * _Nullable)toData:(NSString *)receiver encoding:(uint64_t)encoding __attribute__((swift_name("toData(_:encoding:)")));
+ (NSString *)toKString:(NSData *)receiver __attribute__((swift_name("toKString(_:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PSCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PSCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PSCKotlinCoroutineContextElement> _Nullable)getKey:(id<PSCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PSCKotlinCoroutineContext>)minusKeyKey:(id<PSCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PSCKotlinCoroutineContext>)plusContext:(id<PSCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface PSCKotlinIntArray : PSCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PSCInt *(^)(PSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PSCKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol PSCRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol PSCRuntimeSqlDriver <PSCRuntimeCloseable>
@required
- (PSCRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(PSCInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PSCRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<PSCRuntimeSqlCursor>)executeQueryIdentifier:(PSCInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PSCRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (PSCRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("ReaktiveSource")))
@protocol PSCReaktiveSource
@required
- (void)subscribeObserver:(id<PSCReaktiveObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
@end;

__attribute__((swift_name("ReaktiveObservable")))
@protocol PSCReaktiveObservable <PSCReaktiveSource>
@required
@end;

__attribute__((swift_name("ReaktiveValueCallback")))
@protocol PSCReaktiveValueCallback
@required
- (void)onNextValue:(id _Nullable)value __attribute__((swift_name("onNext(value:)")));
@end;

__attribute__((swift_name("ReaktiveRelay")))
@protocol PSCReaktiveRelay <PSCReaktiveObservable, PSCReaktiveValueCallback>
@required
@end;

__attribute__((swift_name("ReaktiveCompleteCallback")))
@protocol PSCReaktiveCompleteCallback
@required
- (void)onComplete __attribute__((swift_name("onComplete()")));
@end;

__attribute__((swift_name("ReaktiveErrorCallback")))
@protocol PSCReaktiveErrorCallback
@required
- (void)onErrorError:(PSCKotlinThrowable *)error __attribute__((swift_name("onError(error:)")));
@end;

__attribute__((swift_name("ReaktiveCompletableCallbacks")))
@protocol PSCReaktiveCompletableCallbacks <PSCReaktiveCompleteCallback, PSCReaktiveErrorCallback>
@required
@end;

__attribute__((swift_name("ReaktiveObservableCallbacks")))
@protocol PSCReaktiveObservableCallbacks <PSCReaktiveValueCallback, PSCReaktiveCompletableCallbacks>
@required
@end;

__attribute__((swift_name("ReaktiveSubject")))
@protocol PSCReaktiveSubject <PSCReaktiveRelay, PSCReaktiveObservableCallbacks>
@required
@property (readonly) PSCReaktiveSubjectStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("ReaktivePublishSubject")))
@protocol PSCReaktivePublishSubject <PSCReaktiveSubject>
@required
@end;

__attribute__((swift_name("ReaktiveConnectable")))
@protocol PSCReaktiveConnectable
@required
- (void)connectOnConnect:(void (^ _Nullable)(id<PSCReaktiveDisposable>))onConnect __attribute__((swift_name("connect(onConnect:)")));
@end;

__attribute__((swift_name("ReaktiveConnectableObservable")))
@protocol PSCReaktiveConnectableObservable <PSCReaktiveObservable, PSCReaktiveConnectable>
@required
@end;

__attribute__((swift_name("ReaktiveObservableWrapper")))
@interface PSCReaktiveObservableWrapper<__covariant T> : PSCBase <PSCReaktiveObservable>
- (instancetype)initWithInner:(id<PSCReaktiveObservable>)inner __attribute__((swift_name("init(inner:)"))) __attribute__((objc_designated_initializer));
- (id<PSCReaktiveDisposable>)subscribe __attribute__((swift_name("subscribe()")));
- (void)subscribeObserver:(id<PSCReaktiveObservableObserver>)observer __attribute__((swift_name("subscribe(observer:)")));
- (id<PSCReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onSubscribe:(void (^ _Nullable)(id<PSCReaktiveDisposable>))onSubscribe onError:(void (^ _Nullable)(PSCKotlinThrowable *))onError onComplete:(void (^ _Nullable)(void))onComplete onNext:(void (^ _Nullable)(T))onNext __attribute__((swift_name("subscribe(isThreadLocal:onSubscribe:onError:onComplete:onNext:)")));
- (id<PSCReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onComplete:(void (^)(void))onComplete onNext:(void (^)(T))onNext __attribute__((swift_name("subscribe(isThreadLocal:onComplete:onNext:)")));
- (id<PSCReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onNext:(void (^)(T))onNext __attribute__((swift_name("subscribe(isThreadLocal:onNext:)")));
- (id<PSCReaktiveDisposable>)subscribeIsThreadLocal:(BOOL)isThreadLocal onError:(void (^)(PSCKotlinThrowable *))onError onComplete:(void (^)(void))onComplete onNext:(void (^)(T))onNext __attribute__((swift_name("subscribe(isThreadLocal:onError:onComplete:onNext:)")));
@end;

__attribute__((swift_name("ReaktiveScheduler")))
@protocol PSCReaktiveScheduler
@required
- (void)destroy __attribute__((swift_name("destroy()")));
- (id<PSCReaktiveSchedulerExecutor>)doNewExecutor __attribute__((swift_name("doNewExecutor()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface PSCKotlinThrowable : PSCBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (PSCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface PSCKotlinException : PSCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface PSCKotlinRuntimeException : PSCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface PSCKotlinIllegalArgumentException : PSCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShortArray")))
@interface PSCKotlinShortArray : PSCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PSCShort *(^)(PSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int16_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PSCKotlinShortIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int16_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PSCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface PSCKotlinx_datetimeLocalDateTime : PSCBase <PSCKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(PSCKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PSCKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PSCKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PSCKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) PSCKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDurationUnit")))
@interface PSCKotlinDurationUnit : PSCKotlinEnum<PSCKotlinDurationUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCKotlinDurationUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) PSCKotlinDurationUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) PSCKotlinDurationUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) PSCKotlinDurationUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) PSCKotlinDurationUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) PSCKotlinDurationUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) PSCKotlinDurationUnit *days __attribute__((swift_name("days")));
+ (PSCKotlinArray<PSCKotlinDurationUnit *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface PSCRuntimeQuery<__covariant RowType> : PSCBase
- (instancetype)initWithQueries:(NSMutableArray<PSCRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<PSCRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PSCRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<PSCRuntimeSqlCursor>)execute_ __attribute__((swift_name("execute_()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<PSCRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<PSCRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol PSCRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol PSCRuntimeTransactionWithoutReturn <PSCRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<PSCRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol PSCRuntimeTransactionWithReturn <PSCRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<PSCRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol PSCRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<PSCRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<PSCRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface PSCKotlinByteIterator : PSCBase <PSCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol PSCKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol PSCKotlinSuspendFunction0 <PSCKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PSCKotlinCoroutineContextElement <PSCKotlinCoroutineContext>
@required
@property (readonly) id<PSCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PSCKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface PSCKotlinIntIterator : PSCBase <PSCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface PSCRuntimeTransacterTransaction : PSCBase <PSCRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) PSCRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol PSCRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(PSCKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(PSCDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(PSCLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol PSCRuntimeSqlCursor <PSCRuntimeCloseable>
@required
- (PSCKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (PSCDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (PSCLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("ReaktiveSubjectStatus")))
@interface PSCReaktiveSubjectStatus : PSCBase
@end;

__attribute__((swift_name("ReaktiveObserver")))
@protocol PSCReaktiveObserver
@required
- (void)onSubscribeDisposable:(id<PSCReaktiveDisposable>)disposable __attribute__((swift_name("onSubscribe(disposable:)")));
@end;

__attribute__((swift_name("ReaktiveDisposable")))
@protocol PSCReaktiveDisposable
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) BOOL isDisposed __attribute__((swift_name("isDisposed")));
@end;

__attribute__((swift_name("ReaktiveObservableObserver")))
@protocol PSCReaktiveObservableObserver <PSCReaktiveObserver, PSCReaktiveObservableCallbacks>
@required
@end;

__attribute__((swift_name("ReaktiveSchedulerExecutor")))
@protocol PSCReaktiveSchedulerExecutor <PSCReaktiveDisposable>
@required
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)submitDelayMillis:(int64_t)delayMillis task:(void (^)(void))task __attribute__((swift_name("submit(delayMillis:task:)")));
- (void)submitRepeatingStartDelayMillis:(int64_t)startDelayMillis periodMillis:(int64_t)periodMillis task:(void (^)(void))task __attribute__((swift_name("submitRepeating(startDelayMillis:periodMillis:task:)")));
@end;

__attribute__((swift_name("KotlinShortIterator")))
@interface PSCKotlinShortIterator : PSCBase <PSCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PSCShort *)next __attribute__((swift_name("next()")));
- (int16_t)nextShort __attribute__((swift_name("nextShort()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface PSCKotlinx_datetimeMonth : PSCKotlinEnum<PSCKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PSCKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PSCKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PSCKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PSCKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PSCKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PSCKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PSCKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PSCKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PSCKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PSCKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PSCKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (PSCKotlinArray<PSCKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface PSCKotlinx_datetimeLocalDate : PSCBase <PSCKotlinComparable>
- (instancetype)initWithYear:(int32_t)year month:(PSCKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PSCKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PSCKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) PSCKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface PSCKotlinx_datetimeDayOfWeek : PSCKotlinEnum<PSCKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PSCKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (PSCKotlinArray<PSCKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol PSCRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PSCKotlinIllegalStateException : PSCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface PSCKotlinCancellationException : PSCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PSCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
