// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import IGListKit;
@import RealmSwift;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="IMKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC5IMKit24IMDateCollectionViewCell")
@interface IMDateCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit23IMDateSectionController")
@interface IMDateSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class RLMSchema;
@class RLMRealm;
@class RLMObjectSchema;

SWIFT_CLASS("_TtC5IMKit7IMImage")
@interface IMImage : RealmSwiftObject
@property (nonatomic, copy) NSData * _Nullable originImageData;
@property (nonatomic, copy) NSData * _Nullable thumbnailImageData;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit32IMImageMessageCollectionViewCell")
@interface IMImageMessageCollectionViewCell : UICollectionViewCell
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit40IMImageMessageCollectionViewCellIncoming")
@interface IMImageMessageCollectionViewCellIncoming : IMImageMessageCollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
@end


SWIFT_CLASS("_TtC5IMKit40IMImageMessageCollectionViewCellOutgoing")
@interface IMImageMessageCollectionViewCellOutgoing : IMImageMessageCollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
@end


SWIFT_CLASS("_TtC5IMKit31IMImageMessageSectionController")
@interface IMImageMessageSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC5IMKit31IMImageViewerCollectionViewCell")
@interface IMImageViewerCollectionViewCell : UICollectionViewCell
- (void)layoutSubviews;
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;
@class UIView;

@interface IMImageViewerCollectionViewCell (SWIFT_EXTENSION(IMKit)) <UIScrollViewDelegate>
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidZoom:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
@end

@class NSBundle;

SWIFT_CLASS("_TtC5IMKit27IMImageViewerViewController")
@interface IMImageViewerViewController : UIViewController
- (void)viewDidLoad;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end




@interface IMImageViewerViewController (SWIFT_EXTENSION(IMKit)) <UIScrollViewDelegate>
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end

@class UICollectionView;

