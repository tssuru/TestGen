try:
    _d = 0
    
    class C:
        _d = 1
        
        def __init__(self):
            self._d = 2
            _d = 3
            C._d = 4
    
    obj = C()
    obj._d = 5
    try:
        print(_d, end=' ')
        print(obj._d, end=' ')
        print(C._d, end=' ')
        print(obj._d, end=' ')
        print(obj._C__d)
    except:
        print('ERR')
    
except: print('error')
