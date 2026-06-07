try:
    _a = 0
    
    class C:
        _a = 1
        
        def __init__(self):
            self._a = 2
            _a = 3
            C._a = 4
    
    obj = C()
    obj._a = 5
    try:
        print(_a, end=' ')
        print(obj._a, end=' ')
        print(C._a, end=' ')
        print(obj._a, end=' ')
        print(obj._C__a)
    except:
        print('ERR')
    
except: print('error')
