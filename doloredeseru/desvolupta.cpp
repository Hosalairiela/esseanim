// Define a new COM interface
struct IMyInterface : public IUnknown {
    // Method 17 declaration
    virtual HRESULT STDMETHODCALLTYPE Method17() = 0;
};

// Usage of the method pointer
typedef struct IMyInterfaceVtbl {
    BEGIN_INTERFACE
    
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMyInterface *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMyInterface *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMyInterface *This);

    // Other methods...

    HRESULT (STDMETHODCALLTYPE *Method17)(
        IMyInterface *This
        /* Additional Parameters if any */
    );

    END_INTERFACE
} IMyInterfaceVtbl;

interface IMyInterface {
    CONST_VTBL struct IMyInterfaceVtbl *lpVtbl;
};
