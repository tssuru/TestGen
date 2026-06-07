try:
    _d = 0
    
    class D:
        _d = 1
        
        def __init__(self):
            self._d = 2
            _d = 3
            D._d = 4
    
    obj = D()
    D._d = 5
    try:
        print(_d, end=' ')
        print(obj._d, end=' ')
        print(D._d, end=' ')
        print(obj._d, end=' ')
        print(obj._D__d)
    except:
        print('ERR')
    
except: print('error')
