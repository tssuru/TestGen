try:
    c = 0
    k = 1
    
    class A:
        k = 2
        
        def __init__(self):
            self.c = 3
            k = 4
            A.k = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(k, end=' ')
        print(A.k, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
