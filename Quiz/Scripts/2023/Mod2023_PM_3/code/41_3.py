try:
    _a = 0
    
    class A:
        _a = 1
        
        def __init__(self):
            self._a = 2
            _a = 3
            A._a = 4
    
    obj = A()
    obj._a = 5
    try:
        print(_a, end=' ')
        print(obj._a, end=' ')
        print(A._a, end=' ')
        print(obj._a, end=' ')
        print(obj._A__a)
    except:
        print('ERR')
    
except: print('error')
