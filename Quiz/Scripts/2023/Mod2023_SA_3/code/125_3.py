try:
    __d = 0
    
    class A:
        __d = 1
        
        def __init__(self):
            self.__d = 2
            __d = 3
            A.__d = 4
    
    obj = A()
    obj.__d = 5
    try:
        print(__d, end=' ')
        print(obj.__d, end=' ')
        print(A.__d, end=' ')
        print(obj.__d, end=' ')
        print(obj._A__d)
    except:
        print('ERR')
    
except: print('error')
