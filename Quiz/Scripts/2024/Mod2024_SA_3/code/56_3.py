try:
    a = 0
    h = 1
    
    class B:
        a = 2
        
        def __init__(self):
            self.h = 3
            a = 4
            B.a = 5
    
    obj = B()
    try:
        print(a, end=' ')
        print(h, end=' ')
        print(B.a, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
