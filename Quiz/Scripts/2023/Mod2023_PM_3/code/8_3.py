try:
    _c = 0
    
    class A:
        _c = 1
        
        def __init__(self):
            self._c = 2
            _c = 3
            A._c = 4
    
    obj = A()
    obj._c = 5
    try:
        print(_c, end=' ')
        print(obj._c, end=' ')
        print(A._c, end=' ')
        print(obj._c, end=' ')
        print(obj._A__c)
    except:
        print('ERR')
    
except: print('error')
