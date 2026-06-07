try:
    a = 0
    h = 1
    
    class B:
        h = 2
        
        def __init__(self):
            global h
            self.a = 3
            h = 4
            B.h = 5
    
    obj = B()
    try:
        print(a, end=' ')
        print(h, end=' ')
        print(B.h, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
