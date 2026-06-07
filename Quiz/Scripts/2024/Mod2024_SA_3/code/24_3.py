try:
    c = 0
    k = 1
    
    class A:
        c = 2
        
        def __init__(self):
            global c
            self.c = 3
            c = 4
            A.c = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(k, end=' ')
        print(A.c, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
