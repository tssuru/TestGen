try:
    __c = 0
    
    class D:
        __c = 1
        
        def __init__(self):
            self.__c = 2
            __c = 3
            D.__c = 4
    
    obj = D()
    D.__c = 5
    try:
        print(__c, end=' ')
        print(obj.__c, end=' ')
        print(D.__c, end=' ')
        print(obj.__c, end=' ')
        print(obj._D__c)
    except:
        print('ERR')
    
except: print('error')
