try:
    _d = 0
    
    class B:
        _d = 1
        
        def __init__(self):
            self._d = 2
            _d = 3
            B._d = 4
    
    obj = B()
    obj._d = 5
    try:
        print(_d, end=' ')
        print(obj._d, end=' ')
        print(B._d, end=' ')
        print(obj._d, end=' ')
        print(obj._B__d)
    except:
        print('ERR')
    
except: print('error')
