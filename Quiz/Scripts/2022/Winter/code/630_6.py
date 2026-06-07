try:
    a,b,c=2,7,4
    def g(a):
        global c
        a*=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,1,3
    print(g(a),a,b,c)
    
except: print('error')
