try:
    a,b,c=2,1,4
    def g(a):
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=6,0,9
    print(g(a),a,b,c)
    
except: print('error')
