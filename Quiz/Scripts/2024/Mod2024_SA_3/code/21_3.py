try:
    b = 0
    j = 1
    
    class D:
        j = 2
        
        def __init__(self):
            self.j = 3
            j = 4
            D.j = 5
    
    obj = D()
    try:
        print(b, end=' ')
        print(j, end=' ')
        print(D.j, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
