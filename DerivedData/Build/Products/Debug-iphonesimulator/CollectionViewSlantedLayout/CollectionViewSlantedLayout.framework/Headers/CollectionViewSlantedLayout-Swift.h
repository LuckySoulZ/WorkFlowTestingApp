// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef COLLECTIONVIEWSLANTEDLAYOUT_SWIFT_H
#define COLLECTIONVIEWSLANTEDLAYOUT_SWIFT_H
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
#include <Foundation/Foundation.h>
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
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CollectionViewSlantedLayout",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@class UICollectionView;
@class CollectionViewSlantedLayout;
@class NSIndexPath;

/// The CollectionViewDelegateSlantedLayout protocol defines methods that let you coordinate with a
/// CollectionViewSlantedLayout object to implement a slanted layout.
/// The methods of this protocol define the size of items.
SWIFT_PROTOCOL("_TtP27CollectionViewSlantedLayout35CollectionViewDelegateSlantedLayout_")
@protocol CollectionViewDelegateSlantedLayout <UICollectionViewDelegate>
@optional
/// Asks the delegate for the size of the specified item’s cell.
/// If you do not implement this method, the slanted layout uses the values in its itemSize property
/// to set the size of items instead. Your implementation of this method can return a fixed set of
/// sizes or dynamically adjust the sizes based on the cell’s content.
/// \param collectionView The collection view object displaying the slanted layout.
///
/// \param collectionViewLayout The layout object requesting the information.
///
/// \param indexPath The index path of the item.
///
///
/// returns:
/// The height of the specified item (or it’s width for vertical scrolling direction).
/// The value must be greater than 0.
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(CollectionViewSlantedLayout * _Nonnull)collectionViewLayout sizeForItemAt:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class UIEvent;
@class UICollectionViewLayoutAttributes;
@class NSCoder;

/// CollectionViewSlantedCell is a subclass of UICollectionViewCell.
/// Use it or subclass it to apply the slanting mask on your cells.
SWIFT_CLASS("_TtC27CollectionViewSlantedLayout25CollectionViewSlantedCell")
@interface CollectionViewSlantedCell : UICollectionViewCell
/// :nodoc:
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

enum SlantingDirection : NSInteger;
enum ZIndexOrder : NSInteger;

/// CollectionViewSlantedLayout is a subclass of UICollectionViewLayout
/// allowing the display of slanted content on UICollectionView.
/// By default, this UICollectionViewLayout has initialize a set
/// of properties to work as designed.
SWIFT_CLASS("_TtC27CollectionViewSlantedLayout27CollectionViewSlantedLayout")
@interface CollectionViewSlantedLayout : UICollectionViewLayout
/// The slanting size.
/// The default value of this property is <code>75</code>.
@property (nonatomic) IBInspectable NSUInteger slantingSize;
/// The slanting direction.
/// The default value of this property is <code>upward</code>.
@property (nonatomic) enum SlantingDirection slantingDirection;
/// The angle, in radians, of the slanting.
/// The value of this property could be used to apply a rotation transform on the cell’s contentView in the
/// <code>collectionView(_:cellForItemAt:)</code> method implementation.
/// \code
/// if let layout = collectionView.collectionViewLayout as? CollectionViewSlantedLayout {
///    cell.contentView.transform = CGAffineTransform(rotationAngle: layout.rotationAngle)
/// }
///
/// \endcode
@property (nonatomic, readonly) CGFloat slantingAngle;
/// The scroll direction of the grid.
/// The grid layout scrolls along one axis only, either horizontally or vertically.
/// The default value of this property is <code>vertical</code>.
@property (nonatomic) enum UICollectionViewScrollDirection scrollDirection;
/// Allows to disable the slanting for the first cell.
/// Set it to <code>true</code> to disable the slanting for the first cell. The default value of this property is <code>false</code>.
@property (nonatomic) IBInspectable BOOL isFirstCellExcluded;
/// Allows to disable the slanting for the last cell.
/// Set it to <code>true</code> to disable the slanting for the last cell. The default value of this property is <code>false</code>.
@property (nonatomic) IBInspectable BOOL isLastCellExcluded;
/// The spacing to use between two items.
/// The default value of this property is 10.0.
@property (nonatomic) IBInspectable CGFloat lineSpacing;
/// The default size to use for cells.
/// If the delegate does not implement the <code>collectionView(_:layout:sizeForItemAt:)</code> method, the slanted layout
/// uses the value in this property to set the size of each cell. This results in cells that all have the same size.
/// The default value of this property is 225.
@property (nonatomic) IBInspectable CGFloat itemSize;
/// The zIndex order of the items in the layout.
/// The default value of this property is <code>ascending</code>.
@property (nonatomic) enum ZIndexOrder zIndexOrder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class CollectionViewSlantedLayoutAttributes;

@interface CollectionViewSlantedLayout (SWIFT_EXTENSION(CollectionViewSlantedLayout))
/// :nodoc:
@property (nonatomic, readonly) CGSize collectionViewContentSize;
/// :nodoc:
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)prepareLayout;
/// :nodoc:
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (CollectionViewSlantedLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


/// :nodoc:
SWIFT_CLASS("_TtC27CollectionViewSlantedLayout37CollectionViewSlantedLayoutAttributes")
@interface CollectionViewSlantedLayoutAttributes : UICollectionViewLayoutAttributes
/// :nodoc:
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Constants indicating the direction of slanting for the layout.
typedef SWIFT_ENUM(NSInteger, SlantingDirection, closed) {
/// Downward slanting direction
  SlantingDirectionDownward = 0,
/// Upward slanting direction
  SlantingDirectionUpward = 1,
};


/// Constants indicating the zIndex order of the cells int the layout.
typedef SWIFT_ENUM(NSInteger, ZIndexOrder, closed) {
/// Ascending order
  ZIndexOrderAscending = 0,
/// Descending order
  ZIndexOrderDescending = 1,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
