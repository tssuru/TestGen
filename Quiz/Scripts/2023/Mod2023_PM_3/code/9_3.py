try:
    a = 0
    n = 1
    
    class C:
        a = 2
        
        def __init__(self):
            self.a = 3
            a = 4
            C.a = 5
    
    obj = C()
    try:
        print(a, end=' ')
        print(n, end=' ')
        print(C.a, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
