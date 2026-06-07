try:
    a,b,c=3,2,5
    def g(b):
        global c
        a*=3
        b=3
        c=2
        return a+b+c
    
    a,b,c=8,9,2
    print(g(a),a,b,c)
    
except: print('error')
