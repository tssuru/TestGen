try:
    a,b,c=8,5,9
    def g(a):
        a*=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=6,2,0
    print(g(a),a,b,c)
    
except: print('error')
