/*
 *     Generated by class-dump 3.3.3 (64 bit) (Debug version compiled Aug 11 2011 13:55:57).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark -

/*
 * File: /Developer/Library/Xcode/PrivatePlugIns/IDEStructureNavigator.ideplugin/Contents/MacOS/IDEStructureNavigator
 * UUID: A13749F5-02D0-39B6-9B59-10D794E18BAF
 * Arch: Intel x86-64 (x86_64)
 *       Current version: 510.0.0, Compatibility version: 1.0.0
 *       Minimum Mac OS X version: 10.7.0
 *
 *       Objective-C Garbage Collection: Required
 */

@protocol IDENavigableItemFileReferenceProxy <NSObject>
@property(readonly) IDENavigableItem *primaryChildItem;

@optional
- (BOOL)showSubitems;
@end

@protocol IDEStructureEditing
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
@end

@protocol IDEStructureEditingTarget
- (id)structureEditingRemoveSubitemsTargetForParentNavigableItem:(id)arg1;
- (id)structureEditingGroupingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2 actualNavigableItem:(id *)arg3 actualChildIndex:(long long *)arg4;
- (id)structureEditingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2 actualNavigableItem:(id *)arg3 actualChildIndex:(long long *)arg4;
- (id)structureEditingDraggingSource;
@end

@protocol IDETemplateSupportingNavigator <NSObject>
- (void)addTemplatesFromCompletedContext:(id)arg1;
- (void)setupTemplateContext:(id)arg1;
@end

@protocol NSObject
- (id)description;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (struct _NSZone *)zone;
- (id)self;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@end

@protocol NSOpenSavePanelDelegate <NSObject>

@optional
- (void)panelSelectionDidChange:(id)arg1;
- (void)panel:(id)arg1 willExpand:(BOOL)arg2;
- (id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(BOOL)arg3;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
@end

@interface IDESupportStructureEditingValueTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

@interface _IDEStructureNavigatorAddFilesOpenPanelDelegate : NSObject <NSOpenSavePanelDelegate>
{
    NSSet *_urls;
}

- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (id)initWithContainer:(id)arg1;

@end

@interface IDEStructureNavigator : IDEOutlineBasedNavigator <IDETemplateSupportingNavigator>
{
    NSTableColumn *_mainTableColumn;
    IDENavigatorDataCell *_containerFileRefCell;
    IDENavigatorDataCell *_aggregateContainerFileRefCell;
    IDENavigatorDataCell *_groupCell;
    IDENavigatorDataCell *_fileReferenceCell;
    IDENavigatorDataCell *_plainObjectCell;
    NSSet *_expandedItems;
    NSSet *_expandedItemsBeforeFiltering;
    id <IDEStructureEditingDropTarget> _dropTarget;
    BOOL _restoringState;
    BOOL _clearingFilterPredicate;
    BOOL _scmStatusFilteringEnabled;
    BOOL _recentDocumentFilteringEnabled;
    BOOL _unsavedDocumentFilteringEnabled;
    NSString *_fileNamePatternString;
    NSDictionary *_previouslyRestoredStateDictionary;
    NSMutableArray *_stateChangeObservingTokens;
    id <DVTObservingToken> _selectedObjectsObservingToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)_structureNavigatorDragTypes;
+ (void)initialize;
@property BOOL unsavedDocumentFilteringEnabled; // @synthesize unsavedDocumentFilteringEnabled=_unsavedDocumentFilteringEnabled;
@property BOOL recentDocumentFilteringEnabled; // @synthesize recentDocumentFilteringEnabled=_recentDocumentFilteringEnabled;
@property BOOL scmStatusFilteringEnabled; // @synthesize scmStatusFilteringEnabled=_scmStatusFilteringEnabled;
@property(copy) NSString *fileNamePatternString; // @synthesize fileNamePatternString=_fileNamePatternString;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_handleCancelAction;
- (BOOL)_testOrDeleteItems:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_isNavigableItem:(id)arg1 childOfNavigableItems:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 hasUserFocus:(BOOL)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (struct _NSRange)outlineView:(id)arg1 initialSelectionRangeForCell:(id)arg2 proposedRange:(struct _NSRange)arg3;
- (id)plainObjectCell;
- (id)groupCell;
- (id)fileReferenceCell;
- (id)aggregateContainerFileRefCell;
- (id)containerFileRefCell;
- (id)newBasicContainerFileRefCell;
- (id)aggregateSourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
@property(copy) NSString *visibleRectString;
@property(copy) NSArray *stateSavingSelectedObjects;
@property(copy) NSSet *stateSavingExpandedItems;
- (id)stateSavingExpandedItemsBeforeFiltering;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)configureStateSavingObservers;
- (void)revealNavigableItems:(id)arg1;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (void)fiterButton_newProject:(id)arg1;
- (void)filterButton_newFile:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)_synchronizeFilteringWithOutlineView;
- (id)filterDefinitionIdentifier;
- (void)_noteEditorDocumentIsEditedStatusDidChange:(id)arg1;
- (void)triggerFilteringForDocumentURLs:(id)arg1;
- (void)updateFilterPredicate;
- (void)clearFilterPredicate;
- (void)invalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)domainIdentifier;
- (void)loadView;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_delete:(id)arg1;
- (void)delete:(id)arg1;
- (void)contextMenu_newProject:(id)arg1;
- (void)contextMenu_newDocument:(id)arg1;
- (void)newTemplateWithTemplateKind:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (id)_titleForAddFilesMenuItemUsingContextualMenuSelection:(BOOL)arg1;
- (id)_containerNameForNavigableItem:(id)arg1;
- (void)contextMenu_addFiles:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)contextMenu_groupSelected:(id)arg1;
- (void)groupSelected:(id)arg1;
- (void)contextMenu_newGroup:(id)arg1;
- (void)newGroup:(id)arg1;
- (void)addTemplatesFromCompletedContext:(id)arg1;
- (void)expandInstantiatedTemplateItem:(id)arg1;
- (void)setupTemplateContext:(id)arg1;
- (void)_setupTemplateContext:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_testOrAddFiles:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrGroupSelected:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (BOOL)_testOrAddNewGroup:(BOOL)arg1 useContextualMenuSelection:(BOOL)arg2;
- (void)_editChildItemAtIndex:(unsigned long long)arg1 ofParentItem:(id)arg2;
- (void)_expandNavigableItem:(id)arg1;
- (id)_outlineViewItemForNavigableItem:(id)arg1;
- (id)_navigableItemForOutlineViewItem:(id)arg1 representedObject:(id *)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;

@end

@interface _IDEStructureNavigatorPrivateClassForFindingBundle : NSObject
{
}

@end

