try:
    a,b,c=2,6,5
    def g(b):
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,1,7
    print(g(a),a,b,c)
    
except: print('error')
