try:
    _b = 0
    
    class D:
        _b = 1
        
        def __init__(self):
            self._b = 2
            _b = 3
            D._b = 4
    
    obj = D()
    D._b = 5
    try:
        print(_b, end=' ')
        print(obj._b, end=' ')
        print(D._b, end=' ')
        print(obj._b, end=' ')
        print(obj._D__b)
    except:
        print('ERR')
    
except: print('error')
