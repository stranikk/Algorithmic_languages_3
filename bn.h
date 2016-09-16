extern "C" BN* bn_create();
extern "C" int bn_destroy(BN* obj);
extern "C" int bn_from_string(BN* obj, const char* strData);
