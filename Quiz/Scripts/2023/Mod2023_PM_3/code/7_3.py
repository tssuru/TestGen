try:
    c = 0
    j = 1
    
    class B:
        j = 2
        
        def __init__(self):
            global j
            self.j = 3
            j = 4
            B.j = 5
    
    obj = B()
    try:
        print(c, end=' ')
        print(j, end=' ')
        print(B.j, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
