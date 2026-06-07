try:
    c = 0
    h = 1
    
    class B:
        h = 2
        
        def __init__(self):
            self.h = 3
            h = 4
            B.h = 5
    
    obj = B()
    try:
        print(c, end=' ')
        print(h, end=' ')
        print(B.h, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
