try:
    __a = 0
    
    class C:
        __a = 1
        
        def __init__(self):
            self.__a = 2
            __a = 3
            C.__a = 4
    
    obj = C()
    obj.__a = 5
    try:
        print(__a, end=' ')
        print(obj.__a, end=' ')
        print(C.__a, end=' ')
        print(obj.__a, end=' ')
        print(obj._C__a)
    except:
        print('ERR')
    
except: print('error')
