try:
    _c = 0
    
    class D:
        _c = 1
        
        def __init__(self):
            self._c = 2
            _c = 3
            D._c = 4
    
    obj = D()
    D._c = 5
    try:
        print(_c, end=' ')
        print(obj._c, end=' ')
        print(D._c, end=' ')
        print(obj._c, end=' ')
        print(obj._D__c)
    except:
        print('ERR')
    
except: print('error')
