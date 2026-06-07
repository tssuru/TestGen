try:
    a,b,c=2,4,3
    def g(b):
        global c
        a*=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=8,1,6
    print(g(a),a,b,c)
    
except: print('error')
