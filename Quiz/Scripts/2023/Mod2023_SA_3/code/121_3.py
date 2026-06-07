try:
    __c = 0
    
    class A:
        __c = 1
        
        def __init__(self):
            self.__c = 2
            __c = 3
            A.__c = 4
    
    obj = A()
    obj.__c = 5
    try:
        print(__c, end=' ')
        print(obj.__c, end=' ')
        print(A.__c, end=' ')
        print(obj.__c, end=' ')
        print(obj._A__c)
    except:
        print('ERR')
    
except: print('error')
