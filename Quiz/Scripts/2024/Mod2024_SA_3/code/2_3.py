try:
    b = 0
    m = 1
    
    class B:
        b = 2
        
        def __init__(self):
            self.b = 3
            b = 4
            B.b = 5
    
    obj = B()
    try:
        print(b, end=' ')
        print(m, end=' ')
        print(B.b, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
