try:
    a,b,c=8,5,3
    def g(a):
        global c
        a*=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=6,3,7
    print(g(a),a,b,c)
    
except: print('error')
