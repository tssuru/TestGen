try:
    _b = 0
    
    class C:
        _b = 1
        
        def __init__(self):
            self._b = 2
            _b = 3
            C._b = 4
    
    obj = C()
    C._b = 5
    try:
        print(_b, end=' ')
        print(obj._b, end=' ')
        print(C._b, end=' ')
        print(obj._b, end=' ')
        print(obj._C__b)
    except:
        print('ERR')
    
except: print('error')