@interface IMImageViewerViewController (SWIFT_EXTENSION(IMKit)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class UICollectionViewLayout;

@interface IMImageViewerViewController (SWIFT_EXTENSION(IMKit)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UIEdgeInsets)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout insetForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class UITextView;

SWIFT_CLASS("_TtC5IMKit30IMInputAccessoryViewController")
@interface IMInputAccessoryViewController : UIInputViewController
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImagePickerController;

@interface IMInputAccessoryViewController (SWIFT_EXTENSION(IMKit)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
@end


@interface IMInputAccessoryViewController (SWIFT_EXTENSION(IMKit)) <UITextViewDelegate>
- (BOOL)textViewShouldBeginEditing:(UITextView * _Nonnull)textView SWIFT_WARN_UNUSED_RESULT;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
@end

@protocol NSObject;

SWIFT_CLASS("_TtC5IMKit13IMLinkPreview")
@interface IMLinkPreview : RealmSwiftObject <IGListDiffable>
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nonnull desc;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
- (id <NSObject> _Nonnull)diffIdentifier SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqualToDiffableObject:(id <IGListDiffable> _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit31IMLinkPreviewCollectionViewCell")
@interface IMLinkPreviewCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
@end


SWIFT_CLASS("_TtC5IMKit30IMLinkPreviewSectionController")
@interface IMLinkPreviewSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit16IMMemberProperty")
@interface IMMemberProperty : RealmSwiftObject
@property (nonatomic, readonly, copy) NSString * _Nonnull uid;
@property (nonatomic, readonly) NSInteger badgeNumber;
@property (nonatomic, readonly, copy) NSString * _Nonnull lastReadMessageID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
@end

@class IMUser;

SWIFT_CLASS("_TtC5IMKit9IMMessage")
@interface IMMessage : RealmSwiftObject <IGListDiffable>
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull roomID;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
@property (nonatomic, readonly, strong) IMUser * _Nullable sender;
@property (nonatomic, readonly, strong) IMUser * _Nullable member;
@property (nonatomic, readonly, copy) NSDate * _Nonnull createTime;
@property (nonatomic, readonly, strong) IMImage * _Nullable image;
@property (nonatomic, readonly, strong) IMMessage * _Nullable replyTarget;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)indexedProperties SWIFT_WARN_UNUSED_RESULT;
- (id <NSObject> _Nonnull)diffIdentifier SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqualToDiffableObject:(id <IGListDiffable> _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit26UIObservableViewController")
@interface UIObservableViewController : UIViewController
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit24IMMessagesViewController")
@interface IMMessagesViewController : UIObservableViewController
@property (nonatomic, readonly, strong) UIInputViewController * _Nullable inputAccessoryViewController;
@property (nonatomic, readonly, strong) UIInputViewController * _Nullable inputViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class IGListAdapter;

@interface IMMessagesViewController (SWIFT_EXTENSION(IMKit)) <IGListAdapterDataSource>
- (NSArray<id <IGListDiffable>> * _Nonnull)objectsForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
- (IGListSectionController * _Nonnull)listAdapter:(IGListAdapter * _Nonnull)listAdapter sectionControllerForObject:(id _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)emptyViewForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
@end


@interface IMMessagesViewController (SWIFT_EXTENSION(IMKit)) <UICollectionViewDelegate>
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC5IMKit6IMRoom")
@interface IMRoom : RealmSwiftObject <IGListDiffable>
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull desc;
@property (nonatomic, readonly, copy) NSString * _Nonnull lastMessage;
@property (nonatomic, readonly, copy) NSDate * _Nonnull createTime;
@property (nonatomic, readonly, copy) NSDate * _Nonnull updateTime;
@property (nonatomic, readonly) NSInteger numberOfUnreadMessages;
@property (nonatomic, readonly) BOOL isMuted;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)indexedProperties SWIFT_WARN_UNUSED_RESULT;
- (id <NSObject> _Nonnull)diffIdentifier SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqualToDiffableObject:(id <IGListDiffable> _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit24IMRoomCollectionViewCell")
@interface IMRoomCollectionViewCell : UICollectionViewCell
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit23IMRoomSectionController")
@interface IMRoomSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit21IMRoomsViewController")
@interface IMRoomsViewController : UIObservableViewController
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface IMRoomsViewController (SWIFT_EXTENSION(IMKit)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end




@interface IMRoomsViewController (SWIFT_EXTENSION(IMKit)) <IGListAdapterDataSource>
- (NSArray<id <IGListDiffable>> * _Nonnull)objectsForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
- (IGListSectionController * _Nonnull)listAdapter:(IGListAdapter * _Nonnull)listAdapter sectionControllerForObject:(id _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)emptyViewForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit27IMStickerCollectionViewCell")
@interface IMStickerCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit28IMStickerInputViewController")
@interface IMStickerInputViewController : UIInputViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface IMStickerInputViewController (SWIFT_EXTENSION(IMKit)) <IGListAdapterDataSource>
- (NSArray<id <IGListDiffable>> * _Nonnull)objectsForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
- (IGListSectionController * _Nonnull)listAdapter:(IGListAdapter * _Nonnull)listAdapter sectionControllerForObject:(id _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)emptyViewForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit26IMStickerSectionController")
@interface IMStickerSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit33IMSystemMessageCollectionViewCell")
@interface IMSystemMessageCollectionViewCell : UICollectionViewCell
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit32IMSystemMessageSectionController")
@interface IMSystemMessageSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit31IMTextMessageCollectionViewCell")
@interface IMTextMessageCollectionViewCell : UICollectionViewCell
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit39IMTextMessageCollectionViewCellIncoming")
@interface IMTextMessageCollectionViewCellIncoming : IMTextMessageCollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
@end


SWIFT_CLASS("_TtC5IMKit39IMTextMessageCollectionViewCellOutgoing")
@interface IMTextMessageCollectionViewCellOutgoing : IMTextMessageCollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
@end


SWIFT_CLASS("_TtC5IMKit30IMTextMessageSectionController")
@interface IMTextMessageSectionController : IGListSectionController
- (NSInteger)numberOfItems SWIFT_WARN_UNUSED_RESULT;
- (CGSize)sizeForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)cellForItemAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
- (void)didUpdateToObject:(id _Nonnull)object;
- (void)didSelectItemAtIndex:(NSInteger)index;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@interface IMTextMessageSectionController (SWIFT_EXTENSION(IMKit)) <IGListAdapterDataSource>
- (NSArray<id <IGListDiffable>> * _Nonnull)objectsForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
- (IGListSectionController * _Nonnull)listAdapter:(IGListAdapter * _Nonnull)listAdapter sectionControllerForObject:(id _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)emptyViewForListAdapter:(IGListAdapter * _Nonnull)listAdapter SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC5IMKit54IMTextMessageWithLinkPreviewCollectionViewCellIncoming")
@interface IMTextMessageWithLinkPreviewCollectionViewCellIncoming : IMTextMessageCollectionViewCellIncoming
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit54IMTextMessageWithLinkPreviewCollectionViewCellOutgoing")
@interface IMTextMessageWithLinkPreviewCollectionViewCellOutgoing : IMTextMessageCollectionViewCellOutgoing
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit6IMUser")
@interface IMUser : RealmSwiftObject <IGListDiffable>
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull nickname;
@property (nonatomic, readonly, copy) NSString * _Nonnull desc;
@property (nonatomic, readonly, copy) NSDate * _Nonnull lastLoginTime;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
- (id <NSObject> _Nonnull)diffIdentifier SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqualToDiffableObject:(id <IGListDiffable> _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end








#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
