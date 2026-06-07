try:
    a,b,c=5,7,1
    def g(b):
        global c
        a=2
        b-=4
        c=2
        return a+b+c
    
    a,b,c=4,7,2
    print(g(a),a,b,c)
    
except: print('error')
