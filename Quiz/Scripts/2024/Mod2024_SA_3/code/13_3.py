try:
    c = 0
    n = 1
    
    class A:
        n = 2
        
        def __init__(self):
            self.c = 3
            n = 4
            A.n = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(n, end=' ')
        print(A.n, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
