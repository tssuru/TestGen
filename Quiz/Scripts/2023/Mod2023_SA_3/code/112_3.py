try:
    a = 0
    
    class A:
        a = 1
        
        def __init__(self):
            self.a = 2
            a = 3
            A.a = 4
    
    obj = A()
    obj.a = 5
    try:
        print(a, end=' ')
        print(obj.a, end=' ')
        print(A.a, end=' ')
        print(obj.a, end=' ')
        print(obj._A__a)
    except:
        print('ERR')
    
except: print('error')
