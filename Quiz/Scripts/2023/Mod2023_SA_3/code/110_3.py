try:
    _b = 0
    
    class B:
        _b = 1
        
        def __init__(self):
            self._b = 2
            _b = 3
            B._b = 4
    
    obj = B()
    B._b = 5
    try:
        print(_b, end=' ')
        print(obj._b, end=' ')
        print(B._b, end=' ')
        print(obj._b, end=' ')
        print(obj._B__b)
    except:
        print('ERR')
    
except: print('error')
