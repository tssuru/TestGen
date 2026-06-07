try:
    a,b,c=8,0,1
    def g(a):
        a*=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,6,5
    print(g(a),a,b,c)
    
except: print('error')
