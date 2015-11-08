// Generated by Apple Swift version 2.1 (swiftlang-700.1.101.6 clang-700.1.76)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import CoreLocation;
@import ObjectiveC;
@import AppKit;
@import Foundation;
@import Foundation.NSURLSession;
#endif

#import <RxCocoa/RxCocoa.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class DelegateProxy;

@interface CLLocationManager (SWIFT_EXTENSION(RxCocoa))

/// Reactive wrapper for delegate.
///
/// For more information take a look at <code>DelegateProxyType
/// </code> protocol documentation.
@property (nonatomic, readonly, strong) DelegateProxy * __nonnull rx_delegate;
@end


SWIFT_CLASS("_TtC7RxCocoa8RxTarget")
@interface RxTarget : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)dispose;
@end

@class NSControl;

SWIFT_CLASS("_TtC7RxCocoa13ControlTarget")
@interface ControlTarget : RxTarget
@property (nonatomic, readonly) SEL __null_unspecified selector;
@property (nonatomic, weak) NSControl * __nullable control;
@property (nonatomic, copy) void (^ __nullable callback)(NSControl * __nonnull);
- (nonnull instancetype)initWithControl:(NSControl * __nonnull)control callback:(void (^ __nonnull)(NSControl * __nonnull))callback OBJC_DESIGNATED_INITIALIZER;
- (void)eventHandler:(NSControl * __null_unspecified)sender;
- (void)dispose;
@end


SWIFT_CLASS("_TtC7RxCocoa12Deallocating")
@interface Deallocating : NSObject <RXDeallocating>
@property (nonatomic, readonly, copy) void (^ __nonnull deallocatingAction)(void);
- (nonnull instancetype)initWithDeallocatingAction:(void (^ __nonnull)(void))deallocatingAction OBJC_DESIGNATED_INITIALIZER;
- (void)deallocating;
@end



/// Base class for DelegateProxyType protocol.
///
/// This implementation is not thread safe and can be used only from one thread (Main thread).
SWIFT_CLASS("_TtC7RxCocoa13DelegateProxy")
@interface DelegateProxy : _RXDelegateProxy
@property (nonatomic, weak) id __nullable parentObject;

/// Initializes new instance.
///
/// \param parentObject Parent object that owns <code>DelegateProxy
/// </code> as associated object.
- (nonnull instancetype)initWithParentObject:(id __nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
- (void)interceptedSelector:(SEL __null_unspecified)selector withArguments:(NSArray * __null_unspecified)arguments;
+ (void const * __null_unspecified)_pointer:(void const * __null_unspecified)p;

/// Returns tag used to identify associated object.
///
/// \returns  Associated object tag.
+ (void const * __null_unspecified)delegateAssociatedObjectTag;

/// Initializes new instance of delegate proxy.
///
/// \returns  Initialized instance of <code>self
/// </code>.
+ (id __nonnull)createProxyForObject:(id __nonnull)object;

/// Returns assigned proxy for object.
///
/// \param object Object that can have assigned delegate proxy.
///
/// \returns  Assigned delegate proxy or <code>nil
/// </code> if no delegate proxy is assigned.
+ (id __nullable)assignedProxyFor:(id __nonnull)object;

/// Assigns proxy to object.
///
/// \param object Object that can have assigned delegate proxy.
///
/// \param proxy Delegate proxy object to assign to <code>object
/// </code>.
+ (void)assignProxy:(id __nonnull)proxy toObject:(id __nonnull)object;

/// Sets reference of normal delegate that receives all forwarded messages through self.
///
/// \param forwardToDelegate Reference of delegate that receives all messages through <code>self
/// </code>.
///
/// \param retainDelegate Should <code>self
/// </code> retain <code>forwardToDelegate
/// </code>.
- (void)setForwardToDelegate:(id __nullable)delegate retainDelegate:(BOOL)retainDelegate;

/// Returns reference of normal delegate that receives all forwarded messages through self.
///
/// \returns  Value of reference if set or nil.
- (id __nullable)forwardToDelegate;
@end


SWIFT_CLASS("_TtC7RxCocoa11KVOObserver")
@interface KVOObserver : _RXKVOObserver
@property (nonatomic, strong) KVOObserver * __nullable retainSelf;
- (void)dispose;
@end


@interface NSButton (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSControl (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSImageView (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSNotificationCenter (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSObject (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSSlider (SWIFT_EXTENSION(RxCocoa))
@end


@interface NSTextField (SWIFT_EXTENSION(RxCocoa))

/// Reactive wrapper for delegate.
///
/// For more information take a look at <code>DelegateProxyType
/// </code> protocol documentation.
@property (nonatomic, readonly, strong) DelegateProxy * __nonnull rx_delegate;
@end


@interface NSURLSession (SWIFT_EXTENSION(RxCocoa))
@end


SWIFT_CLASS("_TtC7RxCocoa32RxCLLocationManagerDelegateProxy")
@interface RxCLLocationManagerDelegateProxy : DelegateProxy <CLLocationManagerDelegate>
+ (id __nullable)currentDelegateFor:(id __nonnull)object;
+ (void)setCurrentDelegate:(id __nullable)delegate toObject:(id __nonnull)object;
- (nonnull instancetype)initWithParentObject:(id __nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
@end


@class NSNotification;

SWIFT_CLASS("_TtC7RxCocoa19RxTextFieldDelegate")
@interface RxTextFieldDelegate : DelegateProxy <NSTextFieldDelegate>
- (nonnull instancetype)initWithParentObject:(id __nonnull)parentObject OBJC_DESIGNATED_INITIALIZER;
- (void)controlTextDidChange:(NSNotification * __nonnull)notification;
+ (id __nullable)currentDelegateFor:(id __nonnull)object;
+ (void)setCurrentDelegate:(id __nullable)delegate toObject:(id __nonnull)object;
@end

#pragma clang diagnostic pop