try:
    _a = 0
    
    class B:
        _a = 1
        
        def __init__(self):
            self._a = 2
            _a = 3
            B._a = 4
    
    obj = B()
    obj._a = 5
    try:
        print(_a, end=' ')
        print(obj._a, end=' ')
        print(B._a, end=' ')
        print(obj._a, end=' ')
        print(obj._B__a)
    except:
        print('ERR')
    
except: print('error')
