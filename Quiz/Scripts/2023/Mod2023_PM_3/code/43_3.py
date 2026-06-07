try:
    __c = 0
    
    class C:
        __c = 1
        
        def __init__(self):
            self.__c = 2
            __c = 3
            C.__c = 4
    
    obj = C()
    C.__c = 5
    try:
        print(__c, end=' ')
        print(obj.__c, end=' ')
        print(C.__c, end=' ')
        print(obj.__c, end=' ')
        print(obj._C__c)
    except:
        print('ERR')
    
except: print('error')
