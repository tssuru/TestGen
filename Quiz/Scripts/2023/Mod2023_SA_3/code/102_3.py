try:
    c = 0
    h = 1
    
    class A:
        h = 2
        
        def __init__(self):
            global h
            self.c = 3
            h = 4
            A.h = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(h, end=' ')
        print(A.h, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
