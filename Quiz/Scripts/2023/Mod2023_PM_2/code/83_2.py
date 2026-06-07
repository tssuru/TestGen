try:
    a,b,c=6,3,4
    def g(b):
        a-=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=6,3,9
    print(g(a),a,b,c)
    
except: print('error')
