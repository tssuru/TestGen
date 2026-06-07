try:
    __d = 0
    
    class B:
        __d = 1
        
        def __init__(self):
            self.__d = 2
            __d = 3
            B.__d = 4
    
    obj = B()
    obj.__d = 5
    try:
        print(__d, end=' ')
        print(obj.__d, end=' ')
        print(B.__d, end=' ')
        print(obj.__d, end=' ')
        print(obj._B__d)
    except:
        print('ERR')
    
except: print('error')
