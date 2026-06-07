try:
    d = 0
    j = 1
    
    class A:
        j = 2
        
        def __init__(self):
            self.d = 3
            j = 4
            A.j = 5
    
    obj = A()
    try:
        print(d, end=' ')
        print(j, end=' ')
        print(A.j, end=' ')
        print(obj.d)
    except:
        print('ERR')
    
except: print('error')
