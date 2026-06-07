try:
    c = 0
    j = 1
    
    class A:
        c = 2
        
        def __init__(self):
            self.j = 3
            c = 4
            A.c = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(j, end=' ')
        print(A.c, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
