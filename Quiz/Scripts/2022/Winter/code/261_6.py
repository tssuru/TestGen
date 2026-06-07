try:
    a,b,c=3,7,0
    def g(a):
        a=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=6,4,5
    print(g(a),a,b,c)
    
except: print('error')
