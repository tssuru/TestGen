try:
    _a = 0
    
    class D:
        _a = 1
        
        def __init__(self):
            self._a = 2
            _a = 3
            D._a = 4
    
    obj = D()
    obj._a = 5
    try:
        print(_a, end=' ')
        print(obj._a, end=' ')
        print(D._a, end=' ')
        print(obj._a, end=' ')
        print(obj._D__a)
    except:
        print('ERR')
    
except: print('error')
