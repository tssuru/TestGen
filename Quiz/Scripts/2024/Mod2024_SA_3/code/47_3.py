try:
    __b = 0
    
    class A:
        __b = 1
        
        def __init__(self):
            self.__b = 2
            __b = 3
            A.__b = 4
    
    obj = A()
    obj.__b = 5
    try:
        print(__b, end=' ')
        print(obj.__b, end=' ')
        print(A.__b, end=' ')
        print(obj.__b, end=' ')
        print(obj._A__b)
    except:
        print('ERR')
    
except: print('error')
