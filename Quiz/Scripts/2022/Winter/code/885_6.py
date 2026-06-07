try:
    a,b,c=5,1,2
    def g(a):
        a*=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=8,4,0
    print(g(a),a,b,c)
    
except: print('error')
