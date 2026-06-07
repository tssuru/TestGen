try:
    b = 0
    n = 1
    
    class A:
        b = 2
        
        def __init__(self):
            global b
            self.b = 3
            b = 4
            A.b = 5
    
    obj = A()
    try:
        print(b, end=' ')
        print(n, end=' ')
        print(A.b, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
