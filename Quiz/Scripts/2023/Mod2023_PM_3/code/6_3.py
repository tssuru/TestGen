try:
    __d = 0
    
    class D:
        __d = 1
        
        def __init__(self):
            self.__d = 2
            __d = 3
            D.__d = 4
    
    obj = D()
    D.__d = 5
    try:
        print(__d, end=' ')
        print(obj.__d, end=' ')
        print(D.__d, end=' ')
        print(obj.__d, end=' ')
        print(obj._D__d)
    except:
        print('ERR')
    
except: print('error')
