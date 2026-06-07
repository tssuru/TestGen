try:
    a = 0
    n = 1
    
    class B:
        a = 2
        
        def __init__(self):
            global a
            self.a = 3
            a = 4
            B.a = 5
    
    obj = B()
    try:
        print(a, end=' ')
        print(n, end=' ')
        print(B.a, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
