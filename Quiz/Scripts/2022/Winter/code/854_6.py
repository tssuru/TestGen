try:
    a,b,c=2,4,1
    def g(b):
        global c
        a=2
        b-=3
        c=3
        return a+b+c
    
    a,b,c=7,6,2
    print(g(a),a,b,c)
    
except: print('error')
