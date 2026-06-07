try:
    __c = 0
    
    class B:
        __c = 1
        
        def __init__(self):
            self.__c = 2
            __c = 3
            B.__c = 4
    
    obj = B()
    obj.__c = 5
    try:
        print(__c, end=' ')
        print(obj.__c, end=' ')
        print(B.__c, end=' ')
        print(obj.__c, end=' ')
        print(obj._B__c)
    except:
        print('ERR')
    
except: print('error')
