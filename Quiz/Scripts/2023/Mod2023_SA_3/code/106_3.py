try:
    c = 0
    m = 1
    
    class A:
        c = 2
        
        def __init__(self):
            self.c = 3
            c = 4
            A.c = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(m, end=' ')
        print(A.c, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
