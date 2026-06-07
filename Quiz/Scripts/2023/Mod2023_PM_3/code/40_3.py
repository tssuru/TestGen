try:
    a = 0
    k = 1
    
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
        print(k, end=' ')
        print(B.a, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
