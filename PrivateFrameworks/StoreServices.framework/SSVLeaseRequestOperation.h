/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseRequestOperation : SSVOperation {
    NSString *_bagKey;
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id /* block */ _outputBlock;
    SSVPlaybackLeaseRequest *_request;
    unsigned int _retryCount;
    SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (readonly, copy) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (BOOL)_loadCertificateDataIfNecessary:(id*)arg1;
- (BOOL)_resolveConfigurationAndURLReturningError:(id*)arg1;
- (BOOL)_shouldRetryForError:(id)arg1;
- (void)cancel;
- (id)certificateURLBagKey;
- (id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2;
- (id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2;
- (id)leaseRequest;
- (void)main;
- (id /* block */)outputBlock;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
