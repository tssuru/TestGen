try:
    a = 0
    h = 1
    
    class D:
        h = 2
        
        def __init__(self):
            global h
            self.h = 3
            h = 4
            D.h = 5
    
    obj = D()
    try:
        print(a, end=' ')
        print(h, end=' ')
        print(D.h, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
