try:
    __b = 0
    
    class B:
        __b = 1
        
        def __init__(self):
            self.__b = 2
            __b = 3
            B.__b = 4
    
    obj = B()
    obj.__b = 5
    try:
        print(__b, end=' ')
        print(obj.__b, end=' ')
        print(B.__b, end=' ')
        print(obj.__b, end=' ')
        print(obj._B__b)
    except:
        print('ERR')
    
except: print('error')
