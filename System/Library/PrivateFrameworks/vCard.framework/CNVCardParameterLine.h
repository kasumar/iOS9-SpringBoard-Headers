/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNVCardParameterLine <CNVCardLine>
@required
-(void)addParameterWithName:(id)arg1 value:(id)arg2;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2;
-(BOOL)canSerializeWithStrategy:(id)arg1;
-(void)serializeValueWithStrategy:(id)arg1;

@end

