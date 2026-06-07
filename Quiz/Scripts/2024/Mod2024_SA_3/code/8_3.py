try:
    a = 0
    
    class D:
        a = 1
        
        def __init__(self):
            self.a = 2
            a = 3
            D.a = 4
    
    obj = D()
    obj.a = 5
    try:
        print(a, end=' ')
        print(obj.a, end=' ')
        print(D.a, end=' ')
        print(obj.a, end=' ')
        print(obj._D__a)
    except:
        print('ERR')
    
except: print('error')
