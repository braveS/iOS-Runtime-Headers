/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateScrollViewLayoutState : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableArray *_allCells;
    NSMutableArray *_candidateCells;
    NSArray *_candidateGroups;
    unsigned int _columnCount;
    float _columnWidth;
    id _completion;
    unsigned int _currentCandidateIndex;
    unsigned int _currentGroupIndex;
    unsigned int _currentRowIndex;
    float _groupBarWidth;
    NSArray *_groupHeaderCells;
    float _groupHeight;
    BOOL _grouped;
    BOOL _layoutFinished;
    float _previousGroupMaxY;
    float _rowHeight;
    } _startPosition;
    float _totalWidth;
}

@property(retain) NSMutableArray * allCells;
@property(retain) NSMutableArray * candidateCells;
@property(retain) NSArray * candidateGroups;
@property unsigned int columnCount;
@property float columnWidth;
@property(copy) id completion;
@property unsigned int currentCandidateIndex;
@property unsigned int currentGroupIndex;
@property unsigned int currentRowIndex;
@property float groupBarWidth;
@property(retain) NSArray * groupHeaderCells;
@property float groupHeight;
@property BOOL grouped;
@property BOOL layoutFinished;
@property float previousGroupMaxY;
@property float rowHeight;
@property struct CGPoint { float x1; float x2; } startPosition;
@property float totalWidth;

- (id)allCells;
- (id)candidateCells;
- (id)candidateGroups;
- (unsigned int)columnCount;
- (float)columnWidth;
- (id)completion;
- (unsigned int)currentCandidateIndex;
- (unsigned int)currentGroupIndex;
- (unsigned int)currentRowIndex;
- (void)dealloc;
- (float)groupBarWidth;
- (id)groupHeaderCells;
- (float)groupHeight;
- (BOOL)grouped;
- (BOOL)layoutFinished;
- (float)previousGroupMaxY;
- (float)rowHeight;
- (void)setAllCells:(id)arg1;
- (void)setCandidateCells:(id)arg1;
- (void)setCandidateGroups:(id)arg1;
- (void)setColumnCount:(unsigned int)arg1;
- (void)setColumnWidth:(float)arg1;
- (void)setCompletion:(id)arg1;
- (void)setCurrentCandidateIndex:(unsigned int)arg1;
- (void)setCurrentGroupIndex:(unsigned int)arg1;
- (void)setCurrentRowIndex:(unsigned int)arg1;
- (void)setGroupBarWidth:(float)arg1;
- (void)setGroupHeaderCells:(id)arg1;
- (void)setGroupHeight:(float)arg1;
- (void)setGrouped:(BOOL)arg1;
- (void)setLayoutFinished:(BOOL)arg1;
- (void)setPreviousGroupMaxY:(float)arg1;
- (void)setRowHeight:(float)arg1;
- (void)setStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTotalWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })startPosition;
- (float)totalWidth;

@end