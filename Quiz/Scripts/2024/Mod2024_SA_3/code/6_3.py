try:
    _d = 0
    
    class A:
        _d = 1
        
        def __init__(self):
            self._d = 2
            _d = 3
            A._d = 4
    
    obj = A()
    A._d = 5
    try:
        print(_d, end=' ')
        print(obj._d, end=' ')
        print(A._d, end=' ')
        print(obj._d, end=' ')
        print(obj._A__d)
    except:
        print('ERR')
    
except: print('error')
