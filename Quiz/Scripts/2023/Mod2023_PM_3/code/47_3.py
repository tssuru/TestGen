try:
    __a = 0
    
    class A:
        __a = 1
        
        def __init__(self):
            self.__a = 2
            __a = 3
            A.__a = 4
    
    obj = A()
    A.__a = 5
    try:
        print(__a, end=' ')
        print(obj.__a, end=' ')
        print(A.__a, end=' ')
        print(obj.__a, end=' ')
        print(obj._A__a)
    except:
        print('ERR')
    
except: print('error')
