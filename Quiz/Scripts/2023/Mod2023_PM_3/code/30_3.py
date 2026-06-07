try:
    a = 0
    j = 1
    
    class B:
        j = 2
        
        def __init__(self):
            global j
            self.a = 3
            j = 4
            B.j = 5
    
    obj = B()
    try:
        print(a, end=' ')
        print(j, end=' ')
        print(B.j, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
