try:
    a = 0
    n = 1
    
    class A:
        a = 2
        
        def __init__(self):
            global a
            self.n = 3
            a = 4
            A.a = 5
    
    obj = A()
    try:
        print(a, end=' ')
        print(n, end=' ')
        print(A.a, end=' ')
        print(obj.n)
    except:
        print('ERR')
    
except: print('error')
