try:
    b = 0
    h = 1
    
    class B:
        b = 2
        
        def __init__(self):
            global b
            self.h = 3
            b = 4
            B.b = 5
    
    obj = B()
    try:
        print(b, end=' ')
        print(h, end=' ')
        print(B.b, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
